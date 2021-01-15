// 4 Templated stack

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//templated forward definition of the stack so compiler knows it exists
template <typename T>
class Stack;

template <typename T>
Stack<T> operator+(Stack<T> &a, Stack<T> &b){
    //kinda destroys the references to a and b but its okay lol
    Stack<T> temp;
    for(int i = 0; i < b.length; i++){
        temp.push(b.top());
    }
    for(int i = 0; i < a.length; i++){
        temp.push(a.top());
    }
    //now we reverse
    reverse(temp.vec.begin(), temp.vec.end());
    return temp;
}

template <typename T>
class Stack{
private:
    friend Stack<T> operator+<>(Stack<T> &a, Stack<T> &b);
    vector<T> vec;
    int length = 0;
public:
    const bool isEmpty() const {
        return (length == 0);
    }

    void push(const T &item){
        vec.push_back(item);
        length++;
    }

    const T &top() const {
        return vec.at(length - 1);
    }

    void pop(){
        vec.pop_back();
        length--;
    }
};

int main(void){
    Stack<int> a;

    cout << a.isEmpty() << endl;
    a.push(1);
    a.push(2);
    a.push(3);

    Stack<int> b;
    b.push(80);
    b.push(800);
    b.push(8000);

    Stack<int> c;
    c = a + b;


//    cout << (a+b).top();

    return 0;
}
