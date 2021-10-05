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
{