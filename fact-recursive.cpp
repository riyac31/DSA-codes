#include<iostream>
#include<limits.h>
using namespace std;
int fact(int n){
    if (n==0){
    return 1;}
    
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}