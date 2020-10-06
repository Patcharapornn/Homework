#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void display(string name[5],float price[5][3])
{
	
	for (int i =0;i<5; ++i){
	cout << i+1 <<setw(10)<<setfill(' ')<< name[i] <<setw(10)<<setfill(' ')<< price[i][0] <<setw(10)<<setfill(' ')<< price[i][1] <<setw(10)<<setfill(' ')<< price[i][2] <<endl;
	}
}
void calprice(float price[5][3])
{
	
	for (int i =0;i<5; ++i){
		price[i][1] = price[i][0]* 0.07;
		price[i][2] = price[i][0] + price[i][1] ;
	}
}
int main()
{
	string name[5];
	float price[5][3];
	for (int i =0;i<5; ++i){
		
		cout << "Enter Product name : ";
		cin >> name[i];
		cout << "price : ";
		cin >>price[i][0];
	}
	
	cout << "No "<<setw(10)<<setfill(' ')<<"Product"<<setw(10)<<setfill(' ')<<"price"<<setw(10)<<setfill(' ')<<"vat7%"<<setw(10)<<setfill(' ')<<"net"<<setw(10)<<setfill(' ')<<' '<<endl;

	calprice(price);
	display(name,price);
	
	
	

	return 0;
}
