#include <iostream>
using namespace std;
std::string global_str;
int globle_int;



extern int i; // 声明 declaration
class A{
    public:
        void display() {
            std::cout << x  << ":" << y<< std::endl;
        };
    private:
        int x;
        int y;
};

int main(int argc, char const *argv[])
{
    /* code */
    A a;
    a.display();

    std::cout << "global_str:" << global_str << std::endl;
    std::cout << "globle_int:" << globle_int << std::endl;
    std::string local_str;
    int local_int;
    std::cout << "local_str:" << local_str << std::endl;
   
    std::cout << "local_int:" << local_int << std::endl;
   

    // i = 2;
    // std::cout << i << std::endl;
//    std::cout << _ << std::endl;



   {
       int ii = 2;
   }

   int ival = 1024;
   int &refVal = ival;
   std::cout << refVal << std::endl;


   int i = 0,&r1 = i;
   double d = 0, &r2 = d;
   r2 = 3.13;
   std::cout << r2 << std::endl;
   r2 = r1;
//    i = r2;
    r2 = 40;
   std::cout << i  << "r1:" << r1<< std::endl;
   r1 = d;
   std::cout << r1 << std::endl;
   r1 = 199;
   std::cout << r1 << std::endl;
    return 0;
}
