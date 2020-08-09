#include<iostream>
using namespace std;

int main() 

{
	double a = 0,b = 16.78,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0;
	
	cout << "This program can caculate your workpay and can show you the money that you finaly get\n";
	
	cout << "Input your workhour in a week\n";
	cin >> a;

	while(a < 0 || a > 168)
	{
		cout << "This workhour can not been indentify,please input it again\n";
		cin >> a;
	}
	
	cout << "Input the family numbers in your family\n";
	cin >> c;
	
	if(a <= 40)
	{
		d = a * b;
		e = 0.06 * d;
		f = 0.14 * d;
		g = 0.05 * d;
		if(c >= 3)
		{
			h = d - e - f - g - 45;
		}
		h = d - e - f - g - 10;
	}
	
	if(a > 40)
	{
		d = (a - 40)* 1.5 + a * b;
		e = 0.06 * d;
		f = 0.14 * d;
		g = 0.05 * d;
		if(c >= 3)
		{
			h = d - e - f - g - 45;
		}
		h = d - e - f - g - 10;
	}
	
	cout << "Your workpay\n";
	cout << d << endl;
	cout << "Social insurance tax\n";
	cout << e << endl;
	cout << "American federal tax\n";
	cout << f << endl;
	cout << "American state tax\n";
	cout << f << endl;
	cout << "The money that you finaly get\n";
	cout << h;



	
	return 0;
}
