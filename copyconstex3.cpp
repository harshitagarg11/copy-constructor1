#include <iostream>
#include <conio.h>
using namespace std;
class A{
	public:
		int a,b,c;
		A(int a1,int b1){
			a=a1;
			b=b1;
		}
	
	A(A &obj){
		a=obj.a;
		b=obj.b;
	}
	void sum(){
		cout<<"c:"<<a+b<<endl;
}
	};
	int main(){
		A obj1(10,20);
		A obj2=obj1;
		obj1.sum();
		obj2.sum();
	}
