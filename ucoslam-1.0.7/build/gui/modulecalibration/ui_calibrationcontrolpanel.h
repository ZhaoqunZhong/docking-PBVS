/********************************************************************************
** Form generated from reading UI file 'calibrationcontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONCONTROLPANEL_H
#define UI_CALIBRATIONCONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calibrationControlPanel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_images_remove;
    QPushButton *pb_images_clear;
    QPushButton *pb_compute;
    QFrame *line;
    QLabel *label_3;
    QPlainTextEdit *pte_results;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_saveCalibration;

    void setupUi(QWidget *calibrationControlPanel)
    {
        if (calibrationControlPanel->objectName().isEmpty())
            calibrationControlPanel->setObjectName(QStringLiteral("calibrationControlPanel"));
        calibrationControlPanel->resize(686, 765);
        verticalLayout = new QVBoxLayout(calibrationControlPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(calibrationControlPanel);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        listWidget = new QListWidget(calibrationControlPanel);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pb_images_remove = new QPushButton(calibrationControlPanel);
        pb_images_remove->setObjectName(QStringLiteral("pb_images_remove"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/not_done_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_images_remove->setIcon(icon);

        horizontalLayout_2->addWidget(pb_images_remove);

        pb_images_clear = new QPushButton(calibrationControlPanel);
        pb_images_clear->setObjectName(QStringLiteral("pb_images_clear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_images_clear->setIcon(icon1);

        horizontalLayout_2->addWidget(pb_images_clear);

        pb_compute = new QPushButton(calibrationControlPanel);
        pb_compute->setObjectName(QStringLiteral("pb_compute"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/config.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_compute->setIcon(icon2);

        horizontalLayout_2->addWidget(pb_compute);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(calibrationControlPanel);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(calibrationControlPanel);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        pte_results = new QPlainTextEdit(calibrationControlPanel);
        pte_results->setObjectName(QStringLiteral("pte_results"));
        pte_results->setReadOnly(true);

        verticalLayout->addWidget(pte_results);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pb_saveCalibration = new QPushButton(calibrationControlPanel);
        pb_saveCalibration->setObjectName(QStringLiteral("pb_saveCalibration"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_saveCalibration->setIcon(icon3);

        horizontalLayout_3->addWidget(pb_saveCalibration);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(calibrationControlPanel);

        QMetaObject::connectSlotsByName(calibrationControlPanel);
    } // setupUi

    void retranslateUi(QWidget *calibrationControlPanel)
    {
        calibrationControlPanel->setWindowTitle(QApplication::translate("calibrationControlPanel", "Form", 0));
        label_2->setText(QApplication::translate("calibrationControlPanel", "Selected Images", 0));
        pb_images_remove->setText(QApplication::translate("calibrationControlPanel", "Remove", 0));
        pb_images_clear->setText(QApplication::translate("calibrationControlPanel", "Clear", 0));
        pb_compute->setText(QApplication::translate("calibrationControlPanel", "Compute", 0));
        label_3->setText(QApplication::translate("calibrationControlPanel", "Calibration Results", 0));
        pb_saveCalibration->setText(QApplication::translate("calibrationControlPanel", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class calibrationControlPanel: public Ui_calibrationControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONCONTROLPANEL_H
