#include <iostream>

using std::cout;
using std::endl;


//template<typename|class Templatename,...> definition


template<typename T1,typename T2> void swap(T1 &a,T2 &b){
    T1 buf = a;
    a=b;
    b=buf;
}


template<typename T> class Point{
    T x;
    T y;
public:
    Point(T x, T y) : x(x), y(y) {}

    T getX() const {
        return x;
    }

    void setX(T x) {
        Point::x = x;
    }

    T getY() const {
        return y;
    }

    void setY(T y) {
        Point::y = y;
    }
};


int main() {

    Point<float> p(2.5,3);
    cout<<p.getX()<<endl;


    return 0;
}