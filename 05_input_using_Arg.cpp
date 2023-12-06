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
			void printdata()
			{
				cout<<"\n\nEmploye's id :"<<eid;
				cout<<"\n\nEmploye's name :"<<ename;
				cout<<"\n\nEmploye's salary :"<<salary;
			}
};
main()
{
	employee E1;
	int id;
	string name;
	float sal;
				cout<<"\n\n Enter the employee id :";
				cin>>id;
				cout<<"\n\n Enter the employee name :";
				cin>>name;
				cout<<"\n\n Enter the employee salary :";
				cin>>sal;
	E1.setvalue(id,name,sal);
	E1.printdata();
}










	
