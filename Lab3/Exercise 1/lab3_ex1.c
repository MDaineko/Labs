#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,a1,a2,a3;
	for (a=401;a<500;a++){
	a1=a/100;
	a2=a/10%10;
	a3=a%10;
	if (a1+a2+a3==9, a==(a3*100+a2*10+a1)*47/36)
printf("Result: %d", a);
}
	return 0;
}
