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