#include "QT_FaceRecognizer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_FaceRecognizer w;
    w.show();
    return a.exec();
}
