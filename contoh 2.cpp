#include <iostream>
#include <conio.h>
void main ()
{
	int x[10]={0,1,2,3,4,5,6,7,8,9};
	int *px;
	int i;
	
	for (i=0;i<10:i++)
	{
		px = &x[i];
		cout<<x[i]<<" "<<*px<<" "<<px<<endl;
	}
	getch();
}
