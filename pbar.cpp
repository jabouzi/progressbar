#include "pbar.h"

Pbar::Pbar( QWidget * parent, Qt::WFlags f) 
    : QMainWindow(parent, f)
{
    setupUi(this);    
    init();    
}

void Pbar::init()
{
    QSound myPlayer("communi1.wav");
    myPlayer.play();
    QTimeLine *timeLine = new QTimeLine(1000, this);
    timeLine->setFrameRange(0, 100);
    connect(timeLine, SIGNAL(frameChanged(int)), progressBar, SLOT(setValue(int)));
    connect(timeLine, SIGNAL(frameChanged(int)), this, SLOT(show_(int)));
    timeLine->start();
}

void Pbar::show_(int value)
{
    qDebug() << value << QSound::isAvailable () ;
}
