#include <iostream>
class Time{
    private:
        int hour;
        int minu;
        int sen;
    public:
        Time(int h,int m,int s):hour(h),minu(m),sen(s){};
        ~Time(){};
        // 前置预算符 一片空白 ，前置++返回的是原有的对象
        Time & operator ++ (){
            sen ++;
            return *this;
        };

        // // 后置运算符 用0来区分，因为后置++返回的是一个源对象的copy，而实际的已经++了
        // Time operator ++ (int) {
        //         Time old = *this; 
        //         // Time &old = *this; //如果是old引用的化，就是在下面++的时候，同时对自己也加了1,所以，这个不符合逻辑
        //         ++(*this); 
        //         return old; // 不管old是否为引用都会返回一个新的copy，见main中的例子
        // };

        // 非成员函数
        friend Time operator ++ (Time &time,int);

        void display(){
            std::cout << hour <<  ":" <<  minu << ":" << sen<< std::endl;
        };
};

Time operator++(Time &time, int) {
    Time old = time; 
    // Time &old = time; //如果是old引用的化，就是在下面++的时候，同时对自己也加了1,所以，这个不符合逻辑
    ++time;
    return old;
};

int main(int argc, char const *argv[])
{
    Time time(23,42,23);
    ++time;
    time.display(); // 23：42：24
    Time t = time++; // time：23：42：25，t ： 23：42：24
    ++t;// 23：42：25
    time.display(); // 23：42：25
    t.display(); //  23：42：25
    ++time; // 
    t.display(); //  23：42：25
    time.display(); // 23: 42: 26

    int i = 1; // 
    int &a = i; // 只是起了一个别名
    int b = a; // 不管 a是不是引用，赋值给b相等与重新copy
    i++;
    // i = 4;
    std::cout << &i << ":::i:::" << i << std::endl; //0x7fff3039fb40:::i:::2
    std::cout << &a  << ":::a:::"<< a<< std::endl; // 0x7fff3039fb40:::a:::2
    std::cout << &b <<":::b:::" << b << std::endl; //0x7fff3039fb44:::b:::1
    return 0;
}
