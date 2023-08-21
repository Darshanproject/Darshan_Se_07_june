#include<iostream>
using namespace std;
class demo{
	public:
		void see()
		{
			cout<<"This is demo class \n";
		}
};
class b:public demo{
	public:
	void display(){
		cout<<"This is b class \n";
	}
};

class c :public demo{
	public:
	void display2(){
		cout<<"This is c class \n";
	}
};
int main()
{
	b obj;
	c obj1;
	obj.see();
	obj.display();
	cout<<"\n--------------------------------------------\n";
	obj1.see();
	obj1.display2();
}
