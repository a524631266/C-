#include <iostream>
using namespace std;

class Point
{
public:
    Point();// 如果写了其他的构造函数，如果没有明确写明无参构造函数，那么系统就不会默认生成无参构造函数
    Point(Point &&) = default;
    // const  Point &与　Point & 不是同一类型
    Point(Point & p);
    Point(const Point &);
    Point(int x, int y);
    Point &operator=(Point &&) = default;
    Point &operator=(const Point &) = default;
    ~Point();
    int getX();
    int getY();
    void showXY() {
        std::cout << "x,y: " << getX() << "," << getY() << std::endl;
    };
    void setX(int x) {
        this->x = x;
    }
private:
    int x,y;
};

Point::Point()
{
    x = 0,y =1000;
    // Point(0, 0);
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}


Point::Point(Point & p) {
    x  = p.x;
    y = p.y;
    std::cout << "this x" << &x  << std::endl;
    std::cout << "p x" << &p.x  << std::endl;
    p.x = 100;
}



Point::Point(const Point & p) {
    x  = p.x;
    y = p.y;
    std::cout << "const this x" << &x  << std::endl;
    std::cout << "const p x" << &p.x  << std::endl;
    // p.x = 100;
}

Point::~Point()
{
}

int Point::getX() {
    return x;
}
int Point::getY() {
    return y;
}

void fun1(Point p) {
    std::cout << "func1:" << p.getY() << std::endl;
}

Point func2(){
    Point a(1,2);
    return a;
}
int main(int argc, char const *argv[])
{
    Point p;
    p.setX(100);
    p.showXY();

    Point p1(p);
    p1.showXY();

    Point p2 = p; // 与　p1(p)一致
    p2.showXY();

    std::cout << "fun1::call\n" << std::endl;
    fun1(p);

    // std::cout << fun2() << std::endl;
    p2 = func2();
    p2.showXY();
    return 0;

}
