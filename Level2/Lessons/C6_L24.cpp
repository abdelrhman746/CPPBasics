#include <iostream>
using namespace std;
//Float Format (printf)
int main()
{
	float Pi=3.14159265;
	

	//Percision specification
	printf("Percision specification of = %.*f \n", 1, Pi);
	printf("Percision specification of = %.*f \n", 2, Pi);
	printf("Percision specification of = %.*f \n", 3, Pi);
	printf("Percision specification of = %.*f \n", 4, Pi);

	float x = 7.0, y = 9.0;
	printf("\nThe float division is : %.3f/%.3f=%.3f\n\n", x, y, x / y);

	double d = 12.45;
	printf("The double value is : %.3f\n", d);
	printf("The double value is : %.4f\n", d);
}
