/*
Inline Function:-
Inline function is used for one liner code to reduce complexity to indicate to the compiler.
This function can not include any conditional or looping statements.

*/


#include<iostream>
using namespace std;

class math
{
		int n1,n2;
		
		public:
		 		void getdata(int num1 , int num2 )
				{
					n1=num1;
					n2=num2;
		    	}	
		    	inline int sum()//one liner function
		    	{
		    		return n1+n2;
				}
				inline int sub()
		    	{
		    		return n1-n2;
				}
				inline int mul()
		    	{
		    		return n1*n2;
				}
				inline int div()
		    	{
		    		return n1/n2;
				}	
};

main()
{
	math M;
	int sum,sub,mul,div,num1,num2;
	cout<<"\n\n Enter the num1 :";
	cin>>num1;
	cout<<"\n\n Enter the num2 :";
	cin>>num2;
	M.getdata(num1,num2);
	
	sum=M.sum();
	cout<<"\n\n Sum = "<<sum;
	sub=M.sub();
	cout<<"\n\n Sub = "<<sub;
	mul=M.mul();
	cout<<"\n\n Mul = "<<mul;
	div=M.div();
	cout<<"\n\n Div = "<<div;

}














