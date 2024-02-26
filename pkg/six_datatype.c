//
// Created by yjz on 2024/2/23.
//
#include <stdio.h>
#include <math.h>


/**
* 第六周数据类型
*/
//给定不超过6的正整数d,考虑从d开始的4个数字，请输出所有由它们组成的无重复三位数
int main(){
//    integer_test();
//    integer_answer();
//    flower_test();
//    nine_nine_table();
    prime_number();
};
int integer_test(){
    int d=2;
    for (int i = d; i < d+4; ++i) {
        for (int j = d; j < d+4; ++j) {
            for (int k =d ; k < d+4; ++k) {
                    if(i!=j && i!=k && j!=k){
                        printf("%d%d%d ",i,j,k);
                    }
               }
            }
        printf(" \n");
        }
    }

int integer_answer(){
    int d=2;
    int i,j,k;
    i=d;
    while (i<=d+3){
        j=d;
        while (j<=d+3){
            k=d;
            while (k<=d+3){
                if(i!=j && i!=k && j!=k){
                    printf("%d%d%d ",i,j,k);
                }
                k++;
            }
            j++;
        }
        printf(" \n");
        i++;

    };
}


/**
* 水仙花数
 * 一个n位正整数（n>=3），它的每个位上的数组的n次幂之和等于他本身，例如153=1的三次方+5的三次方+3的三次方 ，本题要求编写所有n位的水仙花数。
 * 输入格式：在一行中给一个正整数 3<=n<=7
 * 输出格式：按递增顺序输出所有n位水仙花数，每个数字占一行
*/
int flower_test(){
    int n;
    int i,min=1;
    scanf("%d",&n);
    while (i<n){
        min*=10;
        i++;
    };
    i=min;
    while (i<min*10){
        int t=i;
        int sum=0;
        // 每个数 取p
        do {
            int d = t%10;
            t/=10;
            int p =d;
            int j= 1;
            while (j<n){
                p*=d;
                j++;
            }
            sum+=p;
        } while (t > 0);
        if(sum ==i){
            printf("%d\n",i);
        }
        i++;

    }
    return 0;
}
/**
* 打印九九乘法表
*/
int nine_nine_table(){
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <i; ++j) {
            printf("%d*%d=%d ",j,i,i*j);

        }
        printf("\n");
    }
}
/**
* 统计素数并求和
 * 输入：输入在一行中给出2个正整数M和N(1<=M<=N<=500)。
 * 输出格式:在一行中顺序输出M和N区间内素数的个数以及它们的和,数字闻可以空格分隔
*/

int prime_number(){
    int m,n;
    scanf("%d,%d",&m,&n);

    for (int i = m; i <n ; ++i) {
        int sum=0;
        int count=0;
        for (int j = 1; j < i; ++j) {
            if(i%j==0){
                sum+=i;
                count++;

            }
        }
        if(count==1){
            printf("sum=%dcount=%d \n",sum,count);
        }


    }


}