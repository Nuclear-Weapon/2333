#include <iostream>
using namespace std;
 
int main ()
{
   // 局部变量声明
   int a;
 cout << "Input your grade";
 cin >> a;
 
   switch(a)
   {
   case (90<=a<=100) :
      cout << "a" << endl; 
      break;
   case (80<=a<=90) :
   case (70<=a<=80) :
      cout << "b" << endl;
      break;
   case (60<=a<=70) :
      cout << "c" << endl;
      break;
   case (0<=a<=60) :
      cout << "d" << endl;
      break;
   default :
      cout << "e" << endl;
   }
   cout << "Your grade" << a << endl;
 
   return 0;
}