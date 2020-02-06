#include <iostream>
using namespace std;
int main ()
{
	int row, a, b, space;
	b='a';
	space=b;
	for(row=1; row<=5; row++)
	{
		for(a=1; a<space; a++)
		cout<<" ";
		
		for(a=1; a<=2*row-1; a++)
		cout<<b;
		cout<<"\n";
	}
	
	
	
	return 0;
}

