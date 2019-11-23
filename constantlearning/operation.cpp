#include <iostream>
// using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    // +=
    int a =0,b = 1,c =2,d = 4,e=11,f=2,g=10,h=2,i = 4,j =0;
    a+= 1;
    b-=1;

    c*=2;
    d/=3;

    e%=4;

    f<<= 2;
    g>>=2;

    h &= 10;

    i^=2;
    j|=0;

    std::cout << "a:"<< a  << "===" << "b:" << b << std::endl;
    
    std::cout << "c:"<< c << "===" << "d:" << d << std::endl;
    
    std::cout << "e:"<< e  << "===" << "f:" << f << std::endl;

    std::cout << "g:"<< g  << "===" << "h:" << h << std::endl;

    std::cout << "i:"<< i  << "===" << "j:" << j << std::endl;


    int aa ,bb,cc;
    aa = bb = 3;

    std::cout << "aa:"<< aa  << "===" << "bb:" << bb << "cc:" << cc << std::endl;
    cc = 6 + (bb = 5);
    std::cout << "aa:"<< aa  << "===" << "bb:" << bb << "cc:" << cc << std::endl;

    // 逗号运算符(括号内)　这样能保证以最后的值为return值
    int jj = (a = 3 * 5 , a * 4);
    std::cout<< jj<<std::endl;

    // 同时支持三元运算符
    const char* jja = jj> a?"jj>a":"jjj<=a";
    std::cout<< jja<<std::endl;
    return 0;

}
