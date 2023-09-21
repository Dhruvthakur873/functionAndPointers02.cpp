#include<iostream>
using namespace std;
int main(){
   // we can not do this with pointers
    int a = 1,b=2;
   // int* p = &a,p1 = &b; this will throw an error
    int *p = &a, *p1 = &b; // you can do it like this 
}