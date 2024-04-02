/*WAP to create simple calculator using class*/

#include<iostream>
using namespace std;

class Calc
{
	int n1, n2;
	
	void div()  // not accessible outside the class
	{
		cout<<"\n\n\t Division : "<<n1/n2;
	}
	
	
	public : 
			void getnumbers()
			{
				cout<<"\n\n\t Enter n1 :";
				cin>>n1;
				cout<<"\n\n\t Enter n2 : ";
				cin>>n2;
			}
			
			void add()
			{
				cout<<"\n\n\t Addition : "<<n1+n2;
			}
			
			void sub()
			{
				cout<<"\n\n\t Subtraction : "<<n1-n2;
			}
			
			void mul()
			{
				cout<<"\n\n\t Multiplication : "<<n1*n2;
				div(); // called from any public member function 
			}
			
			
};


main()
{
	Calc obj;
	obj.getnumbers();
	obj.add();
	obj.sub();
	obj.mul();
	//obj.div(); //not accessible here
	
}
