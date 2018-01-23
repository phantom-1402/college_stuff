#include <iostream>
using namespace std;

class stud
{
	private:
	int x,y,z;
	public:
	void add()
	{
		x=y=0;
	}
	void input()
	{
		cout<<"Enter First Number: ";
		cin>>x;
		cout<<"\nEnter Second Number: ";
		cin>>y;
	}
	void addition()
	{
		z=x+y;
	}
	void output()
	{
		cout<< "Sum = "<<z;
	}
};

int main()
{
	stud obj;
	cout<<"Add two numbers Using OOP\n";
	obj.input();
	obj.addition();
	obj.output();
	return 0;
}
