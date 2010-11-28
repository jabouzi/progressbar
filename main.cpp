#include <QApplication>
#include "pbar.h"

using namespace::std;
//
int main(int argc, char ** argv)
{
    QApplication app( argc, argv );
    QApplication::setApplicationName("pbar");
    Pbar pbar;
    pbar.show(); 
    app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
    return app.exec();
}
