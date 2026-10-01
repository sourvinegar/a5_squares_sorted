
#include "squares.hpp"
#include <algorithm>
# include <iostream>
#include <cstdlib>
// must be of O(n)
void sorted_squares(int *nums, int n){

    int *arr = new int[n]{}; // copy array, also points to the start
    int *end = new int(n-1); // will be used as a pointer to end of copy array
    int *start = new int(0);
    //int *ptr1 = new int(0); // for loop counter
    int *temp = new int(0); // temp value for comparison 

    std::copy(nums, nums+n, arr); // make a copy of input array
    nums  = nums + n - 1;

    while(*end >= *start)
    {
        *temp = *(arr + *end);     // temp is equal to the element in copy array at index end
        if(abs(*(arr + *start)) > abs(*temp))   // is abs of start of the arr greater than the abs of the end of the array
        {  
            *nums = (*(arr + *start) * *(arr + *start));    // change element at nums to this sqrt
            *start = (*start) + 1;         // point to a new start arr + 1
        }
        else
        {  
            *nums = ((*temp) * (*temp)); // if the element at the end is bigger than at the start
            *end = (*end) - 1;       // point to a new end, end - 1
        }

       nums = nums - 1; // point to nums - 1
    }

   // delete ptr1;
    delete[] arr;
    delete temp;
    delete end;

}

//Complexity O(nlogn)
// Given to compare
void square_then_sort(int* nums, int n) {
for (int i{0}; i<n; i++)
nums[i] = nums[i] * nums[i];
std::sort(nums, nums + n);
}

//compares two array
bool equal_arr(const int* a, const int* b, int n) {
    int *ptr1 = new int(0);

    for(*ptr1; *ptr1 < n; (*ptr1)++)
    {
    
        if(*a != *b)
        {
            delete ptr1;
            return false;
        }
        a = a + 1;
        b = b + 1;
    }

    delete ptr1;
    return true;
}
