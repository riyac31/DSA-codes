#include<iostream>
#include<limits.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
    factorial= factorial*i;
    
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<endl;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}