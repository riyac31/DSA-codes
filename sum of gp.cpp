#include<iostream>
#include<math.h>
using namespace std;
float sumOfGp(float a,float r,int n){
   long double sum= (a*(1-pow(r,n)))/(1-r);
  return sum;
}
int main(){
    float a=3; 
    float r=2;
    int n=20;
    cout<<sumOfGp(a,r,n);
    return 0;
}
