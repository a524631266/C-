#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;



template <class T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


template <class T>
void insertSort(T *p, int n){
    for (int i = 1; i < n; i++)
    {
        T i1 = i;
        T now = p[i];
        for (int j = i - 1; j >= 0 ; j--)
        {
            // 稳定排序
            if(p[j] > now) {
                // swap(p[j], p[i1--]);
                p[j+1] = p[j]; 
            }else {
                p[j + 1] = now;
                break;
            }
        }
    }
}

class SimpleArray{
    private:
        int n = 0;
        int *arr ;
    public:
        SimpleArray(int n):n(n) {
            arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                // std::cout << random() << std::endl;
                arr[i] = (int) random() / 1000000;
            }
        }
        int * getArray(){
            return arr;
        }
        void printff() {
            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << std::endl;
            }
        };
        int * getarr() {
            return arr;
        }
        void insertSort(){
            clock_t start = clock();
            // std::cout << "start time" << start << std::endl;
            for (int i = 1; i < n; i++)
            {
                int now = arr[i];
                int j = i - 1;
                for (; j >= 0 ; j--)
                {
                    // 稳定排序
                    if(arr[j] > now) {
                        // swap(p[j], p[i1--]);
                        arr[j+1] = arr[j]; 
                    }else {
                        break;
                    }
                }
                arr[j + 1] = now;
            }
            clock_t end = clock();
             std::cout << "cost time :" << (end - start) / 1000  << "ms"<< std::endl;
        }
};


int main(int argc, char const *argv[])
{
    /* code */
    // int a[] = {2,3,20,6,7,34,454,4,233,23};
    // int n = 10;
    SimpleArray s = SimpleArray(10000);
    s.insertSort();
    // s.printff();
    return 0;
}
