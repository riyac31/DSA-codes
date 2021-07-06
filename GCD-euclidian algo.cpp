#include<iostream>
#include<limits.h>
using namespace std;

int gcd(int a,int b){
    while(a != b){
        if(a>b)
            a=a-b;
        
        else 
           b=b-a;
    }
    return a;
}
int main(){
    int a=100;
    int b=1005;
    cout<<"GCD of given number is:"<<gcd(a,b);
    return 0;
}