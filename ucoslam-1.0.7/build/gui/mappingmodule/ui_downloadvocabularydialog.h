/********************************************************************************
** Form generated from reading UI file 'downloadvocabularydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADVOCABULARYDIALOG_H
#define UI_DOWNLOADVOCABULARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadVocabularyDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *DownloadVocabularyDialog)
    {
        if (DownloadVocabularyDialog->objectName().isEmpty())
            DownloadVocabularyDialog->setObjectName(QStringLiteral("DownloadVocabularyDialog"));
        DownloadVocabularyDialog->resize(174, 101);
        verticalLayout_2 = new QVBoxLayout(DownloadVocabularyDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DownloadVocabularyDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(DownloadVocabularyDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(DownloadVocabularyDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DownloadVocabularyDialog);

        QMetaObject::connectSlotsByName(DownloadVocabularyDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadVocabularyDialog)
    {
        DownloadVocabularyDialog->setWindowTitle(QApplication::translate("DownloadVocabularyDialog", "Dialog", 0));
        label->setText(QApplication::translate("DownloadVocabularyDialog", "Downloading progress", 0));
        pushButton->setText(QApplication::translate("DownloadVocabularyDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadVocabularyDialog: public Ui_DownloadVocabularyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADVOCABULARYDIALOG_H
