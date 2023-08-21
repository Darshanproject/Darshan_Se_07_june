#include<iostream>
using namespace std;
class demo{
	public:
	void display()
	{
		cout<<"It developers";
	}
};


class person:public demo{
	public:
	void display2(){
		cout<<"\nThis is developers class \n";
	}
};


class child:public demo{
	public:
		void display3(){
			cout<<"\nThis is child class \n";
		}
};

int main()
{
	person obj;
	child obj1;
	obj.display();
	obj.display2();
	cout<<"\n------------Second object ---------------\n";
	obj1.display();
	obj1.display3(); 
}
