#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	int a=9;
	int* p1 = &a;
	char b='g';
	char* p2 = &b;
	cout<<p1<<endl<<p2<<endl;
	
	int* a= new int();
	a=5;
    cout<<*p1<<endl<<*p2<<endl;
	return 0;
}