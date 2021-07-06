#include<iostream>
using namespace std;
int countDigit(int n){
    int num=1;
  for(int i=2;i<=n;i++){
      num= num*i;
      
  }
  int count=0;
  while(num != 0){
      num=num/10;
      ++count;
}
return count;
}
int main(){
  int n=25;
    
    int ans=countDigit(n);
    cout<<"Digit in the given number is:"<<ans<<endl;
    return 0;
}
