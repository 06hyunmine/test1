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
    
    printf("�� ���� �Է��ϼ��� : ");
    scanf("%f %f",&a,&b);
    
    printf("4. ���ϱ� 5. ������ 6. ������ ���ϱ� ");
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
