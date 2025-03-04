#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int datos[5];
	datos[0]=2;
	datos[1]=4;
	datos[2]=6;
	datos[3]=8;
	datos[4]=10;
	
	cout<<"en la posicion 0 esta.."<<datos[0]<<endl;
	cout<<"en la posicion 0 esta.."<<datos[1]<<endl;
	cout<<"en la posicion 0 esta.."<<datos[2]<<endl;
	cout<<"en la posicion 0 esta.."<<datos[3]<<endl;
	cout<<"en la posicion 0 esta.."<<datos[4]<<endl;
	cout<<"........."<<endl;
	
	for(int i=0;i<=4;i++)
	{
		cout<<"en la  posicion ["<<(i+1)<<"]esta  "<<datos[i]<<endl;
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
