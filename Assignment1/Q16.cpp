#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int x1,x2,y1,y2,sum;

    cout << "enter x1 ";
    cin >> x1;
    
    cout << "enter x2 ";
    cin >> x2;
    
    cout << "enter y1 ";
    cin >> y1;
    
    cout << "enter y2 ";
    cin >> y2;

    sum = ((x1*y2) + (y1*x2))/(x2*y2);
    cout << " sum is " << sum << endl;
}