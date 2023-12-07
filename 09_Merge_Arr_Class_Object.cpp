/*
Wap to merge the student's marks details with more than one student.
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
	student s[3];
	
	for(int i=0;i<3;i++)
	{	
		cout<<"\n\n Enter Student ["<<i<<"] Details : ";
		s[i].getdata();
	}
	cout<<"\n\n ************************************";
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n Student ["<<i<<"] Details : ";
		s[i].putdata();
		cout<<"\n\n............................";
	}
}



























