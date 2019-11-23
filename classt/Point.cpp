#include <iostream>
using namespace  std;

class Point
{
public:
    Point();
    Point(Point &&) ;
    Point(const Point &) ;
    Point &operator=(Point &&) ;
    Point &operator=(const Point &) ;
    ~Point();
    static void showCount(); // 通过类名就能查看打印,不能用一般函数(成员方法),因为只有存在对象的时候才能调用一般函数
private:
    int x,y;
    static int count ;
};
int Point::count = 0;
Point::Point()
{
    count++;
}

Point::~Point()
{
    count --;
}
void Point::showCount(){
    std::cout << "Points count:" << count << std::endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    Point p; // 在栈中创建的对象,不能用delete释放
    Point  * p1 = new Point();
    Point::showCount(); // Points count:2
    delete p1;
    Point::showCount(); // Points count:1
    return 0;
}
