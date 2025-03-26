#include<iostream>
using namespace std;

int main() {

int a,b,c;
cout << "enter marks of a ";
cin >> a;
cout << "enter marks of b ";
cin >> b;
cout << "enter marks of c ";
cin >> c;

if((a<b) && (a<c)) {
cout<< "a has least marks"<< endl;

}
else if ((b<a)&&(b<c)) {
    cout<< "b has least marks" << endl;
}
else{
    cout << "c has least marks " << endl;
}


}