#include<iostream>
using namespace std;

int main() {

float p,r,t,si;
cout << "enter the principle " ;
cin>> p;
cout << "enter the rate ";
cin >> r;
cout << "enter the time ";
cin >> t;
si= (p*r*t)/ 100;
cout << "Simple interest  " << si << endl; 
    return 0;
}