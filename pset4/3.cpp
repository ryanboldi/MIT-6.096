//3 Casting

Rectangle rect* = SOMETHING;

//3.1
Triangle tri* = static_cast<Triangle*>(rect);


//3.2
Triangle tri* = dynamic_cast<Triangle*>(rect);
