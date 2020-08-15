#include<iostream>
using namespace std;

int main() 

{
	double a,guess,b,c;
	
	cout << "This program can caculate the square root of the number taht you input\n";
	
	cout << "Input the number taht you want to caculate\n";
	cin >> a;
	cout << "Guess a number\n";
	cin >> guess;
	
	for ( b = 0;b <= 99;b += 1)
	{
		c = a / guess;
		guess = (guess + c)/2;
	}
	
	cout << " There is the caculate result\n";
	cout << guess ;
	
	return 0;
}
