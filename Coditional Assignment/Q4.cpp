#include<iostream>
using namespace std;



int main() {
float  l,b,area, cir;
cout << "enter l ";
cin >>l;
cout <<  "enter b ";
cin >> b;
area = l * b;
cir= 2*(l + b);

if (area > cir)
{
    cout << "area is greater " << endl;

}
else if(area < cir) {
    cout << "area is not greater " << endl;
}
else{
    cout << "both are equal " << endl;
}


}