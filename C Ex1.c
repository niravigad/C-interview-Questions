#include <stdio.h>
#define FIND 'a'
int main(void)
{
	char array[] = "You can't use:insert Draw Design";
	char *p;
	int count=0;
	
	p = array;
	while (*p !='\0')
	{
		if(*p ==FIND) count++;
		p++;
	}
	printf("the string appears %d times\n",count);
	free(p);
	return(count);
}