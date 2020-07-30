#include<iostream>
using namespace std;

int main()
{
	float t,h;
	float g=9.8;
	
	cout << "This program can caculate the height of freefalll\n";
	
	cout << "Push Time into this program\n";
	cin >> t;
	
	h=g*t*t/2;
	
	cout << "This is the caculate result\n";
	
	cout << h;
	
	return 0;
}