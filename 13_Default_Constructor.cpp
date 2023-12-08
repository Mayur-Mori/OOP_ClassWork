/*
Default constructor
*/
#include<iostream>
using namespace std;

class student
{
		int rollno;//private data member of the class
		string name;
		
		public:
			student()//default constructor
			{
				rollno=1;
				name="Mayur";
			}
			void printdata()
			{
				cout<<"\n\nRollno :"<<rollno;
				cout<<"\n\nName :"<<name;				
			}
			
};

main()
{
	student S; // default constructor is called by itself.
	S.printdata();
}














