#include <stdio.h>
#include <math.h> 
int gcd(int a, int b){
	if (a > b){
		if (a%b == 0)
			return b;
		else{
			gcd((a-b), b);
		}
	}
	else{
		if (b%a == 0)
			return a;
		else{
			gcd((b-a), a);
		}
	}
}
int value(int type, int width, int height, int length){
	int price, hcf, final_value;
	switch(type){
		case 79:
			price = 30;
			break;
		case 47:
			price = 10;
			break;
		case 29:
			price = 4;
			break;
		case 82:
			price = 5;
			break;
		case 26:
			price = 3;
			break;
		case 22:
			price = 9;
			break;
		default:
			price = -1;
	}
	if (price == -1)
		return -1;
	else if (width<=0||length<=0||height<=0)
		return -2;
	else{
		hcf = gcd(gcd(width, height), gcd(height, length));
		final_value = pow((hcf*hcf*hcf),2)*price*(width/hcf)*(length/hcf)*(height/hcf);
		return final_value;
	}
}

int main ()
{
	int type, width, height, length;
	scanf ( "%d%d%d%d", &type, &width, &height, &length );
	printf ( "%d", value ( type, width, height, length ) );
	return 0;
}
