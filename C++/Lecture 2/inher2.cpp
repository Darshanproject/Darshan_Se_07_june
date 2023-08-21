#include<iostream>
using namespace std;
class grandfather{
	public: 
	void display()
	{
		cout<<"This is garndfathers class"<<"\n";
	}
};


class fathers:public grandfather{
	public:
	void dispaly1(){
		cout<<"This is fathers class"<<"\n";
	}
};


class child:public fathers{
	public:
	void display2()
	{
		cout<<"This is child class";
	}
};


int main()
{
	child obj;
	obj.display();
	obj.dispaly1();
	obj.display2();
	return 0;
}
