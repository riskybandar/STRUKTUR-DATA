#include <conio.h>
void jadiapa(char*);
void main(){
	char kata[] = "Dia Tampan";
	cout<<"Kata Sebelumnya = " <<kata<<"\n";
	jadiapa (kata);
	cout<<"sesudah proses = "<<kata;
	getch();
}
void jadiapa (char *k) {
	while (*k != '\0') {
		if (*k>= 'a' && *k <='z')
		*k -=32;
		++k;
	}
}
