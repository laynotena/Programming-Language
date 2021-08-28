#include <stdio.h>

int main(void) {
	int h, w, d = 0;
	int a, v =0;
	scanf("%d", &h);
	scanf("%d", &w);
	scanf("%d", &d);
	a = (d*w+w*h+d*h)*2;
	v = d*w*h;
	printf("%d ", a);
	printf("%d", v);
	return 0;
}
