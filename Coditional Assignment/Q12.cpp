#include<iostream>
using namespace std;

int main() {
int choice;
cout<< " enter the choice :"<< endl;
cout << "1.cm to ft :\n2.km to miles \n3.usd to inr \n4. exit";
cin >> choice;

switch (choice)
{
case 1:
    float cm, ft;
    cout << "enter the length of cm: ";
    cin >> cm;
    ft = cm*30.48;
    cout << ft; 
    break;
   
    case 2:
    float km, miles;
    cout << "enter the length of Km: ";
    cin >> km;
    miles = km*30.48;
    cout << miles; 
    break;
    case 3:
    float INR, USD;
    cout << "enter USD: ";
    cin >> USD;
    INR = USD*30.48;
    cout << USD; 
    
default:
  exit(0);
}



}