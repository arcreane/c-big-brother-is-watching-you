#include "QT_FaceRecognizer.h"
<<<<<<< Updated upstream
=======
#include <QtWidgets/QMainWindow>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
>>>>>>> Stashed changes

cv::VideoCapture cap;
QT_FaceRecognizer::QT_FaceRecognizer(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
<<<<<<< Updated upstream
=======
    cap.open(0);
    if (!cap.isOpened())
    {
        std::cout << "Camera isn't connected !\n";
    }
    ui.camera->hide();
    ui.profile->hide();
}

void QT_FaceRecognizer::paintEvent(QPaintEvent *event){
        cv::Mat frame;
        cap.read(frame);
        ui.image_lbl->setPixmap(QPixmap::fromImage(QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888)));

        ui.col->setText(QString::number( frame.cols));
        ui.row->setText(QString::number(frame.rows));
        /*if (cv::waitKey(40) >= 0)
        {
            break;
        }*/
       cv::waitKey(40);
>>>>>>> Stashed changes
}

void QT_FaceRecognizer::monSlot()
{
<<<<<<< Updated upstream
    qDebug()<<"test2";
=======
    /*while (true)
    {
        cv::Mat frame;
        cap.read(frame);
        ui.image_lbl->setPixmap(QPixmap::fromImage(QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888).rgbSwapped()));

        ui.col->setText(QString::number( frame.cols));
        ui.row->setText(QString::number(frame.rows));
        if (cv::waitKey(40) >= 0)
        {
            break;
        }
    }*/
>>>>>>> Stashed changes
}
