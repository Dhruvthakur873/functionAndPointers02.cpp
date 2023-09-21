#include<iostream>
using namespace std;
int firstAndLast(int *A,int *ptr1,int *ptr2){
    *ptr2 = *A % 10;
    while ((*A)>9){
        *A /=10;
    }   
    *ptr1 = *A;
    return 0;
}
int main(){
    int a;
    cout<<"Enter the number whose first and last digit you want : ";
    cin>>a;
    int firstDigit;
    int lastDigit;
    int *A = &a;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    firstAndLast(A,ptr1,ptr2);
    cout<<"The firstDigit = "<<firstDigit<<" and the lastDigit = "<<lastDigit;
}