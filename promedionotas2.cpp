#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=0,sn=0,pr=0,i=0;
	
	for(i=0;i<=2;i++)
	{
		cout<<"ingrese la nota "<<(i+1)<<"....:";
		cin>>n;
		
		sn=n+sn;
	};
	
	pr=sn/3;
	cout<<"el promediode  las notas ..:"<<pr;
	
	
	
	
	
	getch();
	return 0;
}
