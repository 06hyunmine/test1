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
    printf("���ڸ� �Է��Ͻÿ�.");
    scanf("%f %f", &a, &b);
    
    printf("1.���ϱ� 2. ���� 3.x�� y���� ");
    scanf("%d", &c);
    
    if (c == 1)
     printf("%f", add(a,b));
    else if(c == 2)
     printf("%f", min(a,b));
    else if(c == 3)
     printf("%f", pow(a,b));

}
