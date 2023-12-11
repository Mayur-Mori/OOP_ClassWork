

#include<iostream>
using namespace std;

class student
{
 	int sid;
	string sname;
	string course;
	
	public:
			student()
			{
					
			}	
			student(student &s1)
			{
				sid=s1.sid;
				sname=s1.sname;
				course=s1.course; 
			}
			void getdata()
			{
				cout<<"\n\n Input Student's id :";
				cin>>sid;
				cout<<"\n\n Input Student's name :";
				cin>>sname;
				cout<<"\n\n Input Student's course :";
				cin>>course;
			}
			void printdata()
			{
				cout<<"\n\n**************************";
				cout<<"\n\n student's id = "<<sid;  
				cout<<"\n\n student's name = "<<sname;
				cout<<"\n\n student's course = "<<course;						
			}
};
main()
{
	student s1,s2;
	
	s1.getdata();
	s1.printdata();
	s2=s1;
	s2.printdata();
}

