/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Time_label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *getTime_pushButton;
    QPushButton *clock_button;
    QPushButton *Date_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background: linear-gradient(135deg, #ff9a9e, #fad0c4, #fad0c4, #ffdde1);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 190, 411, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Time_label = new QLabel(widget);
        Time_label->setObjectName("Time_label");
        QFont font;
        Time_label->setFont(font);
        Time_label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Time_label->setStyleSheet(QString::fromUtf8("color: white;             \n"
"background-color: black;  \n"
"font-size: 20px;          \n"
"text-align: center;      \n"
"\n"
"qproperty-alignment: AlignCenter;\n"
""));

        horizontalLayout->addWidget(Time_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        getTime_pushButton = new QPushButton(widget);
        getTime_pushButton->setObjectName("getTime_pushButton");
        getTime_pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(getTime_pushButton);

        clock_button = new QPushButton(widget);
        clock_button->setObjectName("clock_button");
        clock_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(clock_button);

        Date_pushButton = new QPushButton(widget);
        Date_pushButton->setObjectName("Date_pushButton");

        horizontalLayout_2->addWidget(Date_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Time_label->setText(QString());
        getTime_pushButton->setText(QCoreApplication::translate("MainWindow", "Get Time", nullptr));
        clock_button->setText(QCoreApplication::translate("MainWindow", "clock", nullptr));
        Date_pushButton->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
