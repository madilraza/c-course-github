#include<bits/stdc++.h>
using namespace std;

void next_greater(int nums[], int n)
{
    stack<int> data_stack;
 
    data_stack.push(nums[0]);
 
   for (int i=1; i<n; i++)
    {
        int next_element = nums[i];
 
        if (data_stack.empty() == false)
        {
            int array_element = data_stack.top();
            data_stack.pop();
 
         while (array_element < next_element)
            {
                cout << array_element << ": " << next_element
                     << endl;
                if (data_stack.empty() == true)
                   break;
                array_element = data_stack.top();
                data_stack.pop();
            }
 
           if (array_element > next_element)
                data_stack.push(array_element);
           }
 
          data_stack.push(next_element);
         }
 
     } 
int main()
{
    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    cout << "\nNext Greater Element:\n";
    next_greater(nums, n);
}

