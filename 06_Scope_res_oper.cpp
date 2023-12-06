//Wap to demonstrate the class and object (using scope resolution operator. "::")

//Wap to get input from argument in main


#include<iostream>
using namespace std;

class employee
{
	int eid;
	string ename;
	float salary;
	
	public:
			void setvalue(int id,string name,float sal)	
			{
				eid=id;
				ename=name;
				salary=sal;	
			}
			void printdata();

};
			void employee::printdata() 
			{
				cout<<"\n\nEmploye's id :"<<eid;
				cout<<"\n\nEmploye's name :"<<ename;
				cout<<"\n\nEmploye's salary :"<<salary;
			}
main()
{
	employee E1,E2;
	int id;
	string name;
	float sal;
				cout<<"\n\n Enter the employee 1 id :";
				cin>>id;
				cout<<"\n\n Enter the employee 1 name :";
				cin>>name;
				cout<<"\n\n Enter the employee 1 salary :";
				cin>>sal;
	E1.setvalue(id,name,sal);
	cout<<"\n\n*************************************";
				cout<<"\n\n Enter the employee 2 id :";
				cin>>id;
				cout<<"\n\n Enter the employee 2 name :";
				cin>>name;
				cout<<"\n\n Enter the employee 2 salary :";
				cin>>sal;
	E2.setvalue(id,name,sal);
	cout<<"\n\n-------------------------------------";	
	E1.printdata();
	cout<<"\n\n*************************************";
	E2.printdata();
}










	
