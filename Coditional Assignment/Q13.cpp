#include<iostream>
using namespace std;

int main() {

char ch;
cout<< "enter the character " << endl;
cin >> ch;
char cap_ch = char(int(ch) -32);
cout << cap_ch;
}