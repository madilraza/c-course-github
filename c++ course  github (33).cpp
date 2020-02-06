#include <bits/stdc++.h>
using namespace std;

void rearrange_array_elements(int nums[], int n, int x)
{
    multimap<int, int> m;
 
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-nums[i]),nums[i]));

    int i = 0;
    for (auto t = m.begin(); t != m.end(); t++)
        nums[i++] = (*t).second ;
}
 
 
int main()
{
    int nums[] = {0, 9, 7, 2, 12, 11, 20}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   cout << "Original array: ";
   int x = 12;
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    rearrange_array_elements(nums, n, x);
 
    printf("\nArray elements after rearrange: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
      
}

