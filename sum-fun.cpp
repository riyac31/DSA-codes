#include<iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    int ans=sum(n);
    cout<<ans<<endl;
    return 0;
}