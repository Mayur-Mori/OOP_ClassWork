//Wap to get input from user 


#include<iostream>
using namespace std;

class employee
{
	int eid;
	string ename;
	float salary;
	
	public:
			void setvalue()	
			{
				cout<<"\n\n Enter the employee id :";
				cin>>eid;
				cout<<"\n\n Enter the employee name :";
				cin>>ename;
				cout<<"\n\n Enter the employee salary :";
				cin>>salary;	
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
	E1.setvalue();
	E1.printdata();
}










	


