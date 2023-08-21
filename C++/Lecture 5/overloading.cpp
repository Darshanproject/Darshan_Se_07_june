#include<iostream>
using namespace std;
class Demo{
	public:
	void display(){
		cout<<"Human can walk";
	}
};
class Child :public Demo{
	public:
	void display(){
		cout<<"Human can run";
	}
};

int main()
{
	Child obj;
	obj.display();
}
