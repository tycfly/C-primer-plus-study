// practice 3.6.10
#include <stdio.h>
int main(void) /* this program is perfect */
{
	int cows, legs;
	printf("How many cows legs did you count?\n");
	scanf("%d", &legs);
	cows = legs / 4;
	printf("That implies there are %d cows.\n", cows);
//	printf("hello world");
	return 0;
}
