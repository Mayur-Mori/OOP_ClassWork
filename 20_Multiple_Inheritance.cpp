//Multiple Inheritance


#include<iostream>
using namespace std;
class A
{
		int a;
		public:	
			 	A()
			 	{
			 		a=10;
			 		cout<<"\n\n a = "<<a;
				 }
};
class B
{
	int b;
	public : 
				B()
				{
					b=20;
					cout<<"\n\n b = "<<b;
				}
};
class C: public A, public B
{
	int c;
	public:	
			void printdata_C()
			{
				c=30;
				cout<<"\n\n c = "<<c;
				}	
};
main()
{
	C obj;
	obj.printdata_C();
}

