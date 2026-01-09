#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c;
	printf("nhap gia tri a, b, c cua ax^2+bx+c; ");
	scanf("%f %f %f", &a, &b, &c);
	if (a==0) {
		if (b==0){
			if (c==0) {
				printf("phuong trinh co vo so nghiem");
			}
			else {
				printf("phuong trinh vo nghiem");
			}
		}
		else {
			printf("phuong trinh co nghiem x=%f", -c/b);
		}
	}
	else {
		float delta = b*b-4*a*c;
		if (delta<0){
			printf("phuong trinh vo nghiem");
		}
		else if (delta==0) {
			printf("phuong trinh co nghiem kep x=%f", -1*(b/(2*a)));
		}
		else{
			printf("phuong trinh co 2 nghiem phan biet x1=%f, x2=%f", -1*((b+sqrt(delta))/(2*a)), -1*((b-sqrt(delta))/(2*a)));
		}
		}
	return 0;
}
