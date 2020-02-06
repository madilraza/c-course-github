#include <iostream>
#include<conio.h>
using namespace std;
void red();
void gray();
void white();
void green();
void blue();
void yellow();
void read7();
void read8();
void read9();
void read10();
void read11();
void read12();
int main ()
{
	

	int x;
	cout<<" Enter your selection for the funcition\n";
	cout<<" Enter 1 for display the first loop \n";
	cout<<" Enter 2 for dispaly  the division\n";
	cout<<" Enter 3 for taking the factorial of the no  funcition\n";
	cout<<" Enter 4  for taking the odd and their sum\n";
	cout<<" Enter 5 to dispaly a triangle at a risk\n";
	cout<<" Enter 6 to print he area of circle";
	
	cin>>x;
	if(x==1)
	red();
	else if(x==2)
	gray();
	else if(x==3)
	white();
	else if(x==4)
	green();
	else if(x==5)
	yellow();
	else if(x==6)
	blue();
	else
	cout<<" your commond is invailid please give a valid commond";
	return 0;
}
	void red()
{
    float number, sum = 0.0;
    
    do {
        cout<<"Enter your values for THE DESIRED ADIITION\n ";
        cout<<"until you enter THE no 01  ";
        cin>>number;
        sum += number;
    }
    while(number !=01);

    cout<<"Total sum = "<<sum;
    
    
}
	
	
	void gray()
	{
long dividend, divisor;
int ch;
do //start of do loop
{ //do some processing
cout << "Enter dividend: "; cin >> dividend;
cout << "Enter divisor: "; cin >> divisor;
cout << "Quotient is " << dividend / divisor;
cout << ", remainder is " << dividend % divisor;
cout << "\nDo another? (y/n): "; //do it again?
cin >> ch;
}
while( ch != 980 ); //loop condition

}
	
void white()
{
	int x,y;
	unsigned long fact=1;
	cout<<" ENTER THE NUMBER ";
	cin>>x;
	for(y=x; y>0;  y--)
	fact*=y;
	cout<<" the value of the factorial is "<<fact;

}

void blue()
{ 	float rad;
float rad2;
cout<<"enter the length of the rectangle to get the parameter "<<endl;
cin>>rad;
cin>>rad2;
float area=rad*rad2;
cout<<"length*"<<"widht="<<"rectangle is ="<<area<<endl;

}


void yellow()
{
   int i,j,rows,k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    
    cin>>rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<k++;
	cout<<endl;
   }	
}



	void green()
	{
    int i, n, sum = 0;

    cout << "\n\n Display n terms of odd natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << " The odd numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i - 1 << " ";
        sum += 2 * i - 1;
    }
    cout << "\n The Sum of odd Natural Numbers upto ";
	cout << n<<"\n terms="<< sum << endl;
}




























void read7()


{
const unsigned char RED = 215; //solid color (primes)
const unsigned char GRAY = 167; //gray (non primes)
unsigned char ch;
//for each screen position
for(int count=0; count<80*80-1; count++)
{
ch = RED;
for(int j=2; j<count; j++) //divide by every integer from
if(count%j == 0) //2 on up; if remainder is 0,
{
ch = GRAY; //it’s not prime
break; //break out of inner loop
}
cout << ch; //display the character
}
getch(); //freeze screen until keypress

}













