#include<iostream>
#include<math.h>
using namespace std;
int printPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
       if(n%2 ==0 || n%3==0 || n%5== 0){ 
            cout<<"no prime ";
            
        }
        cout<<"i";
    }
}
int main(){
    int n=25;
    cout<<endl;
    printPrime(n);
    return 0;

}
