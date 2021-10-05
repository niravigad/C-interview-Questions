/* 
The program is supposed to print which day precedes the next
 
 */
 
 #include <stdio.h>
 
 typedef struct {
	int min;
	int hour;
	}day_time;
	

 int main (void)
{
		day_time,day1,day2;
		if(day1<day2)
			printf("day 1 is earlier than day2");
		else
			printf("day 2 is earlier than day1");
		return 0;
	}
	

/* Answer below 





The program is incorrect.
According to page 129 in the book,
it is written that it is not possible to make a comparison between structures as is done in line 12.
In order to correct the plan a comparison must be made between all the members within the structure


*/



