#include<iostream>
#include<math.h>
using namespace std;
void printDivisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        if(i != n/i){
            cout<<(n/i);
        }
    }
    cout<<endl;
}
int main(){
    int n=550;
    cout<<endl;
    printDivisors(n);
    return 0;
}

