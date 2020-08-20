#include<iostream>
using namespace std;

double  iR(double b,double a)
{
	double iR = 0;
	
	iR = ((b - a) / a) * 100;
	
	return iR;
}

int main() 

{
	double a = 0, b = 0, d = 0;
	
	cout << "This is a inflationrate-calculation program\n";
	
	cout << "Input the price of the goods in the first year\n";
	cin >> a;
	
	cout << "Input the price of the goods in the second year\n";
	cin >> b;
	
	d = iR(b,a);
	
	cout << "Calculate result\n";
	cout << d << "%";
	
	return 0;
}
