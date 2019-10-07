#include <iostream>
#include <conio.h>
int main()
{
	int x[10]={21,48,36,44,92,11,25,44,41,29};
	int i,bil,jumlah;
	bool ketemu=false;
	jumlah= 0;
	cout<<"Bilangan Yang Akan Dicari :";
	cin>>bil;
	for (i=0;i<10;i++)
	{
		if (x[i]==bil)
		{
			ketemu true;
			cout<<"Bilangan Ditemukan Di Elemen: "<<i<<endl;
			jumlah++;
		}
	}

if (ketemu)
{
	cout<<"Jumlah Data: "<<Jumlah;
}
else
{
	cout<<"Bilangan Tersebut Tidak DItemukan";
}
getch();
} 
