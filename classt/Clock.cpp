#include <iostream>
using namespace std;

class Clock
{
private:
int  hour,minute,second;
    /* data */
public:
void showClock();

void setTime(int hour, int minute ,int seconde);
/**
 *　一旦在类中设置了方法体，那么这个函数就是Inline的
*/
    Clock(/* args */):hour(0),minute(0),second(0){
        // hour = 0;
        // minute = 0;
        // second = 0;
        // showClock();
    };
    ~Clock();
};

// Clock::Clock(/* args */)
// {
// }

Clock::~Clock()
{   
    std::cout << "析构函数" << std::endl;
}

void Clock::showClock(){
    // printf("time %d,::::: %d", a , b);
    std::cout << "time:" <<  hour << ":" << minute << ":" << second  << std::endl;
}
void Clock::setTime(int hour , int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

Clock globClock;


int main(int argc, char const *argv[])
{
    // Clock clock;
    // clock.setTime(10, 20 , 30);
    // // clock.a;
    // // std::cout << "/* message */" << std::endl;    
    // clock.showClock();
    std::cout << "First time output:" << std::endl;
    // 引用文件作用域的对象
    globClock.showClock();
    globClock.setTime(8,30,30);
    Clock myClock(globClock);

    std::cout << "Second time output:" << std::endl;
    myClock.showClock();
    return 0;
}

