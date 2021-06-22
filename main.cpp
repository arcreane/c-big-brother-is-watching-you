#include "QT_FaceRecognizer.h"
#include <QtWidgets/QApplication>

#include <QtWidgets/QMainWindow>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_FaceRecognizer w;
    w.show();
    return a.exec();
}
