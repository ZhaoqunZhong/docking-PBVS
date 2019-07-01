/********************************************************************************
** Form generated from reading UI file 'modulesetmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULESETMAINWINDOW_H
#define UI_MODULESETMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleSetMainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ModuleSetMainWindow)
    {
        if (ModuleSetMainWindow->objectName().isEmpty())
            ModuleSetMainWindow->setObjectName(QStringLiteral("ModuleSetMainWindow"));
        ModuleSetMainWindow->resize(800, 600);
        centralwidget = new QWidget(ModuleSetMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ModuleSetMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModuleSetMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        ModuleSetMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ModuleSetMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ModuleSetMainWindow->setStatusBar(statusbar);

        retranslateUi(ModuleSetMainWindow);

        QMetaObject::connectSlotsByName(ModuleSetMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ModuleSetMainWindow)
    {
        ModuleSetMainWindow->setWindowTitle(QApplication::translate("ModuleSetMainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ModuleSetMainWindow: public Ui_ModuleSetMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULESETMAINWINDOW_H
