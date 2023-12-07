/*
Wap o demonstrate array as an object.

employee :
eid,ename :

*/

#include<iostream>
using namespace std;

class employee
{
	int empid;
	string ename;
	
	public: 
			void getdata();
			void printdata();	
};

void employee::getdata()
{	
	cout<<"\n\n Employee's Id :";
	cin>>empid;
	cout<<"\n Employee's Name :";
	cin>>ename;

}

void employee::printdata()
{	
	cout<<"\n\n Employee's Id:"<<empid;
	cout<<"\n\n Employee's name :"<<ename;
	cout<<"\n\n..............................."	;
}
main()
{	
	employee E[3];
	
	for(int i=0;i<3;i++)
	{	
		cout<<"\n\n Enter Employee ["<<i<<"] Details : ";
		E[i].getdata();
	}
	cout<<"\n\n ************************************";
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n Employee ["<<i<<"] Details : ";
		E[i].printdata();
	}
	
}




