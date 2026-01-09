#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a+b<=c || b+c<=a ||c+a<=b) {
		printf("a, b, c khong tao thanh 1 tam giac");
		
	}
	else {
		printf("Chu vi cua tam giac: %.2f\n", a+b+c);
		float p=(a+b+c)/2;
		printf("Dien tich cua tam giac: %.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
	}
}
