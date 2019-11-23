#include <iostream>

template <typename T>
int binarySearch(T a[] , T target, int k) {
    int left = 0;
    int right = k-1;
    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(a[mid] == target) {
            return mid;
        }
        if( a[mid] < target){
            left = mid +1;
        }else{
            right = mid -1;
        }
    }
    return -1;
}
// 查找第一个值等于值的
//  也就是说当前查找的值与目标值相等或大于的时候，查找区间都会往前移动
template <typename T>
int binarySearch_first(T a[] , T target, int k) {
    int left = 0;
    int right = k-1;
    int mid  = -1;
    // 当left与right值相等的时候只取左边的值
    while (left <= right)
    {
        mid = left + ((right - left) >> 1);
        if(a[mid] >= target) {
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return left;
}

// 查找最后一个值为last的算法
//  也就是说当前查找的值与目标值相等或小于的时候，查找区间都会往前移动
template <typename T>
int binarySearch_last(T a[] , T target, int k) {
    int left = 0;
    int right = k-1;
    int mid  = -1;
    // 当left与right值相等的时候只取左边的值
    while (left <= right)
    {
        mid = left + ((right - left) >> 1);
        if(a[mid] <= target) {
            left = mid + 1;
        }else{
            right = mid -1;
        }
    }
    return right;
}


int main(int argc, char const *argv[])
{
    int a [] = {1,2,3,6,7,8,10,24,37,43};
    int i = binarySearch(a, 5, 10);
    std::cout << i << std::endl;

    int b [] = {1,2,3,6,7,8,10,10,10,10,10,24,37,43,44};
    int bi = binarySearch_first(b, 9,15);
    std::cout << bi << std::endl;

    int ci = binarySearch_last(b,11,15);
    std::cout << ci << std::endl;
    return 0;
}
