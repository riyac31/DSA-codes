#include <iostream>
#include <limits.h>
using namespace std;
void printPrimeFactor(int n){
    if(n<=1)
    return;
    for(i=2;i<=sqrt(n);i++){
        while(n%i == 0){
           cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
   cout<<n<<" ";
   cout<<endl;
}
int main(){
    int n = 450;
    cout<<endl;
    printPrimeFactor(n);
    return 0;
}
