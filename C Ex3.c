#include <stdio.h>
#define MESSAGE3 3
#define MESSAGE4 4
#define MESSAGE5 5
void f( int i)
	{
	if (i != MESSAGE3 || i != MESSAGE4)return;
	printf("no parking - construction area");
	}


int main(void)
{
	int mes;
	mes = MESSAGE3;
	f(mes);
	mes = MESSAGE4;
	f(mes);
	mes = MESSAGE5;
	f(mes);
	return(count);
}