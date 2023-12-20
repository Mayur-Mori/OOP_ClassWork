#include<iostream>
using namespace std;

class department
{
	public :
		  	int dept_id;
			string dept_name;
			
			department(int dept_id ,string dept_name)
			{
				this->dept_id=dept_id;
				this->dept_name=dept_name;
				}	
};

class employee
{
	private :
		department *dept;
		
		public :
			int emp_id;
			string emp_name;
			
			employee(int emp_id,string emp_name, department *dept)
			{
				this->emp_id=emp_id;
				this->emp_name=emp_name;
				this->dept = dept;
			}
			void display()
			{
				cout<<"\n\n Emp ID : "<<emp_id;
				cout<<"\n\n Emp Name : "<<emp_name;
				cout<<"\n\n Dep ID : "<<dept->dept_id;
				cout<<"\n\n Dep  Name : "<<dept->dept_name;
			}
};
main()
{
	department D(2,"QA");
	employee E(11111,"mayur", &D);
	
	E.display();
}
