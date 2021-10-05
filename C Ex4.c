/* 
The following program is supposed to place the "the string" chain into a new piece of memory,
omitting the character instances - "?"  
 */



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



/* Answer below 





The program does not work properly.
When we execute the command free (p), the pointer of p will point to an empty cell,
because we advance it each time inside the loop when we find another character that is not "?" .
Therefore "free" will cause a runtime error / release memory that is not related to our program.
The way to solve this is to create a char * temp variable, so that after we do malloc below "if",
we place the command temp = p, and then we do free (temp),
Because temp will still point to the first cell.

*/

