#include <iostream>
class Point{
    private:
        int x, y;
    public:
        Point(int x ,int y) :x(x),y(y){};
        void print()  const{
            std::cout << "(x,y):(" << x <<"," << y << ")"<< std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Point a(5, 10);
    Point *ptr;
    ptr = &a;
    (*ptr).print();
    ptr -> print(); // 指针调用对象方法
    return 0;
}
