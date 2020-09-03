/********************************************************************************
** Form generated from reading UI file 'usercheck.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHECK_H
#define UI_USERCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserCheck
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *pushButtonLoginCancel;
    QPushButton *pushButtonExchenge1;
    QLabel *labelUser;
    QLineEdit *lineEditUser;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QWidget *tab;
    QPushButton *pushButtonRegisterCancel;
    QLineEdit *lineEditUserName2;
    QLineEdit *lineEditPassword2;
    QPushButton *pushButtonRegister;
    QLineEdit *lineEditPassword3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonExchange2;

    void setupUi(QWidget *UserCheck)
    {
        if (UserCheck->objectName().isEmpty())
            UserCheck->setObjectName(QString::fromUtf8("UserCheck"));
        UserCheck->resize(300, 200);
        UserCheck->setMinimumSize(QSize(300, 200));
        UserCheck->setMaximumSize(QSize(300, 200));
        verticalLayout = new QVBoxLayout(UserCheck);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(UserCheck);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(1, 1));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButtonLoginCancel = new QPushButton(tab_2);
        pushButtonLoginCancel->setObjectName(QString::fromUtf8("pushButtonLoginCancel"));
        pushButtonLoginCancel->setGeometry(QRect(150, 100, 75, 23));
        pushButtonExchenge1 = new QPushButton(tab_2);
        pushButtonExchenge1->setObjectName(QString::fromUtf8("pushButtonExchenge1"));
        pushButtonExchenge1->setGeometry(QRect(30, 130, 75, 23));
        labelUser = new QLabel(tab_2);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(40, 20, 32, 32));
        labelUser->setMinimumSize(QSize(32, 32));
        labelUser->setMaximumSize(QSize(32, 32));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(127, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 0, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        labelUser->setPalette(palette);
        lineEditUser = new QLineEdit(tab_2);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setGeometry(QRect(110, 20, 113, 32));
        lineEditUser->setMinimumSize(QSize(0, 32));
        lineEditUser->setMaximumSize(QSize(16777215, 28));
        labelPassword = new QLabel(tab_2);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(40, 60, 32, 32));
        labelPassword->setMinimumSize(QSize(32, 32));
        labelPassword->setMaximumSize(QSize(32, 32));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush9(QColor(255, 56, 82, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush10(QColor(255, 55, 108, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush11(QColor(255, 69, 190, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush11);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        labelPassword->setPalette(palette1);
        lineEditPassword = new QLineEdit(tab_2);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(110, 60, 113, 32));
        lineEditPassword->setMinimumSize(QSize(0, 32));
        lineEditPassword->setMaximumSize(QSize(16777215, 28));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(tab_2);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(30, 100, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButtonRegisterCancel = new QPushButton(tab);
        pushButtonRegisterCancel->setObjectName(QString::fromUtf8("pushButtonRegisterCancel"));
        pushButtonRegisterCancel->setGeometry(QRect(150, 100, 75, 23));
        lineEditUserName2 = new QLineEdit(tab);
        lineEditUserName2->setObjectName(QString::fromUtf8("lineEditUserName2"));
        lineEditUserName2->setGeometry(QRect(110, 10, 113, 20));
        lineEditUserName2->setMinimumSize(QSize(0, 20));
        lineEditUserName2->setMaximumSize(QSize(16777215, 20));
        lineEditPassword2 = new QLineEdit(tab);
        lineEditPassword2->setObjectName(QString::fromUtf8("lineEditPassword2"));
        lineEditPassword2->setGeometry(QRect(110, 40, 113, 20));
        lineEditPassword2->setMinimumSize(QSize(0, 20));
        lineEditPassword2->setMaximumSize(QSize(16777215, 20));
        lineEditPassword2->setEchoMode(QLineEdit::Password);
        pushButtonRegister = new QPushButton(tab);
        pushButtonRegister->setObjectName(QString::fromUtf8("pushButtonRegister"));
        pushButtonRegister->setGeometry(QRect(30, 100, 75, 23));
        lineEditPassword3 = new QLineEdit(tab);
        lineEditPassword3->setObjectName(QString::fromUtf8("lineEditPassword3"));
        lineEditPassword3->setGeometry(QRect(110, 70, 113, 20));
        lineEditPassword3->setMinimumSize(QSize(0, 20));
        lineEditPassword3->setMaximumSize(QSize(16777215, 20));
        lineEditPassword3->setEchoMode(QLineEdit::Password);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 54, 12));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 54, 12));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 54, 12));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonExchange2 = new QPushButton(tab);
        pushButtonExchange2->setObjectName(QString::fromUtf8("pushButtonExchange2"));
        pushButtonExchange2->setGeometry(QRect(30, 130, 75, 23));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(lineEditUser, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonLogin);
        QWidget::setTabOrder(pushButtonLogin, pushButtonLoginCancel);
        QWidget::setTabOrder(pushButtonLoginCancel, pushButtonExchenge1);
        QWidget::setTabOrder(pushButtonExchenge1, tabWidget);
        QWidget::setTabOrder(tabWidget, lineEditUserName2);
        QWidget::setTabOrder(lineEditUserName2, lineEditPassword2);
        QWidget::setTabOrder(lineEditPassword2, lineEditPassword3);
        QWidget::setTabOrder(lineEditPassword3, pushButtonRegister);
        QWidget::setTabOrder(pushButtonRegister, pushButtonRegisterCancel);
        QWidget::setTabOrder(pushButtonRegisterCancel, pushButtonExchange2);

        retranslateUi(UserCheck);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserCheck);
    } // setupUi

    void retranslateUi(QWidget *UserCheck)
    {
        UserCheck->setWindowTitle(QApplication::translate("UserCheck", "Form", nullptr));
        pushButtonLoginCancel->setText(QApplication::translate("UserCheck", "\345\217\226\346\266\210", nullptr));
        pushButtonExchenge1->setText(QApplication::translate("UserCheck", "\345\210\207\346\215\242\345\210\260\346\263\250\345\206\214", nullptr));
        labelUser->setText(QString());
        lineEditUser->setPlaceholderText(QApplication::translate("UserCheck", "\347\224\250\346\210\267\345\220\215", nullptr));
        labelPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QApplication::translate("UserCheck", "\345\257\206\347\240\201", nullptr));
        pushButtonLogin->setText(QApplication::translate("UserCheck", "\347\231\273\351\231\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        pushButtonRegisterCancel->setText(QApplication::translate("UserCheck", "\345\217\226\346\266\210", nullptr));
        lineEditUserName2->setPlaceholderText(QApplication::translate("UserCheck", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEditPassword2->setPlaceholderText(QApplication::translate("UserCheck", "\345\257\206\347\240\201", nullptr));
        pushButtonRegister->setText(QApplication::translate("UserCheck", "\346\263\250\345\206\214", nullptr));
        lineEditPassword3->setPlaceholderText(QApplication::translate("UserCheck", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("UserCheck", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("UserCheck", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("UserCheck", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButtonExchange2->setText(QApplication::translate("UserCheck", "\345\210\207\346\215\242\345\210\260\347\231\273\351\231\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
    } // retranslateUi

};

namespace Ui {
    class UserCheck: public Ui_UserCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHECK_H
