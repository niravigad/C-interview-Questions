#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 16
#define MARK '?'


int my_count (char *the_string)
{	
	char *p = NULL;
	int count = 0,sum=0;
	
	if(p=malloc(SIZE))
		while(count<SIZE)
		{
		if(*the_string!=MARK)
		{
			*p=*the_string;
			printf("%c",*p);
			p++;
			sum++;
		}
	count++;
	the_string++;
	}
	
	free(p);
	return sum;
}

int main ()
{
		char the_string[SIZE]="bs?lm?wqe?lklo?y";
		int sum=my_count(the_string);
		printf("\n%s\n sum is: %d",the_string,sum);
		return 0;
	}
