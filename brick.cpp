#include "brick.h"
#include <iostream>

Brick::Brick(int x, int y) {
//    std::cout << "Creating brick at x:" << x << " y:" << y << "\n";
    image.load(":/image/brick.png");
    if (image.isNull())
//        std::cout << "Brick not loaded!\n";

    destroyed = false;
    rect = image.rect();
    rect.translate(x, y);
}

Brick::~Brick() {
//    std::cout << "Brick deleted\n";
}

QRect Brick::getRect() {
    return rect;
}

void Brick::setRect(QRect rct) {
    rect = rct;
}

QImage & Brick::getImage() {
    return image;
}

bool Brick::isDestroyed() {
    return destroyed;
}

void Brick::setDestroyed(bool destr) {
    destroyed = destr;
}
