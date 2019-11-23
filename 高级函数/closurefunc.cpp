#include <iostream>

int * func1()
{
    static int  actions[5] ;
    for (int i = 0; i < 5; i++)
    {
        auto add = [] (int x) -> int { return x+i; };
        actions[i] = add;

    };
    return actions;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
