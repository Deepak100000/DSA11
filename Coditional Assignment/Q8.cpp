#include<iostream>
using namespace std;

int main() {

int x1,y1,x2,y2,x3,y3;
float m1,m2;
cout << "enter first codinates ";
cin >> x1;
cin >> y1;
cout << "enter second codinates ";
cin >> x2;
cin >> y2;
cout << "enter third codinates ";
cin >> x3;
cin >> y3;

m1 = (y2-y1)/(x2-x1);
m2 = (y3-y2)/(x3-x2);

cout << m1 << " "<<m2;

if (m1==m2)
{
  cout<< "collinear";
}
else{
    cout << "non collinear";
}






}