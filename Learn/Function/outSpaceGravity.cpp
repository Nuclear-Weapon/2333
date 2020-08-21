#include<iostream>
using namespace std;

#define GR 0.00000006673

double G(double m1,double m2,double d)
{
	double F = 0;
	
	F=GR * m1 * m2 / d * d;
	
	return F;
}

int main() 

{
	double m1 = 0, m2 = 0, d = 0, F = 0;
	
	cout << "Gravity-calculation program\n";
	
	cout << "Input satellite mase(KG)\n";
	cin >> m1;
	
	cout << "Input Planet mase(KG)\n";
	cin >> m2;
	
	cout << "Input distance between planet and satellite(M)\n";
	cin >> d;
	
	F = G(m1,m2,d);
	
	cout << "F=" << F;
	
	return 0;
}
