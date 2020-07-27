#include <iostream>
#include <string>
using namespace std;
int main()
{
	//input
	string name = "Wanthanee Prachuabsupakij";
    int salary = 25000;
	int sale = 30000;
	float com = 0.05;
	int total;
    cout << "Your name = ";
	cin >> name;
	
	
	//output
	
    cout << "Total revenue = " <<(salary + (sale * com ) ) << "\tbath" <<endl;
	
	return(0);
}
