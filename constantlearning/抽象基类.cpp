#include <iostream>
using std::cout;using std::endl;

class MarketDepartment
{
    public:
    // 打折策略
        virtual void net_price() = 0; 
        void say() {
                 cout << "111"  << endl;
        };
};
class A: public MarketDepartment
{
    public:
        void net_price() {
                cout << "打折方式1"  << endl;
        };
};
class B: public MarketDepartment
{
    public:
        void net_price() {
                cout << "打折方式2"  << endl;
        };
};

int main(int argc, char const *argv[])
{
    MarketDepartment *a = new A();
    MarketDepartment *b = new B();
    a->net_price();
    b->net_price();
    a->say();
    b->say();

    // MarketDepartment *md = new MarketDepartment();
    return 0;
}
