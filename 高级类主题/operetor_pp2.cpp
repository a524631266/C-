#include <iostream>
using namespace std;
class Display{
    private:
        int hour;
        int minu;
        int sen;
    public:
        Display(int h,int m,int s):hour(h),minu(m),sen(s){};
        ~Display(){};


        // 非成员函数
        friend ostream & operator << (ostream &out, const Display &time);

};

ostream & operator << (ostream &out, const Display &time){
        out << time.hour <<":" << time.minu <<":" << time.sen;
        return out;
};

int main(int argc, char const *argv[])
{
    Display d(23,34,40);
    std::cout << d << std::endl; // 23:34:40
    return 0;
}
