#include<iostream>
using namespace std;

double conv(double b)
{
	double a = 0;
	
	a = b / 0.264179;
	
	return a;
}

int main() 
{
	double a = 0, b = 0, d = 0;
	int c = 0;
	
	cout << "This program can cacualte the Mpg index of your car\n";
	
	cout << "Please input the mails that your car will travel\n";
	cin >> a;
	
	cout << "Please input the litre (or gallon)that your car will consume\n";
	cin >> b;
	
	cout << "Input 1 if you want direct input gallon\n";
	cout << "Input 2 if you want input litre\n";
	cin >> c;
	
	switch(c)
	{
		case 1:
		d = a / b;
		break;
		
		case 2:
		b = conv(b);
		d = a / b;
		break;
	}	
	
	cout << "Caculate result\n";
	cout << d;
	
	return 0;
}
