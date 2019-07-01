/********************************************************************************
** Form generated from reading UI file 'progresswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWINDOW_H
#define UI_PROGRESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_progresswindow
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;

    void setupUi(QWidget *progresswindow)
    {
        if (progresswindow->objectName().isEmpty())
            progresswindow->setObjectName(QStringLiteral("progresswindow"));
        progresswindow->resize(118, 28);
        verticalLayout = new QVBoxLayout(progresswindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        progressBar = new QProgressBar(progresswindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(100, 10));
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);


        retranslateUi(progresswindow);

        QMetaObject::connectSlotsByName(progresswindow);
    } // setupUi

    void retranslateUi(QWidget *progresswindow)
    {
        progresswindow->setWindowTitle(QApplication::translate("progresswindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class progresswindow: public Ui_progresswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWINDOW_H
