#ifndef PBAR_H
#define PBAR_H

#include <QtGui> 
#include <QProgressBar>
#include "ui_pbar.h"

class Pbar : public QMainWindow, public Ui::Pbar
{
Q_OBJECT
public:
    Pbar( QWidget * parent = 0, Qt::WFlags f = 0 );
    
private:
    void init();
    QString path;    
    
private slots:
    void show_(int value);
};
#endif




