/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Thu Dec 8 18:51:30 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout;
    QLabel *lModules;
    QLabel *lbOpencc;
    QLabel *lbUchardet;
    QLabel *lOpencc;
    QLabel *lUchardet;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(400, 281);
        verticalLayoutWidget = new QWidget(AboutDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lModules = new QLabel(verticalLayoutWidget);
        lModules->setObjectName(QString::fromUtf8("lModules"));

        gridLayout->addWidget(lModules, 0, 0, 1, 1);

        lbOpencc = new QLabel(verticalLayoutWidget);
        lbOpencc->setObjectName(QString::fromUtf8("lbOpencc"));
        lbOpencc->setText(QString::fromUtf8("opencc"));

        gridLayout->addWidget(lbOpencc, 1, 0, 1, 1);

        lbUchardet = new QLabel(verticalLayoutWidget);
        lbUchardet->setObjectName(QString::fromUtf8("lbUchardet"));
        lbUchardet->setText(QString::fromUtf8("uchardet"));

        gridLayout->addWidget(lbUchardet, 2, 0, 1, 1);

        lOpencc = new QLabel(verticalLayoutWidget);
        lOpencc->setObjectName(QString::fromUtf8("lOpencc"));
        lOpencc->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(lOpencc, 1, 1, 1, 1);

        lUchardet = new QLabel(verticalLayoutWidget);
        lUchardet->setObjectName(QString::fromUtf8("lUchardet"));
        lUchardet->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(lUchardet, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About OpenCC", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("AboutDialog", "Open Chinese Convert\n"
"\n"
"http://opencc.googlecode.com\n"
"\n"
"Author: BYVoid <byvoid.kcp@gmail.com>\n"
"\n"
"Build By: Carlos Tse <copperoxide@gmail.com>", 0, QApplication::UnicodeUTF8));
        lModules->setText(QApplication::translate("AboutDialog", "Modules", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
