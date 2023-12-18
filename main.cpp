#include "mainwindow.h"
#include "vassal.h"

#include <QApplication>

using namespace std;


int main(int argc, char *argv[])
{

    Vassal poprosh(47,477,74,774,744);
   // vector<Vassal> vassal;
   // vassal.push_back(poprosh);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
