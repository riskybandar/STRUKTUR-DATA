#include <iostream>
#include <conio.h>
int main ()
{
	int x[10]={21,48,36,44,92,11,25,44,41,29};
	int i;
	int maks = -1000;
	int min = 1000;
	for (i=0;  i<10;i++)
	{
		if (x[i]>maks)
		{
			maks = x[i];
		}
		if (x[i]>min)
		{
			min = x[i];
		}
	}
	cout<<"Nilai maksimum : "<<maks<<endl;
	cout<<"Nilai minimum : "<<min<<endl;
	getch();
}
