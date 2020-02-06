#include<iostream>
#include<algorithm>
using namespace std;
 
void swap_elements(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
void array_wave(int nums[], int n)
{
    sort(nums, nums+n);
 
    for (int i=0; i<n-1; i += 2)
        swap_elements(&nums[i], &nums[i+1]);
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    array_wave(nums, n);
    cout << "\nWave form of the said array: ";
    for (int i=0; i<n; i++)
       cout << nums[i] << " ";
    return 0;
}

