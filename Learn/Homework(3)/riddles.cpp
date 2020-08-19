#include<iostream>
using namespace std;

int main() 

{
	int a = 0,b = 0, c = 0,d = 0;
	
	cout << "Riddles!!\n";
	
	for (d = 1;d <= 9;d += 2)
	{
		for (a = 3;a <= 9;a += 3)
		{
			if(a == d)
			{
				continue;
			}
			
			c = a/3;
			
			if(c == d)
			{
				continue;
			}
			
			b = 27 - c - d - a;
			
			if(b == d)
			{
				continue;
			}
			
			if(a == b)
			{
				continue;
			}
			
			if(a >= 10)
			{
				continue;
			}
			
			if(b >= 10)
			{
				continue;
			}
			
			if(d >= 10)
			{
				continue;
			}
			
			cout << a << b << c << d;
		}
	}
	
	
	return 0;
}
