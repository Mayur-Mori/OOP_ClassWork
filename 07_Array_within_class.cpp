/*WAP to demonstrate the marksheet as score card of student (using array within class)

rollno
student name
mark (7)
total
percentage

*/
#include<iostream>
using namespace std;
class student
{
	int rollno;
	string sname;
	int marks[5];
	float per;
	
	public: void getdata();
			void putdata(); 
};

void student :: getdata()
{
	cout<<"\n\n Enter Rollno : ";
	cin>>rollno;
	cout<<"\n\n Enter Student's name : ";
	cin>>sname;
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n Enter marks["<<i<<"] : ";
		cin>>marks[i];
	}
}

void student::putdata()
{
	int total;
	cout<<"\n\n............................";
	cout<<"\n\n Roll NO : "<<rollno;
	cout<<"\n\n Student Name : "<<sname;
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n Marks["<<i<<"] : "<<marks[i];	
		total+=marks[i];
	}	
	per=total/5;
	
	cout<<"\n\n Percentage of the student : "<<per<<"%";	
}
main()
{
	student s1;
	s1.getdata();
	s1.putdata();
}






