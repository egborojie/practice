#include <stdio.h>

int main()
{
	int intAge;
	float fltResult;

	printf("\n Egbor Ojie");
	printf("\n Enter your age\n");
	scanf("%d", &intAge);

	printf("\n Enter your result\n");
	scanf("%f", &fltResult);

	printf("\n Your age is %d and your result is %.3f\n", intAge, fltResult);
	return 0;
}

