#include <iostream>
/**
 *   交换空间
 * */
template <class T>
void mySwap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
};
/**
 *   起泡排序核心思想
 * */
template <class T>
void bubbleSort(T a[], int n) {
    int hasChange = true;
    while(hasChange){
        hasChange = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i+1]) {
                mySwap(a[i],a[i+1]);
                hasChange = true;
            }
        }
    };
};

/**
 *   起泡排序核心思想 2
 *  由于在每次迭代的时候只要规模减一（每次都能够使得规模减一次）
 * */
template <class T>
void bubbleSort2(T a[], int n) {
    int hasChange = true;
    int j = n -1;
    while(hasChange){
        hasChange = false;
        for (int i = 0; i < j ; i++)
        {
            if (a[i] > a[i+1]) {
                mySwap(a[i],a[i+1]);
                hasChange = true;
            }
        }
        j -= 1;
    };
};

/**
 *   起泡排序核心思想 3
 *  由于在每次迭代的时候保证只走到上次更换的索引位置(lastindex)
 * */
template <class T>
void bubbleSort3(T a[], int n) {
    int hasChange = true;
    int j = n -1;
    while(hasChange){
        hasChange = false;
        int lastindex = 0;
        for (int i = 0; i < j ; i++)
        {
            if (a[i] > a[i+1]) {
                mySwap(a[i],a[i+1]);
                hasChange = true;
                lastindex= i;
            }   
        }
        j = lastindex;
    };
};

int main(int argc, char const *argv[])
{
    /* code */
    // int a = 10, b = 11;
    // mySwap(a,b);
    int a[] = {2,3,100,6,7,34,454,4,233,23};
    bubbleSort3(a, 10);
    for(int aa : a)
    {
        std::cout << aa << std::endl;
    }
    return 0;
}
