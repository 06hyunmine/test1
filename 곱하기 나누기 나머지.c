#include<stdio.h>
#include<math.h>
float mul(float x,float y){
    return x*y;
}
float div(float x,float y){
    return x/y;
}
float fmodf(float x,float y){
	return fmod(x,y);
}
main(){
    float a,b;
	int i;
    
    printf("두 수를 입력하세요 : ");
    scanf("%f %f",&a,&b);
    
    printf("4. 곱하기 5. 나누기 6. 나머지 구하기 ");
    scanf("%d",&i);
    
    if(i==4){
        printf("%f",mul(a,b));
    }
    else if(i==5){
        printf("%f",div(a,b));
    }
    else if(i==6){
        printf("%f",fmodf(a,b));
    }
}
