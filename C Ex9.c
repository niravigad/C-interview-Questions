/* 
The next plan is to rate a ship according to a given formula and print the result
 
 */
 
 #include <stdio.h>
 
const double standard_rating = 10.0;
double rating;
int rate_the_ship(double,double,int,double);

 int main (void)
{
	rate_the_ship(64.0,45.3,3,standard_rating);
	printf("%g",rating);
	return 0;
	}

int rate_the_ship(double lwl,double sailarea,int nsails,double rating)
{

	rating*=(3.2/lwl) * sailarea * .025 * nsails;
	return 0;
}

/* Answer below 





The program is incorrect.
The calculated ship rating is lost,
Because the local variable variable of the function gets higher importance
From the global variable rating
 To fix this, you can rename the parameter in the function and place the calculation
In the global rating variable


*/



