/* 
The following program is supposed to extract the address
 of the variable with the maximum value
 
 */
 
 #include <stdio.h>
 
 int *find_address_of_max(void)
 {
	int x,y;
	
	x = getchar();
	y = getchar();
	
	if(x > y)
	return(&x);
	else
	return(&y);
}

int main (void)
{
		int *p
		p = find_address_of_max();
		printf("max is: %d",*p);
		return 0;
	}





/* Answer below 







The function works fine, but the address it returns is the address of a local pointer,
So it will be deleted as soon as it is finished, and the printf command will lead to a crash.
You can add static to local variables so that memory is not erased,
or malloc them so that they are kept in the heap

*/
