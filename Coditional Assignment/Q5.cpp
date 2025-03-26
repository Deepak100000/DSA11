#include<iostream>
using namespace std;

int main() {

int a,b,c;
cout << "enter a ";
cin >> a;
cout << "enter b ";
cin >> b;
cout << "enter c ";
cin >> c;

if((a==b)&&(b==c)) {
cout<< "equilateral"<< endl;

}
else if ((a!=b)&&(b!=c)&&(c!=a)) {
    cout<< "scalar" << endl;
}
else{
    cout << "isosceles " << endl;
}


}