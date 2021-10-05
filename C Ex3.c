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

/* Answer below









The code snippet will not work as required,
There is a logical error in line 7, the condition says that as long as the input is different from 3 or 4 you will print a "no parking" message.
That is, the function will return TRUE to each input that enters, so the desired message will never be printed that we will reach return
Can be corrected by changing the condition from || to &&

*/
