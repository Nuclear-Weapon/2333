#include<iostream>
using namespace std;

int main() 

{
	int a = 0,b = 0, c = 0,c = 0;
	
	cout << "Riddles!!";
	
	cout << "Inpute the thousands digit";
	cin >> a;
	
	cout << "Inpute the hundreds digit";
	cin >> b;
	
	while(a == b)
	{
		cout << "This number can not be used,please input it again";
		cin >> b;
	}
	
	cout << "Inpute the tens digit";
	cin >> c;
	
	while(a == c || b == c)
	{
		cout << "This number can not be used,please input it again";
		cin >> c;
	}
	
	cout << "Inpute the digits";
	cin >> d;
	
	while(a == d || b == d || c = d)
	{
		cout << "This number can not be used,please input it again";
		cin >> d;
	}
	
	return 0;
}
