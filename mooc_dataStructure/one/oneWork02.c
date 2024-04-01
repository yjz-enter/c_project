//
// Created by ADMIN on 2024/4/1.
//
/**
 * 给定一个长度为K的整数序列{N1, N2, ... , NK}。连续子序列被定义为{Ni, Ni+1, ... , Nj}
，其中1≤i≤j≤K。最大子序列是其元素和最大的连续子序列。例如，对于序列{-2, 11, -4, 13, -5, -2}，其最大子序列是{11, -4, 13}，其元素和最大为20。

现在你需要找到最大子序列的最大和，以及最大子序列的第一个和最后一个元素。
输入格式：
每个输入文件包含一个测试用例。每个测试用例占两行。第一行包含一个正整数K (≤10000)。第二行包含K个数字，以空格分隔。
输出格式：
对于每个测试用例，在一行中输出最大和，以及最大子序列的第一个和最后一个元素。数字之间必须用一个空格分隔，但是行末不允许有多余的空格。
如果最大子序列不唯一，则输出索引i和j最小的那个。如果所有的K个数字都为负数，则其最大和被定义为0，你需要输出整个序列的第一个和最后一个数字。
 */

//10
//-10 1 2 3 4 -5 -23 3 7 -21

#include <stdio.h>
void  max_list_sum2(int k,int a[]) {
    int sum = 0;
    int maxSum = 0;
    int max_start = 0;
    int max_end = k - 1;
    int current_start= 0;
    int current_value= 0;


    for (int i = 0; i < k; i++) {
        sum += a[i];
        if (sum > maxSum) {
            maxSum = sum;
            //每次得出目前的i是最大i,当前的start是start
            max_end = i;
            max_start=current_start;
        }
        if (sum < 0) {
            sum = 0;
            // 每次遇到sum <0,current_start就从下一个开始算起。
            current_start = i + 1;
        }
        if(a[i]>=0){
            current_value=1;
        }

    }
    // 如果有0,并且最大值为0,那就打印000
    if(current_value==1 && maxSum <= 0){
        printf("%d %d %d", maxSum, 0, 0);
    }else {
        //否则就正常打印
        printf("%d %d %d", maxSum, a[max_start], a[max_end]);
    }
}


int main() {
    int k;
    scanf("%d", &k);
    int a[k];
    for (int i = 0; i < k; ++i) {
        scanf("%d", &a[i]);
    }
    max_list_sum2(k, a);
}
