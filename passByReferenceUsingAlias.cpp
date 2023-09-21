#include<iostream>
using namespace std;
void swap(int &x , int &y){
    int temp ;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a;
    int b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    // //isse ham same variable ko access karne ke liye alias names create
    //                //kar sakte hai
    // int &alia1 = a;
    // int &alia2 = b;
    // cout<<alia1;// output will be value of a ;

}