#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a = 5, b = 10, 
    c = a += b -= 2;
    cout << a << " " << b << " " << c;
 
}