class Point{
private:
    int x, y;

public:
    Point(int u = 0, int v = 0) : x(u), y(v) {}
    int getX() const {return x;}
    int getY() const {return y;}
    void setX(const int new_x) {x = new_x;}
    void setY(const int new_y) {y = new_y;}
};

class PointArray{
private:
    Point *start;
    int length;

    void changeSize(int newSize);

public:
    PointArray();
    PointArray(const Point pts[], const int toCopyLength);
    PointArray(const PointArray& other);
    ~PointArray();

    void pushBack(const Point &p);
    void insertAtPos(const int position, const Point &p);
    void removeAtPos(const int position);
    int getSize() const {return length;}
    void clearArray() {changeSize(0);}

    Point* getAt(const int position);
    const Point* getAt(const int positon) const;
};

class Polygon{
protected:
    static int polygons;
    PointArray points;

public:
    Polygon(const Point arrOfPoints[], const int length);
    Polygon(const PointArray &pa);

    virtual double area() const = 0;
    static int getNumPolygons() {return polygons;}
    int getNumSides() const {return points.getSize();}
    const PointArray* getPoints() const {return &points;}

    ~Polygon() {polygons--;}
};


class Rectangle : public Polygon{
public:
    Rectangle(const Point &a, const Point &b);
    Rectangle(const int a, const int b, const int c, const int d);
    virtual double area() const;
};


class Triangle : public Polygon{
public:
    Triangle(const Point &a, const Point &b, const Point &c);
    virtual double area() const;
};
