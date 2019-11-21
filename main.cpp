#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main() 
{
cout << fixed << setprecision(2);
string opr = "0";
double num1 = 0.0;
double num2 = 0.0;

cout << " \n Enter two numbers:" << endl;
cin >> num1 >> num2;

cout << "Enter your operator:(add: +, \nsubtract: -, divide: /, multiply: *)" << endl;
cin >> opr;
cout << num1 << " " << opr << " " << num2 << " " << "= "  ;
switch (opr){
  case "+":
  cout << num1 + num2 ;
break;
case "add":
  cout << num1 + num2 ;
break;
case"-":
cout << num1 - num2 << endl;
break;
case"*":
cout << num1 * num2 << endl;
break;
case"/":
if (num2 != 0)
cout << num1 / num2 << endl;
else
cout << "ERROR \nCannot divide by zero" << endl;
break;
default:
cout << " " << endl;
}
 return 0;


}