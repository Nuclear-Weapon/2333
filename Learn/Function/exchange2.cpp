#include<iostream>

using namespace std;

void swap(int &, int &);

int main()
{
	int a = 0,b = 0;
	
	cin >> a;
	cin >> b;
	
	swap(a,b);
}

void swap(int & a, int & b)
{
	int c = 0;
	
	c = a;
	a = b;
	b = c;
	
	cout << a << endl << b;
	return;
}
