/********************************************************************************
** Form generated from reading UI file 'convertfiledialog.ui'
**
** Created: Thu Dec 8 18:51:30 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTFILEDIALOG_H
#define UI_CONVERTFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ConvertFileDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lbInput;
    QLabel *lbOutput;
    QLineEdit *leOutput;
    QToolButton *tbOutput;
    QPushButton *btnConvert;
    QLineEdit *leInput;
    QToolButton *tbInput;
    QComboBox *cbConfig;

    void setupUi(QDialog *ConvertFileDialog)
    {
        if (ConvertFileDialog->objectName().isEmpty())
            ConvertFileDialog->setObjectName(QString::fromUtf8("ConvertFileDialog"));
        ConvertFileDialog->resize(400, 142);
        gridLayout = new QGridLayout(ConvertFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbInput = new QLabel(ConvertFileDialog);
        lbInput->setObjectName(QString::fromUtf8("lbInput"));

        gridLayout->addWidget(lbInput, 0, 0, 1, 1);

        lbOutput = new QLabel(ConvertFileDialog);
        lbOutput->setObjectName(QString::fromUtf8("lbOutput"));

        gridLayout->addWidget(lbOutput, 1, 0, 1, 1);

        leOutput = new QLineEdit(ConvertFileDialog);
        leOutput->setObjectName(QString::fromUtf8("leOutput"));
        leOutput->setReadOnly(true);

        gridLayout->addWidget(leOutput, 1, 1, 1, 1);

        tbOutput = new QToolButton(ConvertFileDialog);
        tbOutput->setObjectName(QString::fromUtf8("tbOutput"));

        gridLayout->addWidget(tbOutput, 1, 2, 1, 1);

        btnConvert = new QPushButton(ConvertFileDialog);
        btnConvert->setObjectName(QString::fromUtf8("btnConvert"));

        gridLayout->addWidget(btnConvert, 2, 0, 1, 1);

        leInput = new QLineEdit(ConvertFileDialog);
        leInput->setObjectName(QString::fromUtf8("leInput"));
        leInput->setReadOnly(true);

        gridLayout->addWidget(leInput, 0, 1, 1, 1);

        tbInput = new QToolButton(ConvertFileDialog);
        tbInput->setObjectName(QString::fromUtf8("tbInput"));

        gridLayout->addWidget(tbInput, 0, 2, 1, 1);

        cbConfig = new QComboBox(ConvertFileDialog);
        cbConfig->setObjectName(QString::fromUtf8("cbConfig"));

        gridLayout->addWidget(cbConfig, 2, 1, 1, 1);


        retranslateUi(ConvertFileDialog);
        QObject::connect(btnConvert, SIGNAL(clicked()), ConvertFileDialog, SLOT(convertSlot()));
        QObject::connect(tbInput, SIGNAL(clicked()), ConvertFileDialog, SLOT(openSlot()));
        QObject::connect(tbOutput, SIGNAL(clicked()), ConvertFileDialog, SLOT(saveSlot()));

        QMetaObject::connectSlotsByName(ConvertFileDialog);
    } // setupUi

    void retranslateUi(QDialog *ConvertFileDialog)
    {
        ConvertFileDialog->setWindowTitle(QApplication::translate("ConvertFileDialog", "Convert a file", 0, QApplication::UnicodeUTF8));
        lbInput->setText(QApplication::translate("ConvertFileDialog", "Input File", 0, QApplication::UnicodeUTF8));
        lbOutput->setText(QApplication::translate("ConvertFileDialog", "Output File", 0, QApplication::UnicodeUTF8));
        tbOutput->setText(QApplication::translate("ConvertFileDialog", "...", 0, QApplication::UnicodeUTF8));
        btnConvert->setText(QApplication::translate("ConvertFileDialog", "Convert", 0, QApplication::UnicodeUTF8));
        tbInput->setText(QApplication::translate("ConvertFileDialog", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConvertFileDialog: public Ui_ConvertFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTFILEDIALOG_H
