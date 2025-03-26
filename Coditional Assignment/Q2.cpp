#include<iostream>
using namespace std;



int main() {
float  r,area, cir;
cout << "enter r ";
cin >>r;
area = 3.14*r*r;
cir= 2*3.14*r;

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


