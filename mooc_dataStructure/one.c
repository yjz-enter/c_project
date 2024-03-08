//
// Created by yjz on 2024/3/8.
//

#include <stdio.h>
#include <math.h>

int main(){
//    printN(50);
    printN2(5000000);
};
/** 例子
 * 简单的print实现也会有两种算法，一种是循环打印，一种是递归打印，递归打印再数值大的时候会占用内存
 *
 * @param N
 * @return
 */
int printN(int N){
    for (int i = 0; i <= N; ++i) {
       printf("%d ",i);

    }
}
int printN2(int N){
    if(N>=0){
        printf("%d ",N);
        printN2(N-1);
    }

}
/** 例子
 * 写程序计算给定多项式在定点x处的值
 * f(x) =a0 +a1x + ...... +an-1x n-1次方  + anx的n次方
 *
 * @param N
 * @return
 */
double f1(int n,double a[],double x){
    double p=a[0];
    for (int i = 0; i <= n; ++i) {
        p+= a[i]+ pow(x,i);
    };
    return p;
}
/**
 *  f(x) = a0 + x(a1+x(an-1 +x(an)))
 * @param n
 * @param a
 * @param x
 * @return
 */
double f2(int n,double a[],double x){
    double p=a[0];
    for (int i = 0; i <= n; ++i) {
        p+= a[i]+ pow(x,i);
    };
    return p;
}