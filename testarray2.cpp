#include<iostream>
using namespace std;
int main()
{
	int a[5][5];
	int r,c;
	cout << "Enter number of rows : ";
	cin >> r;
	cout << "Enter number of colums : ";
	cin >>c;
	cout << "Matrix input : ";
	for(int i =0  ; i<r ; ++i)
	{for(int j =0 ; j<c ;++j)
		{ cin >> a[i][j];
		}
	}

	for(int i = 0 ; i<r ; ++i)
	{for(int j =0 ; j<c ;++j)
	 {	a[i][j] = a[i][j] *2;
		cout <<a[i][j]<< " ";
     }
	cout <<endl;
	}
	for(int i = 0 ; i<c ; ++i)
	{for(int j =0 ; j<r ;++j)
	 {	
		cout <<a[j][i]<< " ";
     }
	cout <<endl;
	}
	return 0;
}