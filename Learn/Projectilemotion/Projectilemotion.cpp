#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float t,h,Vx,Vy,V02,V0,S;
	float g=10;
	
	cout << "This program can caculate the distance of the Projectile motion \n";
	
	
	cout << "push the origin speed in x and y axis\n";
	cin >> Vx >> Vy;
	
	t=Vy/g;            //时间计算
	V02=(Vx*Vx)+(Vy*Vy);     
	V0=sqrt(V02);      //初始合成速度计算
	h=Vy*t+g*(t*t)/2;  //最大高度计算
	S=V0*(2*t);        //运动距离计算
	
	cout << "This is the caculate result\n";
	cout << "The time\n";
	cout << t << endl;
	cout << "The maximum height\n";
	cout << h << endl;
	cout << "The origin Initial synthetic speed \n";
	cout << V0 << endl;
	cout << "The distance\n";
	cout << S <<endl;
	
	return 0;
}