#include<stdio.h>
main(){
 int n, i, result=1;

    printf("정수 입력 : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
        result *= i;

    printf("%d! = %d\n", n, result);

    return 0;	
	
	
	
	
	
}
