//
// Created by yjz on 2024/2/21.
//



#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    //运行exe时所在的终端支持显示utf8编码的文字，通过在程序开头设置终端的编码实现
//    SetConsoleOutputCP(65991);
    system("CHCP 65001");
//    printf("yjz hello c\n");
//    printf("yjz 你好 c\n");
//    printf("23+44= %d\n",23+44);

//    price2();
//    plus();
//    high();
//    high_double();

//    double  f= 6 + 5.0/4 -2;
//    int  f1= 6 + 5/4 -2;
//    printf(" %f,%d\n",f,f1);
//    int  d1= 2+2*(2*2-2)%2/3;
//    printf("%d\n",d1);
//    int  d2= 5*4%3*2;
//    printf("%d",d2);
//      int a,b,c;
//      a=5;b=10; c=a*b==50;
//    printf("%d",c);
//    int n;
//    if(1<=n<=
//  int a;
//    scanf("%d",&a);
//        if(a==1)
//            if (a > 1)
//                printf("正常");
//            else
//                printf("不正常");

//int i=1;
//
//switch(i%3){
//    case 1:
//        printf("1");
//    case 2:
//        printf("2");
//    case 3:
//        printf("3");
//    case 4:
//        printf("4");
//}
//for(int i =10;i>1;i/=2){
//    printf("%d\n",i++);
//}
    printf("char=%llu\n",sizeof(char));


}

int price(){
    int price =0;
    scanf("%d",&price);
    int change =100-price;
    printf("找钱%d",change);
    return 0;
}

int price2(){
    int price =0;
    int change;
    scanf("%d",&price);
    const int amount =100;
     change =amount-price;
    printf("找钱%d",change);
    return 0;
}
int plus(){
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d+%d=%d\n",a,b,a + b);
    return 0;
}
int high(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("(%d+%d/12.0)*0.3048=%f\n",a,b,(a + b/12.0)*0.3048);
    return 0;
}

int high_double(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%f\n",a);
    printf("(%f+%f/12)*0.3048=%f\n",a,b,(a + b/12)*0.3048);
    return 0;
}



