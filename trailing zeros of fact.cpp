#include<iostream>
#include<limits.h>
using namespace std;
int countZeros(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
        int res = 0;
        while(fact%10==0){
            res++
            fact= fact/10;

        }

    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    int ans1=fact(n);
    int ans2=countZeros(n);
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}