#include<iostream>
using namespace std;
int main ()
{
	cout << "============QUIZZES==========" <<endl;
	float quizz1,quizz2,quizz3,midterm,final,total ;
	cout << "Enter first quizz(10) : ";
	cin >> quizz1;
	cout << "Enter second quizz(10) : ";
	cin >> quizz2;
	cout << "Enter third quizz(10) : ";
	cin >> quizz3;
	cout << "==========MID-TETM========" <<endl;
	cout << "Enter mid-term (40) : ";
	cin >> midterm;
	cout << "==========FINAL============" << endl;
	cout << "Enter final (50) : ";
	cin >> final;
	cout << "Quizz total : " << (quizz1 + quizz2 + quizz3 )/3 << endl;
	
	cout << "Mid term : " << midterm  << endl;
	cout << "Final : " << final << endl;
	cout << "Total : " << (( quizz1 + quizz2+quizz3 )/3 ) + midterm + final << endl;
	total = (( quizz1 + quizz2+quizz3 )/3 ) + midterm + final ;
	
	cout << "Your score is " << ((total >= 50 )? "PASS" : "FAIL" ) << endl;

	return (0);






}