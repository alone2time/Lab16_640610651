#include <iostream>
using namespace std;

int main(){
	int a=5;
	char b='A';	
	char &c=b;
	void *x=&a;
	void *y=&b;
	void *z=x;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	cout<<&a<<" "<<(void *)&b<<" "<<(void *)&c<<" "<<&x<<" "<<&y<<" "<<&z<<endl;
	c='F';
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	c='W';
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	*(int *)x=6;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	*(int *)z=7;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<endl;
	return 0;
}