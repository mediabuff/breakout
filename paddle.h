#ifndef PADDLE_H
#define PADDLE_H

#include <QImage>
#include <QRect>

class Paddle {
public:
    Paddle();
    ~Paddle();

    void resetState();
    void moveLeft(int);
    void moveRight(int);
    QRect getRect();
    QImage & getImage();

private:
    QImage image;
    QRect rect;
};

#endif // PADDLE_H
