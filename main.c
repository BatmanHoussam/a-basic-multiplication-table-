#include <stdio.h>
int a, i, y;
main(){
	printf("entrez a = ");
	scanf("%d",&a);
	printf("La table de multiplication de %d est :\n", a);
	for (i = 0; i <= 12; i++){
		y = a * i;
		printf("%d x %d = %d \n", a, i, a * i);
	}
	return a;
}
