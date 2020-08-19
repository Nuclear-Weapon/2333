#include<iostream>
using namespace std;

int main() 

{
	int a = 0,b = 0,c = 0;
	
	cout << "This is a stargate program\n";	
	cout << "Input your birthday\n";
	cout << "Which month(number) it is\n";//输入生日月份
	cin >> a;

	while(a < 1 || a > 12)//检测月份是否正确
	{
		cout << "This is not a real month,please input it again\n";
		cin >> a;
	}
	
	cout << "Which day(in the month) it is\n";//输入生日日期
	cin >> b;
	
	while((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) && (b < 1 || b > 31))//检测日期是否正确
	{
		cout << "This is not a real day,please input it again\n";
		cin >> b;
	}
	
	while(a == 2 && (b < 1 || b > 29))//检测日期是否正确
	{
		cout << "This is not a real day,please input it again\n";
		cin >> b;
	}
	
	while(a == 4 || a == 6 || a == 9 || a == 11 && (b < 1 || b > 30))//检测日期是否正确
	{
		cout << "This is not a real day,please input it again\n";
		cin >> b;
	}
	
	while((a = 1 && (b >= 20 && b <= 31))|| (a = 2 &&(b >= 1 && b <= 18)))
	{
			cout << "Your stargate is Aquarius";
			
			return 0;
	}
	
	while((a = 2 && (b >= 19 && b <= 31))|| (a = 3 &&(b >= 1 && b <= 20)))
	{
			cout << "Your stargate is Pieces";
			
			return 0;
	}

	while((a = 3 && (b >= 21 && b <= 31))|| (a = 4 &&(b >= 1 && b <= 19)))
	{
			cout << "Your stargate is Aries";
			
			return 0;
	}
	
	while((a = 4 && (b >= 20 && b <= 31))|| (a = 5 &&(b >= 1 && b <= 20)))
	{
			cout << "Your stargate is Taurus";
			
			return 0;
	}

	while((a = 5 && (b >= 21 && b <= 31))|| (a = 6 &&(b >= 1 && b <= 21)))
	{
			cout << "Your stargate is Gemini";
			
			return 0;
	}
	
	while((a = 6 && (b >= 22 && b <= 31))|| (a = 7 &&(b >= 1 && b <= 22)))
	{
			cout << "Your stargate is Cancer";
			
			return 0;
	}
	
	while((a = 7 && (b >= 23 && b <= 31))|| (a = 8 &&(b >= 1 && b <= 22)))
	{
			cout << "Your stargate is Leo";
			
			return 0;
	}
	
	while((a = 8 && (b >= 23 && b <= 31))|| (a = 9 &&(b >= 1 && b <= 22)))
	{
			cout << "Your stargate is Virgo";
			
			return 0;
	}
	
	while((a = 9 && (b >= 23 && b <= 31))|| (a = 10 &&(b >= 1 && b <= 22)))
	{
			cout << "Your stargate is Libra";
			
			return 0;
	}
	
	while((a = 10 && (b >= 23 && b <= 31))|| (a = 11 &&(b >= 1 && b <= 22)))
	{
			cout << "Your stargate is Scorpio";
			
			return 0;
	}
	
	while((a = 11 && (b >= 22 && b <= 31))|| (a = 12 &&(b >= 1 && b <= 21)))
	{
			cout << "Your stargate is Sagittarius";
			
			return 0;
	}
	
	while((a = 12 && (b >= 22 && b <= 31))|| (a = 1 &&(b >= 1 && b <= 19)))
	{
			cout << "Your stargate is Capricorn";
			
			return 0;
	}

	return 0;
}
