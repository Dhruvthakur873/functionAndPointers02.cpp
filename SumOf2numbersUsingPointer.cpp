#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int *p = &a;
    int *p2 = &b;
    cout<<"Enter the value of a: ";
    cin>>*p;
    cout<<"Enter the value of b:  ";
    cin>>*p2;
    cout<<*p + *p2;
}