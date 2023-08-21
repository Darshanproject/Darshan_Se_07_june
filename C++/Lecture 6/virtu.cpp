#include<iostream>
using namespace std;
class Shape{
	public:
	virtual void draw(){
		cout<<"Drawing a shape"<<"\n";
	}
};

class Circle :public Shape{
	public:
		virtual void draw(){
			cout<<"Drawing a circle"<<"\n";
		}
};


int main(){
	Circle obj;
	obj.draw();
}
