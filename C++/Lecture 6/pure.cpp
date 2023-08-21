#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void draw()=0;//Pure virtual function 
};

class Circle:public Shape{
	public:
		void draw(){
		cout<<"This is ciricle class"<<"\n";
		}
};
class Square:public Circle{
	public:
		void draw(){
		cout<<"This is square class"<<"\n";
		}
};
int main(){
	Square obj;
	obj.draw();
	obj.draw();
}


