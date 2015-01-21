#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius, fahrenheit;
	float lower, upper, step;
	
	lower = 0;		/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	printf("%6s\t|%8s\t|%12s\n", "Fahr", "Celsius", "Fahrenheit");
	printf("---------------------------------------\n");
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		fahrenheit = (9.0/5.0) * celsius + 32;
		printf("%6.0f\t|%8.1f\t|%12.1f\n", fahr, celsius, fahrenheit);
		fahr = fahr + step;
	}
	
	return 0;
}

