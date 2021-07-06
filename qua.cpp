#include<iostream>
#include<math.h>
using namespace std;
int quadraticRoots(float a,float b,float c,float x){
    float d>0;
    d= (sqrt(b-4ac));
    float root1 = (-b+d)/2a;
    float root2 = (-b-d)/2a;
    cout<<root1<<" "<<root2;
}
int main(){
    float a= 3;
    float b= 4;
    float c= 5;
    float x= 6;
    cout<<quadraticRoots(a,b,c,x);
    return 0;
}
