#include <conio.h>
#include <conio.h>
#include <studio.h

#define Nmaks10
typedef int matrik [Nmaks] [Nmaks];

void main()
{
	int n,i,j;
	
	cout<<"Program Penjualan Matrik A 2x2 dan B 2x2\n";
	cout<<"\n";
	n=2;
	cout<<"Masukan entri-entri matriks A\n";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			cout<<"A["<<i<<","<<j<<"] = ";cin>>A[i][j];
		}
	}
	
	
	cout<<"\n";
	cout<<"Masukkan entri-entri matriks B\n";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
				cout<<"B["<<i<<","<<j<<"] = ";cin>>B[i][j];
		}
	}
	
	cout<<"\n";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			C[i][j]= A[i][j]+B[j][j];
		}
	}
	gotoxy (1,16);
	cout<<"Hsl=";
	for
	{
		for ( j=1;j<=n;i++)
		{
			gotoxy(2+4*j,3+2*i+10);
			cout<<A[i][j];
		}
	}
	gotoxy (12,16);
	cout<<"+";
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(13+4*j, 3+2*i+10);
			cout<<B[i][j];
		}	
	}
	gotoxy (23,16);
	cout<<"+";
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(24+4j,3+2*i+10);
			cout<<C[i][j];
		}
	}
	getch();
}
