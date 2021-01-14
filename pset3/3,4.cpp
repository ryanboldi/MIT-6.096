// 3 Point, 4 PointArray, 5 Polygon

#include <iostream>
#include "geometry.cpp"

using namespace std;

void printAttributes(Polygon *poly);

int main(){
   //5.7 also

    int llx, lly, urx, ury;

    cout << "Please enter the lower-left and upper-right coordinates for a rectangle." << endl;
    cout << "lower-left x: ";
    cin >> llx;
    cout << "lower-left y: ";
    cin >> lly;
    cout << "upper-right x: ";
    cin >> urx;
    cout << "upper-right y: ";
    cin >> ury;
    cout << "creating rectangle object..." << endl;

    Rectangle *userRect = new Rectangle(llx, lly, urx, ury);

    int x1, x2, x3, y1, y2, y3;

    cout << endl << "Please enter the 3 coordinates for a triangle: " << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    cout << "x3: ";
    cin >> x3;
    cout << "y3: ";
    cin >> y3;
    cout << "creating triangle object..." << endl;

    Triangle *userTri = new Triangle(Point(x1,y1),Point(x2,y2),Point(x3,y3));

    cout << endl << endl << "Here are some statistics for the shapes you just entered: " << endl;
    cout << "Rectangle: " << endl;
    printAttributes(userRect);
    cout << endl << endl << "Triangle: " << endl;
    printAttributes(userTri);


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
