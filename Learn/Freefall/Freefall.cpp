#include<iostream>
using namespace std;

int main()
{
	float Time,Height;
	float Gravity=9.8;
	
	cout << "This program can caculate the height of freefalll\n";
	
	cout << "Push Time into this program\n";
	cin >> Time;
	
	Height=Gravity*Time*Time/2;
	
	cout << "This is the caculate result\n";
	
	cout << Height;
	
	return 0;
}