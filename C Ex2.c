enum color_t {red=1,white,black,blue};

struct car
	{
	float weight;
	float length;
	float width;
	unsigned passengers:4;
	unsigned convert:1;
	unsigned pwr_brake:1;
	unsigned pwr_steer:1;
	enum color_t color:2;
	};
	
struct car car_oftheday;


/* Answer below 








The code snippet will not work as required,
There is an error in line 12, not enough space has been allocated for the bits.
Need to allocate 3 places and not 2 as written above

*/
