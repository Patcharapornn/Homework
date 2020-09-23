#include <iostream>
using namespace std;
int Calage (int);
int main()
{
	int year,age;
	
	for(int i=1;i<=3;i++)
	{ cout <<"Enter year"<<i<<":";
	  cin >> year;
	  int a = Calage(year);
	  cout <<"Age "<<":"<< a <<endl;
	  
	}
    return 0;
}
int Calage(int y)
      {
		int a;
		 a = 2563 - y;

		return(a);
      }