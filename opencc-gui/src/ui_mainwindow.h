/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Dec 8 18:51:30 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "texteditor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionConvert_file;
    QAction *actionClear;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionAbout;
    QAction *actionEnglish;
    QAction *actionTraditional_Chinese;
    QAction *actionSimplified_Chinese;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *vbox1;
    QHBoxLayout *hbox1;
    QComboBox *cbConfig;
    QPushButton *btnConvert;
    TextEditor *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Edit;
    QMenu *menuLanguage;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        MainWindow->setAcceptDrops(true);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionLoad->setShortcut(QString::fromUtf8("Ctrl+O"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setShortcut(QString::fromUtf8("Ctrl+S"));
        actionConvert_file = new QAction(MainWindow);
        actionConvert_file->setObjectName(QString::fromUtf8("actionConvert_file"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setShortcut(QString::fromUtf8("Ctrl+Q"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setShortcut(QString::fromUtf8("Ctrl+Z"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setShortcut(QString::fromUtf8("Ctrl+Y"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setShortcut(QString::fromUtf8("Ctrl+X"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setShortcut(QString::fromUtf8("Ctrl+C"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setShortcut(QString::fromUtf8("Ctrl+V"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionSelect_All->setShortcut(QString::fromUtf8("Ctrl+A"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actionTraditional_Chinese = new QAction(MainWindow);
        actionTraditional_Chinese->setObjectName(QString::fromUtf8("actionTraditional_Chinese"));
        actionTraditional_Chinese->setCheckable(true);
        actionSimplified_Chinese = new QAction(MainWindow);
        actionSimplified_Chinese->setObjectName(QString::fromUtf8("actionSimplified_Chinese"));
        actionSimplified_Chinese->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vbox1 = new QVBoxLayout();
        vbox1->setSpacing(6);
        vbox1->setObjectName(QString::fromUtf8("vbox1"));
        vbox1->setSizeConstraint(QLayout::SetMaximumSize);
        hbox1 = new QHBoxLayout();
        hbox1->setSpacing(6);
        hbox1->setObjectName(QString::fromUtf8("hbox1"));
        cbConfig = new QComboBox(centralWidget);
        cbConfig->setObjectName(QString::fromUtf8("cbConfig"));

        hbox1->addWidget(cbConfig);

        btnConvert = new QPushButton(centralWidget);
        btnConvert->setObjectName(QString::fromUtf8("btnConvert"));

        hbox1->addWidget(btnConvert);


        vbox1->addLayout(hbox1);

        textEdit = new TextEditor(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setAcceptDrops(false);

        vbox1->addWidget(textEdit);


        gridLayout->addLayout(vbox1, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menuLanguage = new QMenu(menu_Edit);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionConvert_file);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menu_Edit->addAction(actionUndo);
        menu_Edit->addAction(actionRedo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionClear);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionCut);
        menu_Edit->addAction(actionCopy);
        menu_Edit->addAction(actionPaste);
        menu_Edit->addAction(actionDelete);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionSelect_All);
        menu_Edit->addSeparator();
        menu_Edit->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionTraditional_Chinese);
        menuLanguage->addAction(actionSimplified_Chinese);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(btnConvert, SIGNAL(released()), MainWindow, SLOT(convertSlot()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionClear, SIGNAL(triggered()), textEdit, SLOT(clear()));
        QObject::connect(actionUndo, SIGNAL(triggered()), textEdit, SLOT(undo()));
        QObject::connect(actionRedo, SIGNAL(triggered()), textEdit, SLOT(redo()));
        QObject::connect(actionCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actionCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actionPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actionSelect_All, SIGNAL(triggered()), textEdit, SLOT(selectAll()));
        QObject::connect(actionLoad, SIGNAL(triggered()), MainWindow, SLOT(loadSlot()));
        QObject::connect(actionSave, SIGNAL(triggered()), MainWindow, SLOT(saveSlot()));
        QObject::connect(actionConvert_file, SIGNAL(triggered()), MainWindow, SLOT(convertFileSlot()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(aboutSlot()));
        QObject::connect(actionEnglish, SIGNAL(triggered()), MainWindow, SLOT(changeLanguageToEngSlot()));
        QObject::connect(actionSimplified_Chinese, SIGNAL(triggered()), MainWindow, SLOT(changeLanguageToZhsSlot()));
        QObject::connect(actionTraditional_Chinese, SIGNAL(triggered()), MainWindow, SLOT(changeLanguageToZhtSlot()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open Chinese Convert", 0, QApplication::UnicodeUTF8));
        actionLoad->setText(QApplication::translate("MainWindow", "&Load...", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save...", 0, QApplication::UnicodeUTF8));
        actionConvert_file->setText(QApplication::translate("MainWindow", "&Convert a file...", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select &All", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", 0, QApplication::UnicodeUTF8));
        actionTraditional_Chinese->setText(QApplication::translate("MainWindow", "Traditional Chinese", 0, QApplication::UnicodeUTF8));
        actionSimplified_Chinese->setText(QApplication::translate("MainWindow", "Simplified Chinese", 0, QApplication::UnicodeUTF8));
        btnConvert->setText(QApplication::translate("MainWindow", "Convert", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
