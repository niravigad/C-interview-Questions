/* 
The program should print 2 to the power of 3, and 2 to the power of 4.
I.e. results 8 and 16
 
 */
 
 #include <stdio.h>
 
 
#define VAL1 3
#define VAL2 4
#define twopn(n)\
{\
	if(n==0)\
		temp=1;\
	else\
		temp=2*twopn(n-1);\
}


 int main (void)
{
	int n.temp;
	n=VAL1;
	twopn(n);
	printf("%d",temp);
	n=VAL2;
	twopn(n);
	printf("%d",temp);
	
	return 0;
	}
	

/* Answer below 





The program is incorrect.
The code is defined as a macro, which calls itself recursive.
Macro does not support recursion.
In order to correct the error it is necessary to perform the 
operation iteratively using a loop or rewrite the macro as a recursive function.


*/



