#include "QT_FaceRecognizer.h"
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

QT_FaceRecognizer::QT_FaceRecognizer(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void QT_FaceRecognizer::monSlot()
{
    cv::VideoCapture cap(0);
    if (!cap.isOpened())
    {
        std::cout << "Camera isn't connected !\n";
    }
    while (true)
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
    }
}


