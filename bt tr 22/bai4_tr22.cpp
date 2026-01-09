#include <stdio.h>
int main() {
	int ngay, thang, nam;
	printf("nhap ngay, thang, nam: ");
	scanf("%d%d%d",&ngay ,&thang ,&nam);
	if (ngay==31 && thang==12) {
		printf("1/1/%d", nam+1);
	}
	else {
		int checkthang= 0;
		switch (thang) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: checkthang=1;break;
		}
		if (checkthang==1) {
			if (ngay==31) {
				printf("1/%d/%d", thang+1, nam);
			}
			else {
				printf("%d/%d/%d", ngay+1, thang, nam);
			}
		}
		else if (thang==2) {
			if ((nam%4==0) && (nam%100!=0) || (nam%400==0)) {
				if (ngay==29) {
					printf("1/3/%d", nam);
				}
				else {
					printf("%d/2/%d", ngay+1, nam);
				}
			}
			else {
				if (ngay==28) {
				printf("1/3/%d", nam);
				}
				else {
					printf("%d/2/%d", ngay+1, nam);
				}
			}
		}
		else {
			if (ngay==30) {
				printf("1/%d/%d", thang+1, nam);
			}
			else {
				printf("%d/%d/%d", ngay+1, thang, nam);
			}
		}
	}
	return 0;
}
