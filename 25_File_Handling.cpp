

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream fout;
	fout.open("MyFile.txt",ios::app);
	fout<<"My name is mayur mori";
	fout.close();
	
	ifstream fin;
	string line;
	
	fin.open("MyFile.txt");
	while(getline(fin,line))
	{
		cout<<"\n\n\t"<<line;
	}
	fin.close();
}
