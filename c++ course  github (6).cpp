#include <iostream>
using namespace std;

int main()
{

    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
   /*for(int i=0;i<=5;i++)
   {
     for(int j=1;j<=5-i;j++)
     cout<<" ";
     for(int j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
}*/

for(int i=1; i<=5; i++)
{
	for(int j=1; j<=i; j--)
	cout<<"       "<<"makichu"<<endl;
}
}
