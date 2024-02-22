//
// Created by yjz on 2024/2/21.
//



#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    //运行exe时所在的终端支持显示utf8编码的文字，通过在程序开头设置终端的编码实现
//    SetConsoleOutputCP(65991);
//    system("CHCP 65001");
//    printf("yjz hello c\n");
//    printf("yjz 你好 c\n");
//    printf("23+44= %d\n",23+44);

//    price2();
//    plus();
    high();
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