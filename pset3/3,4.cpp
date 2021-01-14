// 3 Point, 4 PointArray, 5 Polygon

#include <iostream>
#include "geometry.cpp"

using namespace std;

void printAttributes(Polygon *poly);

int main(){
    const Point *bl = new Point(1,2);
    const Point *tr = new Point(2,4);
    const PointArray *pa = new PointArray();

    return 0;
}

//5.6
// 1) if the constructors were private, only classes of that type would be able to create new classes of that type. So, we would not be able to create new Point objects.
// 2) All the pointers to each of the fields gets deleted and the memory gets given back to the system. Pointarray's destructor will be called.
// 3) Protected so that we could access them from inherited classes but not from random code.
// 4) Polygon's getNumSides will be called because it is not virtual.

//5.7
void printAttributes(Polygon *poly){
    cout << "Area: " << poly->area() << endl << "Points: ";
    for (int i = 0; i < poly->getPoints()->getSize(); i++){
        cout << "(" << poly->getPoints()->getAt(i)->getX() << ", " << poly->getPoints()->getAt(i)->getY() << ") ";
    }
}
