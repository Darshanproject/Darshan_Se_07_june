#include<iostream>
using namespace std;
class demo{
	int age;
	string name;
	public:
	void setData(int age){
			this->age=age;
	}
	int getData()
	{
		return age;
	}
	void setName(string name){
		this->name=name;
	}
	string getName()
	{
		return name;
	}
};

main()
{
	demo obj;
	obj.setData(25);
	obj.setName("Hardik");
	cout<<obj.getData()<<"\n";
	cout<<obj.getName();
	
}
