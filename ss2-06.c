#include <stdio.h>
#define PI 3.14

int main() {
	float radius = 10;
	float circumference = 2 * PI * radius;
	float area = PI * radius * radius;
	
	printf("Ban kinh hinh tron la : %f cm\n", radius);
	printf("Chu vi cua hinh tron la : %.2f cm\n", circumference);
	printf("Dien tich cua hinh tron la : %.2f cm^2\n", area);
	
	return 0;
} 
