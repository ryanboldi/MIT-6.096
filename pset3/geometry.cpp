#include <geometry.h>

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

    for (int i = 0; i < len_des; i++){
        points[i] = other.points[i];
    }
}

//destructor
PointArray::~PointArray(){
    delete[] start;
}

PointArray::changeSize(int newSize){
    Point *newArray = new Point[newSize];
    for (int i = 0; i < min(newSize, length); i++){
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
    delete start[position];
    //loop forwards so we don't overwrite
    for (int i = position; i < length - 2; i++){
        start[i] = start[i + 1];
    }
    changeSize(length - 1);
}

Point* PointArray::getAt(const int position){
    if (position > length){
        return '0';
    } else {
        return start + position;
    }
}

const Point* PointArray::getAt(const int positon) const {
    if (position > length){
        return '0';
    } else {
        return start + position;
    }
}
