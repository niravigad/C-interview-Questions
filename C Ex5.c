/* 

The following program should print out whether the student is not enrolled in algebra courses,
and calculate the price he must pay for the courses he is enrolled in.

*/



#include <stdio.h>

#define COURSE_COST 200.0

#define ASIC 1
#define ASSEMBLER 2
#define DATABASES 4
#define JAVA 8
#define ALGEBRAI 0x10
#define ALGEBRAII 0x20

double student_courses(unsigned courses)
{	
	double cost=0;
	if(courses & (ALGEBRAI|ALGEBRAII) ==0)
		printf("NO ALGEBRA \n");
		
	while(courses)
	{
		if(courses &1) cost+=COURSE_COST;
		courses>>=1;
	}
	return cost;
}



/* Answer below 





The program will not work properly.
Line 24
In order of priority, each bitwise comes after "=="
So first the comparison will be made (ALGEBRAI | ALGEBRAII) and only then courses &, which is not what we are looking for.
Therefore everything should be put in parentheses in this way:

if((courses & (ALGEBRAI|ALGEBRAII)) ==0)

