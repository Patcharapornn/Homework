#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
void display (int salary[],int num);
int cal_bonus(int salary);
int main()
{
	int n;
	int person;
	
	cout <<"Enter number of person : " ;
	cin >> person;
	int * salary = new int [person];
	for (n = 0 ; n < 2 ; n++)
	{ cout << "Enter the salary ["<<n+1<<"]  : ";
	cin >> salary[n];
	}
	display(salary,person);
	cout << setw(15) << setfill('-')<<(' ')<<endl;
	
	return 0;
}
void display (int salary[],int num)
{	 int n;
	int * bonus = new int [num];
	cout << "There are ["<<num<<"] " <<"person"<<endl;
	for (n = 0 ; n < 2 ; n++)
	{ cout << "The salary for person ["<<n+1<<"] " <<salary[n];
	 bonus[n] = cal_bonus(salary[n]);
	 cout << "and bonus " << bonus[n]<<endl;
	
	}
	
	

}
int cal_bonus(int salary)
{
	int bonus = salary * 2 ;
	return bonus;
}
