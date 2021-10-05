/* The following program should check if the character 'a' is in the array,
print and return how many times it appears
*/



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


/* Answer below








The code snippet is incorrect,
In line 16 the command free (p) is executed
But memory can not be released for a pointer variable that has not been assigned a dynamic memory, so there are 2 solutions:
1) Delete this line
2) Assign a dynamic memory pointer, add the directory: <stdlib.h>

add lines : 

char* p  = (char *) malloc(sizeof(char));
