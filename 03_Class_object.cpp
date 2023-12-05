//WAP to create class and object


#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int s_id;
	char s_name[30];
	int marks;
	
	public :
		 void getvalue() // to initialize the data member of the class
		 {
		 	s_id=101;
		 	strcpy(s_name,"mayur");
		 	marks=50;
		 }
		 void setvalue()
		 {
		 	cout<<"\n\n Student's id :"<<s_id;
		 	cout<<"\n\n Student's name :"<<s_name;
		 	cout<<"\n\n Student's marks :"<<marks;
		 }
};
main()
{	
	student s1;
	s1.getvalue();
	s1.setvalue();
}

