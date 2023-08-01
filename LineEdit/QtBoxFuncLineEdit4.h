#ifndef QTBOXFUNCLINEEDIT4_H
#define QTBOXFUNCLINEEDIT4_H
#include <QLineEdit>
#include <QPushButton>

class QtBoxFuncLineEdit4 : public QLineEdit
{
    Q_OBJECT

public:
    QtBoxFuncLineEdit4(QWidget *parent = nullptr);

private:
    QPushButton *eyeBtn = new QPushButton(this);

private slots:
    void changeEchoMode();
};
#endif // QTBOXFUNCLINEEDIT4_H