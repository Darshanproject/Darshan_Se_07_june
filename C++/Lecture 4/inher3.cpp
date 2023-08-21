#include<iostream>
using namespace std;
class demo{
	public:
		void display(){
			cout<<"This is grandfathers class \n";
		}
		
};
class father1:public demo{
	public:
	void display1(){
		cout<<"This is fathers class \n";
	}
};

class father2:public demo{
	public:
	void display2(){
		cout<<"This is uncle class \n";
	}
};

class child:public father1 ,public father2{
	public:
		void display3()
		{
			cout<<"This is child class \n";
		}
};
int main(){
	father1 obj;
	father2 obj1;
	child obj2;
	obj.display();
	obj.display1();
	cout<<"\n------------------------------------------------\n";
	obj1.display();
	obj1.display2();
	cout<<"\n------------------------------------------------\n";
//	obj2.display();
	obj2.display1();
	obj2.display2();
	obj2.display3();
	return 0;
}
