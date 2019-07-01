/********************************************************************************
** Form generated from reading UI file 'cameracontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACONTROLS_H
#define UI_CAMERACONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cameracontrols
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *cameracontrols)
    {
        if (cameracontrols->objectName().isEmpty())
            cameracontrols->setObjectName(QStringLiteral("cameracontrols"));
        cameracontrols->resize(741, 44);
        cameracontrols->setMaximumSize(QSize(16777215, 44));
        horizontalLayout = new QHBoxLayout(cameracontrols);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(cameracontrols);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(cameracontrols);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        label_2 = new QLabel(cameracontrols);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(cameracontrols);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(cameracontrols);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/done.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(254, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(cameracontrols);

        QMetaObject::connectSlotsByName(cameracontrols);
    } // setupUi

    void retranslateUi(QWidget *cameracontrols)
    {
        cameracontrols->setWindowTitle(QApplication::translate("cameracontrols", "Form", 0));
        label->setText(QApplication::translate("cameracontrols", "Camera Index", 0));
        label_2->setText(QApplication::translate("cameracontrols", "Camera Resolution", 0));
        pushButton->setText(QApplication::translate("cameracontrols", "Aply", 0));
    } // retranslateUi

};

namespace Ui {
    class cameracontrols: public Ui_cameracontrols {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACONTROLS_H
