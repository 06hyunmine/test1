#include<stdio.h>
main(){
 int n, i, result=1;

    printf("���� �Է� : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
        result *= i;

    printf("%d! = %d\n", n, result);

    return 0;	
	
	
	
	
	
}
