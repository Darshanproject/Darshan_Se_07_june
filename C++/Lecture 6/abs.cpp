#include<iostream>
using namespace std;
class Animal{
	public:
	Animal(string name):name(name){}
		virtual void makeSounds()=0;
		
		void showinfo(){
			cout<<"name :"<<name<<"\n";
		}
	
	private :
	string name;
};

class Dog:public Animal{
	public:
		Dog(string name):Animal(name){
			cout<<"Name : "<<name<<"\n";
		}
		void makeSounds(){
			cout<<"Dog barks "<<"\n";
		}
};

class Cat:public Animal{
	public:
		Cat(string name):Animal(name){
			cout<<"Name : "<<name<<"\n";
		}
		void makeSounds(){
			cout<<"Cat  Mewos "<<"\n";
		}
};



int main(){
	Dog obj("Bruno");
	obj.showinfo();
	obj.makeSounds();
	
	Cat cat("Sweety");
	cat.showinfo();
	cat.makeSounds();
}
