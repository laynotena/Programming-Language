#include <stdio.h>

int main(void) {
	int year, day, num, month, date, answer;
	int days = 0;
	scanf("%d %d\n",&year,&day);
	scanf("%d", &num);
	for(int i =0; i<num;i++){
		int count =0;
		scanf("%d %d", &month, &date);
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				days=31;
				break;
			case 2:
				if ((year%400 == 0) || (year%4==0 && year%100!= 0))
					days = 29;
				else
					days = 28;
				break;
			case 4: case 6: case 9: case 11:
				days = 30;
				break;
			default:
				days = 0;
				break;
		}
		if (month <1 || month>12){
			printf("-1 ");
			continue;
		}
		else if (date<1 || date>days){
			printf("-2 ");
			continue;
		}
		else
			for (int m=1; m< month; m++){
				switch(m){
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						days=31;
						break;
					case 2:
						if ((year%400 == 0) || (year%4==0 && year%100!= 0))
							days = 29;
						else
							days = 28;
						break;
					case 4: case 6: case 9: case 11:
						days = 30;
						break;
					default:
						days = 0;
				}
				count+=days;
			}
		count+=date;
		answer=(day+(count-1)%7)%7;
		printf("%d ",answer);
	}
	return 0;
}
