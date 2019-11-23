#include <iostream>
#include <math.h>
using namespace std;
class PrimitiveClass{
    // public:
    public :
    // redius作用域范围 在执行( 与)之间存在
    double area(double redius);
    // 重载的时候是不关注变量名的(也不管权限),其他都要关注
    // private:
    // double area(double aa);
};
double PrimitiveClass::area(double redius){
    // 局部作用域,声明在块中的变量名,其作用域在{}之间
    return 2* redius * M_PI;
};

int main(int argc, char const *argv[])
{
    /* code */
    PrimitiveClass pc;
    std::cout << "pc.area:::" 
    << pc.area(22.9) << std::endl;
    {
        int a = 10;
    }
    if(true) {
        int b = 10;
    }
    // 错误
    std::cout << "a:" << a << std::endl;
    // 错误
    std::cout << "b:" << b << std::endl;
    return 0;
}
