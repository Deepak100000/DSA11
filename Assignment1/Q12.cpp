#include<iostream>
using namespace std;

int main() {
int x,y,z;
x= 3;
y=5;
z= x++ * --y + ++x;
cout << x << " " << y << " " <<  z;
return 0;

}