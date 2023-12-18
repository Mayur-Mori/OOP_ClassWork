//Overriding

#include<iostream>
using namespace std;

class base
{
	public:
		    void print_data()
			{
				cout<<"\n\n Base class is called";
			}
};
class derived : public base
{
	public:
			void print_data()
			{
				cout<<"\n\n Derived class is called";
			}
};
main()
{
	derived obj;
	obj.print_data();
	obj.base::print_data();
}
