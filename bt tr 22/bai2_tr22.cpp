#include <stdio.h>
int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	if (a==0) {
		if (b==0){
			printf("phuong trinh co vo so nghiem");
		}
		else {
			printf("phuong trinh vo nghiem");
		}

	}
	else {
		printf("phuong trinh co nghiem x=%f", -b/a);
	}
	return 0;
}
