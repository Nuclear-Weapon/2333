//1：让程序获取 a,b,c 三个变量
//2：通过if...else语句判断delta=b^2+4*a*c是否大于0
//3：如果小于则输出"此方程无解" //如果大于则继续运算 x1=((-b)+sqrt(delta))/2*a // 如果等于 
                                //x2=((-b)-sqrt(delta)/2*a
							    //输出x1,x2
#include <iostream>
#include <math.h>
	using namespace std;

int main()
{
	
	double a=0,b=0,c=0,x1=0,x2=0,x=0;
	double delta=0;
	
	cout << "This is a Univariate quadratic equation solving program \n";
	
	cout << "Input a \n";
	cin >> a;
	cout << "Input b \n";
	cin >> b;
	cout << "Input c \n";
	cin >> c;
	
	if((a == 0) && (b != 0) && (c != 0))
	  {
		  cout << "This is Univariate linear equation\n";
		  x = (c / a) * (-1);
		  cout << "This is the caculate result\n";
		  cout << "x=" << x << endl;
		  return 0;
	  }
	  
	  if ((a == 0) && (b == 0) && (c != 0))
	  {
		  cout << "Can not identify a and b \n";
		  return 0;
	  }
	  
	  if ((a == 0) && (b == 0) && (c == 0))
	  {
		  cout << "Can not identify a,b and c \n";
		  return 0;
	  }

	

	delta = b * b - 4 * a * c;	

	if( delta == 0 )
	{
      x1 = ((-b) + sqrt (delta))/2*a;
      cout << "x=" << x1;
	} 

	if( delta < 0 ) 
	{ 
	  cout << "There is no solution to this equation\n";
	}		  

	if( delta > 0 )
	{ 
	  x1 = ((-b)+sqrt(delta))/2*a;
	  x2 = ((-b)-sqrt(delta))/2*a;
	  cout << "This is the caculate result\n" << "x1=" << x1 <<"x2=" << x2;
	}		
				
	
	return 0;
	
}