#include "dialog.h"
#include "ui_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);


    w.show();


    return a.exec();
}
