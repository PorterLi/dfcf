#include "freezetableview.h"

FreezeTableView::FreezeTableView(QStandardItemModel *model)
{
    setModel(model);
    frozenTableView = new QTableView(this);

    init();

    //connect the headers and scrollbars of both tableviews together
    connect(horizontalHeader(),&QHeaderView::sectionResized, this,
            &FreezeTableView::updateSectionWidth);
    connect(verticalHeader(),&QHeaderView::sectionResized, this,
            &FreezeTableView::updateSectionHeight);

    connect(frozenTableView->verticalScrollBar(), &QAbstractSlider::valueChanged,
            verticalScrollBar(), &QAbstractSlider::setValue);
    connect(verticalScrollBar(), &QAbstractSlider::valueChanged,
            frozenTableView->verticalScrollBar(), &QAbstractSlider::setValue);

}


FreezeTableView::~FreezeTableView()
{
      delete frozenTableView;
}


void FreezeTableView::init()
{
      frozenTableView->setModel(model());
      frozenTableView->setFocusPolicy(Qt::NoFocus);
      frozenTableView->verticalHeader()->hide();
      frozenTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

      viewport()->stackUnder(frozenTableView);
//! [init part1]

//! [init part2]
      frozenTableView->setStyleSheet("QTableView { border: none;"
                                     "background-color: #DDDDDD;"
                                     "selection-background-color: #999}"); //for demo purposes
      frozenTableView->setSelectionModel(selectionModel());
      for (int col = 2; col < model()->columnCount(); ++col){
          frozenTableView->setColumnHidden(col, true);
      }

      frozenTableView->setColumnWidth(0, columnWidth(0) );
      frozenTableView->setColumnWidth(1, columnWidth(0) );
      frozenTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      frozenTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      frozenTableView->show();

      updateFrozenTableGeometry();

      setHorizontalScrollMode(ScrollPerPixel);
      setVerticalScrollMode(ScrollPerPixel);
      frozenTableView->setVerticalScrollMode(ScrollPerPixel);
}

void FreezeTableView::updateSectionWidth(int logicalIndex, int /* oldSize */, int newSize)
{
      if (logicalIndex == 1){
          int width = frozenTableView->columnWidth(0);
          frozenTableView->setColumnWidth(0, (width + newSize)/2);
          frozenTableView->setColumnWidth(1, (width + newSize)/2);
          updateFrozenTableGeometry();
      }
}

void FreezeTableView::updateSectionHeight(int logicalIndex, int /* oldSize */, int newSize)
{
      frozenTableView->setRowHeight(logicalIndex, newSize);
}

void FreezeTableView::resizeEvent(QResizeEvent * event)
{
      QTableView::resizeEvent(event);
      updateFrozenTableGeometry();
 }

QModelIndex FreezeTableView::moveCursor(CursorAction cursorAction,
                                          Qt::KeyboardModifiers modifiers)
{
      QModelIndex current = QTableView::moveCursor(cursorAction, modifiers);

      if (cursorAction == MoveLeft && current.column() > 1
              && visualRect(current).topLeft().x() < frozenTableView->columnWidth(0) + frozenTableView->columnWidth(1)){
            const int newValue = horizontalScrollBar()->value() + visualRect(current).topLeft().x()
                                 - frozenTableView->columnWidth(0) - frozenTableView->columnWidth(1);
            horizontalScrollBar()->setValue(newValue);
//            qDebug()<< "error";
      }
      return current;
}


void FreezeTableView::scrollTo (const QModelIndex & index, ScrollHint hint){
    if (index.column() > 0)
        QTableView::scrollTo(index, hint);
}


void FreezeTableView::updateFrozenTableGeometry()
{
      frozenTableView->setGeometry(verticalHeader()->width() + frameWidth(),
                                   frameWidth(), columnWidth(0) + columnWidth(1),
                                   viewport()->height()+horizontalHeader()->height());
}



void FreezeTableView::hideOtherColumn()
{
    for (int col = 2; col < model()->columnCount(); ++col){
        frozenTableView->setColumnHidden(col, true);
    }
}

