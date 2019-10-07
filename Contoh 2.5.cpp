#include <conio.h>
#include <conio.h>
#include <studio.h
#define Nmaks10

typedef int matrik [Nmaks] [Nmaks];

void main()
{
	int n,i,j;
	matrik A,B,C;
	cout<<"program poerkalian Matrik A 2x2 dan B 2x2\n";
	cout<<"\n";
	n = 2;
	cout<<"Masukkan entri-entri matriks A\n";
	for (i=1;i<=n;i++;
		{
			for (j=1;j<=n;j++)
			{cout<<"A["<<i<<","<<j<<"] = ";cin>>A[i][j];}
		}
	clrscr();
	cout<<"Masukkan entri-entri matriks B\n";
	
	cout<<"\n";
	for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{cout<<"B["<<i<<","<<j<<"] = ";cin>>B[i][j];}
		}
	clrscr();
	cout<<"\n";
	
	for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{C[i][j]=(A[i][1]*B[1][j][]+(A[i][2]*B[2][j]);}
		}
	clrscr();
	cout<<"Masukkan entri-entri matriks A,B dan C \n";	
	cout<<"\n";
	gotoxy(1,5); cout<<"A=";
	for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
				gotoxy (2+4*j,2+2*i);
				cout<<A[i][j];
			}
		}
	gotoxy(1,10); cout<<"B=";
	for (i=;i<=n;i++){
		for (j=1;j<=n;j++) {
			gotoxy (2+4*j,7+2*i);
			cout<<B[i][j];
		}
	}
	gotoxy(1,15);
	cout<<"C=";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++) {
			gotoxy (2+4*j,+2+2*i+10);
			cout<<A[i][j];
		}
	}
	gotoxy(12,15);
	cout<<"x";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++) {
			gotoxy (13+4*j,+2+2*i+10);
			cout<<B[i][j];
		}
	}
	gotoxy(23,15);
	cout<<"=";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++) {
			gotoxy (24+4*j,+2+2*i+10);
			cout<<A[i][j];
		}
	}
}
