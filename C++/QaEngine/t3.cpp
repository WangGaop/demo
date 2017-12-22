
#include "stdafx.h"
#include "QPainter.h"
#include "QPen.h"
#include "QBrush.h"
#include "QColor.h"
#include "QApplication.h"
#include "QImage.h"
#include "QFont.h"
#include "QString.h"
#include "QInput.h"



int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    while (true)
    {
        if (QInput::getKeyDown(Qa::KeyCode::Key_0)) {
            qDraw->drawText(10, 10, QString("按下了0"));
        }
        else if (QInput::getKeyUp(Qa::KeyCode::Key_0)){
            qDraw->drawText(100, 10, QString("松开了0"));
        }
        if (QInput::isMouse()) {
            QInput::getMouseMsg();
            qDraw->clearRect(50, 50, 150, 150);
            qDraw->drawText(100, 100, QString("")+ QInput::getWheel());
        }
    }
    

	return a.exec();
}