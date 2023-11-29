#include<stdio.h>
#include<math.h>
float add(float x,float y){
    return x+y;
}
float min(float x,float y){
    return x-y;
}

main(){
    int c;
    float a,b;
    printf("숫자를 입력하시오.");
    scanf("%f %f", &a, &b);
    
    printf("1.더하기 2. 빼기 3.x의 y제곱 ");
    scanf("%d", &c);
    
    if (c == 1)
     printf("%f", add(a,b));
    else if(c == 2)
     printf("%f", min(a,b));
    else if(c == 3)
     printf("%f", pow(a,b));

}
