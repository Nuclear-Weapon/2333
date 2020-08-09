#include<iostream>
using namespace std;

int main() 

{
	double a = 0,b = 0,c = 0,d = 0;
	
	cout << "This program can caculate the sonic in different tempture.\n";
	
	cout << "Please inpute the temputure\n";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	for(c = a;c <= b;c += 1)
	{
		d = 331.3 + 0.61 * c;
		cout << c;
		cout <<" C :";
		cout << d << endl;
	}	
	
	return 0 ;
}
