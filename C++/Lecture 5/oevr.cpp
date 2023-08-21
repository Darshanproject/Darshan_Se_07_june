#include<iostream>
using namespace std;
class person{
	public:
	void age(int age){
		cout<<"This is your age "<<age<<"\n";
	}
	void age(string name){
		cout<<"This is your name"<<name;
	}
};

int main(){
	person obj;
	obj.age(25);
	obj.age("Ronak");
}
