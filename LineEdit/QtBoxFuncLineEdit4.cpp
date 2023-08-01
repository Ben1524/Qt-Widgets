#include "qtboxfunclineedit4.h"
#include <QIcon>

const QString PATH_TO_OPEN_EYE_IMG = ":/res/pic/open_eye.png";
const QString PATH_TO_CLOSED_EYE_IMG = ":/res/pic/closed_eye.png";

QtBoxFuncLineEdit4::QtBoxFuncLineEdit4(QWidget *parent)
    : QLineEdit(parent)
{
    setFixedSize(250, 35);
    setEchoMode(QLineEdit::Password);
    setPlaceholderText("Enter password");
    setStyleSheet("QLineEdit {padding-right: 25px;"
                  "font-size:15px}");

    eyeBtn->setIcon(QIcon(PATH_TO_CLOSED_EYE_IMG));
    eyeBtn->setFixedSize(height(), height());
    eyeBtn->move(width()-eyeBtn->width(), 0);
    connect(eyeBtn, SIGNAL(clicked()), this, SLOT(changeEchoMode()));
    eyeBtn->setCursor(Qt::PointingHandCursor);
    eyeBtn->setStyleSheet("QPushButton {border: none;}");
}

void QtBoxFuncLineEdit4::changeEchoMode()
{
    if (echoMode() == QLineEdit::Normal) {
        setEchoMode(QLineEdit::Password);
        eyeBtn->setIcon(QIcon(PATH_TO_CLOSED_EYE_IMG));
    }
    else {
        setEchoMode(QLineEdit::Normal);
        eyeBtn->setIcon(QIcon(PATH_TO_OPEN_EYE_IMG));
    }
}