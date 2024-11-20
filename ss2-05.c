#include <stdio.h>

int main() {
	float length = 10;
	float width = 20;
	float perimeter = (length + width) * 2;
	float area = length * width;
	
	printf("Chieu dai hinh chu nhat : %f cm\n", length);
	printf("Chieu rong hinh chu nhat : %f cm\n", width);
	printf("Chu vi hinh chu nhat la : %.2f cm\n", perimeter);
	printf("Dien tich cua hinh chu nhat la : %.2f cm^2\n", area);
	
	return 0;
}
