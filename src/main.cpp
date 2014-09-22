#include "principal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    //w.setNewDisplayPosition(1,2,3,4,5,6,7,8,0);
    w.show();

    return a.exec();
}
