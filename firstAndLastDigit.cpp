#include<iostream>
using namespace std;
int firstAndLast(int *A,int *ptr1,int *ptr2){
    // we can also use while (n>0)
    //in this we just print n for the first digit after loop finished 
    // and will not use this         if(a>=1 && a<=10){
    //                                  firstDigit = a % 10;
    //                                  break;
    //                                }
    // And for last digit we can do { lastDigit = n%10; } outside the loop
    *ptr2 = *A % 10;
    while ((*A)>9){
          
        *A /=10;
    }   
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
    cout<<"The firstDigit = "<<a<<" and the lastDigit = "<<lastDigit;
}