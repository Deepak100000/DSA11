#include<iostream>
using namespace std;

int main() {

int x,y;
cout << "enter x ";
cin >> x;
cout << "enter y ";
cin >> y;

if ((x==0)&&(y==0)) {
    cout<< "it lies on origin ";
}
else if ((x!=0) && (y==0))
{
    cout<< "it lies on x axis ";
}
else{
    cout<< "it lies on plain";
}




}