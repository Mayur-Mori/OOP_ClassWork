#include<iostream>
using namespace std;

class sample
{
	public:	
			sample()
			{
				cout<<"\n\n Constructor is called.......";
			}
			~sample()
			{
				cout<<"\n\n Destructor is called.......";
			}
};
main()
{
	sample S;
}
