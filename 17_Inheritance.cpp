#include<iostream>
using namespace std;
class student
{
	int id,age;
	string sname,city;
	   
	    public:
	    	 void get_studdata()
	    	 {
	    	 	cout<<"\n\nEnter student's Id :";
	    	 	cin>>id;
				cout<<"\n\nEnter student's name :";
				cin>>sname;
				cout<<"\n\nEnter student's city :";
				cin>>city;
				cout<<"\n\nEnter student's age :";			 
			 	cin>>age;
			 }
			 void print_data()
			 {
			 	cout<<"\n\nStudent's Id ="<<id;
			 	cout<<"\n\nStudent's name ="<<sname;
			 	cout<<"\n\nStudent's city ="<<city;
			 	cout<<"\n\nStudent's age ="<<age;
			 }
};

class course:public student
{
	float fees;
	string Course_name;
	 public:
	 	void get_course()
	 	{
	 		cout<<"\n\nEnter Student's course :";
	 		cin>>Course_name;
			cout<<"\n\nEnter course fees :";
			cin>>fees;		 
		 }
		 void print_course()
		 {
		 	cout<<"\n\nStudent's course ="<<Course_name;
		 	cout<<"\n\nCourse fees ="<<fees;
		 }
};
main()
{
	course S1;
	S1.get_studdata();
	S1.print_data();
	S1.get_course();
	S1.print_course();
}
