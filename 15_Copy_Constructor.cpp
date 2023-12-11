//Copy Constructor

#include<iostream>
using namespace std;

class sum
{
	int n1,n2;
	
	public:
			sum()
			{
			}
			sum(sum &S1)
			{
				n1=S1.n1;
				n2=S1.n2;
			}
			void getdata()
			{
				cout<<"\n\n Enter number 1 :";
				cin>>n1;
				cout<<"\n\n Enter number 2 :";
				cin>>n2;
			}	
			void display()
			{	
				cout<<"\n\n**************";
				cout<<"\n\n n1 ="<<n1;
				cout<<"\n\n n2 ="<<n2;
			}
};
main()
{
	sum s1;
	s1.getdata();
	s1.display();
	
	sum s2;
	s2=s1;
	s2.display();
	
}
