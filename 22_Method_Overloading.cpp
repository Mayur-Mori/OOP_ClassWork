// Overloading 

#include<iostream>
using namespace std;

class sum
{
	float n1,n2,n3;
	public :
			void add(int n1 ,int n2)
			{
				n1=n1;
				n2=n2;
				cout<<"\n\nn1 + n2 = "<<n1+n2;
			}	
			
			void add(double n1 , double n2)
			{
				n1=n1;
				n2=n2;
				cout<<"\n\nn1 + n2 = "<<n1+n2;
			}
			
			void add(float n1 , float n2 , float n3)
			{
				n1=n1;
				n2=n2;
				n3=n3;
				cout<<"\n\nn1 + n2 + n3 = "<<n1+n2+n3;
			}
			
};
main()
{
	int a,b ;
	double c,d;
	float e,f,g;
	
	a=10;
	b=10;
	
	c=1.2;
	d=1.7;
	
	e=2.9;
	f=9.2;
	g=0.45;
	
	sum s;
	s.add(a,b);
	s.add(c,d);
	s.add(e,f,g);
}












