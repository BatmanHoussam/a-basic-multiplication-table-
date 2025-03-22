#include <stdio.h>
int a, i, y;
main(){
	printf("Enter a = ");
	scanf("%d",&a);
	printf("The multiplication table of %d is :\n", a);
	for (i = 0; i <= 12; i++){
		y = a * i;
		printf("%d x %d = %d \n", a, i, a * i);
	}
	return a;
}
