#include<iostream>
using namespace std;
int printDivisors(int n){
    for(i=1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n=560;
    cout<<endl;
    printDivisors(n);
    return 0;
}
