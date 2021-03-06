#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

class KeyPress : public QWidget {
Q_OBJECT
public:
    KeyPress(QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent *);

    void keyReleaseEvent(QKeyEvent *);

private:
    QLabel *myLabel;
    QVBoxLayout *mainLayout;
};

#endif // KEYPRESS_H