class Point{
private:
    int x, y;

public:
    Point(int u = 0, int v = 0) : x(u), y(v) {}
    int getX() {return x;}
    int getY() {return y;}
    void setX(const int new_x) {x = new_x;}
    void setY(const int new_y) {y = new_y;}
};


class PointArray{
private:
    Point *start;
    int length;

    changeSize(int newSize);

public:
    PointArray();
    PointArray(const Point pts[], const int toCopyLength);
    PointArray(const PointArray& other);
    ~PointArray();

    void pushBack(const Point &p);
    void insertAtPos(const int position, const Point &p);
    void removeAtPos(const int position);
    const int getSize() const {return length;}
    void clearArray() {changeSize(0);}

    Point* getAt(const int position);
    const Point* getAt(const int positon) const;
};
