#include <iostream>
using namespace std;

union Mark
{
    unsigned char grade[5];
    bool pass;
    unsigned int percent;
};
int main(int argc, char const *argv[])
{
    Mark mark;
    // mark.percent = 0xf1f2f3f4;
    // 10011010010
    mark.percent = 1234;
    int size = sizeof(mark);
    std::cout <<  "sizeof Mark (:===" <<sizeof(mark) << std::endl;
    std::cout <<  "sizeof percent (:===" <<sizeof(mark.percent) << std::endl;
    std::cout <<  "sizeof grade (:===" <<sizeof(mark.grade) << std::endl;
    for (int i = 0; i < size; i++)
    {
        printf("%p::::: %d\n",&mark.grade[i],mark.grade[i]);
    }
    return 0;
}

