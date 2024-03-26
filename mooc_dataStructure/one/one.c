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
    int i;
    double p=a[n];
    for ( i = n; i > 0; i--) {
        p= a[i-1]+ x*p;
    };
    return p;

}

/**
*  笔记：什么是数据结构？ 数据对象在计算机中的组织方式。
 * 有逻辑结构和物理存储结构。
 * 逻辑结构有1对1是线性结构。 1对多是树结构。 多对多是图结构。
 * 物理存储结构指的是数据在内存中怎么放，是连续放呢还是隔开放呢? 数组：连续放和链表：分开放
 * 数据对象必然有一系列加在其上的操作相关联，完成这些操作所用的方法就叫算法。
*/

/**
* 算法：
 * 1.一个有限指令集
 * 2.接受一些输入（也可以不要输入）
 * 3.产生输出。
 * 4.一定有限步骤终止
 * 5.每一条指令必须 1.充分明确得目标，2，计算机能处理的范围内。3.描述应不依赖于任何一种计算机语言以及具体的实现手段。
*/

/**
*  什么是好的算法？
 *  空间复杂度：
 *  时间复杂度：
 *
*/

//二分法伪代码描述
// 给定N个从小到大排好序的整数序列List],以及某待查找整数X,我们的目标是找到X在List中的下标。即若有Listil=X,则返回i;否则返回-1表示没有找到。

int two(int L[],int x){
    int n;
    int a;

    scanf("请输入要查找的x %d ",&a);

    for (int i = 0; i < 8; ++i) {


    }
}