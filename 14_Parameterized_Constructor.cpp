/*
Parameterized constructor
*/
#include<iostream>
using namespace std;

class student
{
		int rollno;//private data member of the class
		string name;
		
		public:
			student(int a,string name1)//Parameterized constructor
			{
				rollno=a;
				name=name1;
			}
			void printdata()
			{
				cout<<"\n\nRollno :"<<rollno;
				cout<<"\n\nName :"<<name;				
			}
			
};

main()
{
	student S(1,"mayur");
	S.printdata();
}














