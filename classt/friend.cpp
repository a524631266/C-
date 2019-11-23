#include <iostream>
#include <math.h>
using namespace  std;
class Point
{
public:
    Point():x(0),y(0){};
    Point(int x, int y):x(x),y(y){};
    ~Point();
    // 定义了一个dist友元函数,代表这拥有dist这个方法能够直接访问内部变量
    friend float dist(Point &a,Point &b);
private:
    int x,y;
};

Point::~Point()
{
};
float  dist(Point &a,Point &b) {
    float x = a.x  - b.x; // 可以直接访问内部私有变量
    float y = a.y - b.y;
    return static_cast<float>(sqrt( x * x + y * y));
};
int main(int argc, char const *argv[])
{
    /* code */
    Point a(3,5);
    Point b(0,1);
    float dd = dist(a,b);
    std::cout << "dist: " << dd << std::endl;
    return 0;
}
