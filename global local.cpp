#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
void displaymenu();
float area(const float radius);
float area(const float length,const float width);
double area(const double based , const double high);
int main()

{
	char choice;
	bool flag = true;
	do{
		displaymenu();
		cin >> choice;
		if(choice == '1'){
			float radius;
			cout << "Enter radius : ";
			cin >> radius;
			cout << "Area of circle = " <<fixed;
			cout <<setprecision(2)<< area(radius)<<endl;
		}
		else if (choice == '2'){
			float length , width;
			cout << "Enter length : " ;
			cin >> length;
			cout << "Enter width : ";
			cin >> width;
			cout << " Area of rectangle = " << fixed ;
			cout << setprecision(2)<<area(length,width);
			cout << endl;
		}
		else if (choice == '3'){
			double based , high;
			cout << "Enter based : " ;
			cin >> based;
			cout << " Enter high :";
			cin >> high;
			cout << " Area of triangle = " <<fixed;
			cout << setprecision(2)<<area(based,high);
			cout << endl;
		}
		else if (choice == '4') flag = false;
		else {
			cout << "You choose out of range is ";
			cout << "not process";
		}

		
	}while(flag);
		cout << " Exit Program " <<endl;
		return 0;
	}



float area(const float radius)
{
	return(3.14 * radius * radius);
}
float area(const float length,const float width)
{
	return(length * width);

	
}
double area(const double based , const double high)
{
	return(0.5 * based * high);
}
void displaymenu()
{
	cout << "Program calculate area " <<endl;
	cout << " 1 . Circle " <<endl;
	cout << " 2 . Rectangle " <<endl;
	cout << " 3 . Triangle " <<endl;
	cout << " 4 . Exit " <<endl;
	cout << "Enter your choose number : ";
}
	