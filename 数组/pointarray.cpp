#include <iostream>

void test(int a[]) {
    a[0] = 1;
};
// int * test1() {
//     int a = 3;
//     return &a;
// }
int * search(int*a,int num) {
    for(int i =0; i<num ;i++) {
        if(a[i] == 0) {
            return &a[i];
        }
    };
    return 0;
}
int * returnnew() {
    int *a = new int();
    return a;
}
int main(int argc, char const *argv[])
{
    // int *  returnnew();
    int * p = returnnew();
    // 记得在主调函数中释放指针数组
    delete p;
    return 0;
}


// int main(int argc, char const *argv[])
// {
//      int line1[] = {1,2,9};
//      int line2[] = {4,5};
//       int line3[] = {6,7,8};
//      int * b [] = {line1, line2, line3};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             std::cout << b[i][j] << std::endl;
//         }   
//     };
//     test(line1);
//     return 0;
// }
