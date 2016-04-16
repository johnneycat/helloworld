/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu Apr 30 14:34:46 2015
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_dialogClass
{
public:

    void setupUi(QDialog *dialogClass)
    {
        if (dialogClass->objectName().isEmpty())
            dialogClass->setObjectName(QString::fromUtf8("dialogClass"));
        dialogClass->resize(400, 300);

        retranslateUi(dialogClass);

        QMetaObject::connectSlotsByName(dialogClass);
    } // setupUi

    void retranslateUi(QDialog *dialogClass)
    {
        dialogClass->setWindowTitle(QApplication::translate("dialogClass", "dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogClass: public Ui_dialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
