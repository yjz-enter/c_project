//
// Created by yjz on 2024/2/23.
//
#include <stdio.h>

/**
* 第二周计算
*/
int main(){

    price();
};
int price(){
    int price =0;
    int change=0;
    scanf("%d",&price);
     change =100-price;
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