#include "geometry.h"
#include <iostream>
#include <cmath>

PointArray::PointArray() {
    start = new Point[0];
    length = 0;
}

PointArray::PointArray(const Point pts[], const int toCopyLength){
    start = new Point[toCopyLength];
    length = toCopyLength;

    for (int i = 0; i < toCopyLength; i++){
        start[i] = pts[i];
    }
}


PointArray::PointArray(const PointArray& other){
    length = other.length;
    start = new Point[length];

    for (int i = 0; i < length; i++){
        start[i] = other.start[i];
    }
}

//destructor
PointArray::~PointArray(){
    delete[] start;
}

void PointArray::changeSize(int newSize){
    Point *newArray = new Point[newSize];
    for (int i = 0; i < std::min(newSize, length); i++){
        newArray[i] = start[i];
    }
    delete[] start;
    length = newSize;
    start = newArray;
}

void PointArray::pushBack(const Point &p){
    changeSize(length + 1);
    start[length - 1] = p;
}

void PointArray::insertAtPos(const int position, const Point &p){
    changeSize(length + 1);
    //loop backwards so i don't overwrite anything
    for (int i = length - 2; i >= position; i--){
        start[i+1] = start[i];
    }
    start[position] = p;
}

void PointArray::removeAtPos(const int position){
    //loop forwards so we don't overwrite
    for (int i = position; i < length - 2; i++){
        start[i] = start[i + 1];
    }
    changeSize(length - 1);
}

Point* PointArray::getAt(const int position){
    if (position > length){
        return NULL;
    } else {
        return start + position;
    }
}

const Point* PointArray::getAt(const int position) const {
    if (position > length){
        return NULL;
    } else {
        return start + position;
    }
}

Polygon::Polygon(const PointArray &pa) : points(pa) { polygons++; }
Polygon::Polygon(const Point arrOfPoints[], const int numPoints) : points(arrOfPoints, numPoints) { polygons++; }


Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;
    return constructorPoints;
}

int Polygon::polygons = 0; //DEFINE THE STATIC MEMBER

Rectangle::Rectangle(const Point &ll, const Point &ur) : Polygon(updateConstructorPoints(ll, Point(ll.getX(), ur.getY()), ur, Point(ur.getX(), ll.getY())), 4) {}

Rectangle::Rectangle(const int llx, const int lly, const int urx, const int ury) : Polygon(updateConstructorPoints(Point(llx, lly), Point(llx, ury), Point(urx, ury), Point(urx, lly)), 4){}

double Rectangle::area() const {
    int length = points.getAt(1)->getY() - points.getAt(0)->getY();
    int width = points.getAt(2)->getX() - points.getAt(1)->getX();
    return std::abs((double)length * width);
}
