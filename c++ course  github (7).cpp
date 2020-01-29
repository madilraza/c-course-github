#include <iomanip>
#include<iostream>

using namespace std;

int main()
{
	char ch='A';
   int i,j,rows,k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    rows=5;
   for(i=1;i<=rows;i++)
   {
   	
	for(j=1;j<=i;j++)
	   cout<<ch++;
	cout<<endl;
   }	
}

