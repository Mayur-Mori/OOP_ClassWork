/*
friend function: it is not a member function of the class so cannot be invoked by scope operator
you have to pass the object as an argument to access the privae data member of the class
*/
#include<iostream>
using namespace std;

class math
{
		int n1,n2;//private data member of the class
		
		public:
		 		void getdata(int num1 , int num2 ) //member function /method
				{
					n1=num1;
					n2=num2;
		    	}	
		    	friend int sum(math M)// it is not a member function 
		    	{
		    		return M.n1+M.n2;
				}
				friend int sub(math M)
		    	{
		    		return M.n1-M.n2;
				}
				friend int mul(math M)
		    	{
		    		return M.n1*M.n2;
				}
				friend int div(math M)
		    	{
		    		return M.n1/M.n2;
				}	
};

main()
{
	math M;
	int s1,s2,m,d,num1,num2;
	cout<<"\n\n Enter the num1 :";
	cin>>num1;
	cout<<"\n\n Enter the num2 :";
	cin>>num2;
	M.getdata(num1,num2);
	
	s1=sum(M);
	cout<<"\n\n Sum = "<<s1;
	s2=sub(M);
	cout<<"\n\n Sub = "<<s2;
	m=mul(M);
	cout<<"\n\n Mul = "<<m;
	d=div(M);
	cout<<"\n\n Div = "<<d;

}














