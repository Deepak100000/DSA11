#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int x1,x2,y1,y2,dist;

    cout << "enter x1 ";
    cin >> x1;
    
    cout << "enter x2 ";
    cin >> x2;
    
    cout << "enter y1 ";
    cin >> y1;
    
    cout << "enter y2 ";
    cin >> y2;

    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout << " dist is " << dist << endl;
}