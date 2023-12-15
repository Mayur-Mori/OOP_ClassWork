/*
Multilevel Inheritance
*/
#include<iostream>
using namespace std;

class A
{
		int a;
		public:	
			 	void printdata_A()
			 	{
			 		a=10;
			 		cout<<"\n\n a = "<<a;
				 }
};
class B:public A
{
	int b;
	public : 
				void printdata_B()
				{
					b=20;
					cout<<"\n\n b = "<<b;
				}
};

class C: public B
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






