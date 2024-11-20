#include <stdio.h>

int main() {
	float side = 10.3;
	float perimeter = side * 4; 
	float area = side * side;
	
	printf("Canh cua hinh vuong la : %f cm\n", side); 
	printf("Chu vi cua hinh vuong la : %2f cm\n", perimeter);
	printf("Dien tich cua hinh vuong la : %.2f cm^2\n", area);
	
	return 0;
}
