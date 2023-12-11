#include<iostream>
using namespace std;

class Even
{
	int range,count;
	int i;
	public:
				Even()
				{
					count=0;	
				}	
				Even(int r)
				{
					range = r;
				}
				void displayEven()
				{
					count=0;
					for(i=1 ;i<=range;i++ )
					{
						
						if(i%2==0)
						{
						count++;
						}
					}	
						cout<<"\n\n Even number = "<<count;
				}
};
main()
{
	Even E(20);
	
	E.displayEven();
}

