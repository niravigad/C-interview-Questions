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