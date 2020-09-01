#ifndef FREEZETABLEVIEW_H
#define FREEZETABLEVIEW_H

#include <QObject>
#include <QTableView>
#include <QStandardItemModel>
#include <QScrollBar>
#include <QHeaderView>

//#include <QDebug>

/**
 * @brief The FreezeTableView class
 * 冻结前两列，一直显示 stock_id 和股票名称
 *
 */
class FreezeTableView : public QTableView
{
    Q_OBJECT
public:
    FreezeTableView(QStandardItemModel *model);
    ~FreezeTableView() override;

    void hideOtherColumn();


protected:
      void resizeEvent(QResizeEvent *event) override;
      QModelIndex moveCursor(CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override;
      void scrollTo (const QModelIndex & index, ScrollHint hint = EnsureVisible) override;

private:
      QTableView *frozenTableView;
      void init();
      void updateFrozenTableGeometry();

private slots:
      void updateSectionWidth(int logicalIndex, int oldSize, int newSize);
      void updateSectionHeight(int logicalIndex, int oldSize, int newSize);

};

#endif // FREEZETABLEVIEW_H
