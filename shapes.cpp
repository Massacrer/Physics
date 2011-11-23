#include "includes.h"

class Shape {
    private:
        int x;
        int y;
        int z;

    public:
        Shape(int,int,int);
        void setCoords(int,int,int);
};

Shape::Shape (int a, int b, int c) {
    x = a; y = b; z = c;
}

void Shape::setCoords(int x, int y, int z) {
    this->x = x; this->y = y; this->z = z;
}

vector<Shape> shapes;
