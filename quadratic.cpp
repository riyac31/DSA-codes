#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int a=4;
    int b=6;
  int c=7;
 
  float d= (b-4*a*c);
  if(d>0){
  
    float root1 = (-b + sqrt(d))/(2*a);
    float root2 = (-b - sqrt(d))/(2*a);
    cout<<root1<<" "<<root2<<endl;
}
 else if(d=0){
	float root1 = (-b)/2*a;
	cout<<"root1 = root2"<<root1<<endl;
}
 else if(d<0){
	cout<<"imaginary roots";
}  
  

    return 0;
}
