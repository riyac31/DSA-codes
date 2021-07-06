#include<iostream>
using namespace std;
int main(){
	int a=9;
	int* p1 = &a;
	char b='c';
	char* p2 = &b;
	cout<<p1<<endl<<p2<<endl;
	return 0;
}
