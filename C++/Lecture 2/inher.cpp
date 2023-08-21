//there are 5 types of inher
//1  singel 
//2 multi
//3 mutltuipel
//4 hercichal
//5 hribrid
#include<iostream>
using namespace std;
class parent{
	public:
	void dispaly()
	{
		cout<<"This is parent class"<<"\n";
	}
};

class child:public parent{
};

int main()
{
	child obj;
	obj.dispaly();
	return  0;
}
