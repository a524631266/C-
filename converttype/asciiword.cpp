#include <iostream>
using namespace std;

union Bytes
{
    char char_s;
    int int_s;
    // string string_s;
} ;


int main(int argc, char const *argv[])
{
    Bytes b;
    // b.int_s = 9;
    b.char_s = '\a';
    // ss << b.char_s;
    string s ;
    char ss[] = { b.char_s, 0 };
    s =ss;
    printf("%c",b.char_s);
    std::cout  << "string: "<< s<< ";char: "<< b.char_s<<  "; int :" << b.int_s<< std::endl;
    string * s1 = nullptr;
    std::cout << s1 << std::endl;
    // string wc[2] = L"a";
    int month = 017;
    std::cout << month << std::endl;

    string ddd = "Who F\145rgus?\012";
    string dddd = "\012";
    string dddd2 = "\12";
    std::cout << (dddd == dddd2) << std::endl;
    std::cout << ddd << std::endl;


    long s = 3.14L;
    
    return 0;
}
