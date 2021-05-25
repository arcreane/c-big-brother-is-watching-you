#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_FaceRecognizer.h"

class QT_FaceRecognizer : public QMainWindow
{
    Q_OBJECT

public slots : 
    void monSlot();

public:
    QT_FaceRecognizer(QWidget *parent = Q_NULLPTR);

private:
    Ui::QT_FaceRecognizerClass ui;
};
