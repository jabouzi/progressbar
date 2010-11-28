/********************************************************************************
** Form generated from reading UI file 'pbar.ui'
**
** Created: Sat Nov 27 22:19:07 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PBAR_H
#define UI_PBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pbar
{
public:
    QProgressBar *progressBar;

    void setupUi(QWidget *Pbar)
    {
        if (Pbar->objectName().isEmpty())
            Pbar->setObjectName(QString::fromUtf8("Pbar"));
        Pbar->resize(284, 68);
        progressBar = new QProgressBar(Pbar);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 20, 261, 31));
        progressBar->setValue(0);

        retranslateUi(Pbar);

        QMetaObject::connectSlotsByName(Pbar);
    } // setupUi

    void retranslateUi(QWidget *Pbar)
    {
        Pbar->setWindowTitle(QApplication::translate("Pbar", "Pbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pbar: public Ui_Pbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PBAR_H
