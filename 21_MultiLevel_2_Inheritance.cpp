/*
Multilevel Inheritance
*/
#include<iostream>
using namespace std;

class student
{
		int roll_no;
		public:	
				student()
				{
					roll_no=1;
					cout<<"\n\n Student's Roll N0 :"<<roll_no;
				}
			 	
};
class Test:public student
{
	public:
	int sub1,sub2;
	 	
				Test()
				{
					cout<<"\n\nEnter Subject 1 marks :";
					cin>>sub1;
					cout<<"\n\nEnter Subject 2 marks :";
					cin>>sub2;	
					
				}
				
				
};

class result: public Test
{
	int total_marks;
	public:	
			void printdata_C()
			{	
			
				total_marks=sub1+sub2;
				cout<<"\n\n Total marks = "<<total_marks;
				}	
};

main()
{
	result s1;
	s1.printdata_C();
}






