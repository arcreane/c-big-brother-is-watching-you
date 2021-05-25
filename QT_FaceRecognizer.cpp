#include "QT_FaceRecognizer.h"

QT_FaceRecognizer::QT_FaceRecognizer(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void QT_FaceRecognizer::monSlot()
{
    qDebug()<<"test2";
}
