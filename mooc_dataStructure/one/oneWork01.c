//
// Created by yjz on 2024/3/26.
//

/**
* 给定K个整数组成的序列{ N1, N2, ..., NK}，“连续子列”被定义为{ Ni, Ni+1, ..., Nj}，
 * 其中 1≤i≤j≤K。“最大子列和”则被定义为所有连续子列元素的和中最大者。
 * 例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。现要求你编写程序，计算给定整数序列的最大子列和。

本题旨在测试各种不同的算法在各种数据情况下的表现。各组测试数据特点如下：
数据1：与样例等价，测试基本正确性；
数据2：102个随机整数；
数据3：103个随机整数；
数据4：104个随机整数；
数据5：105个随机整数；
输入格式:
输入第1行给出正整数K (≤100000)；第2行给出K个整数，其间以空格分隔。

输出格式:
在一行中输出最大子列和。如果序列中所有整数皆为负数，则输出0。
*/

#include <stdio.h>
#include <adomd.h>

/**
* 思路1:暴力for 循环 ，思路2:循环求和为负数就从新算，思路3：二分法，或者说分而治之
*/
void max_list_sum4(int k, int a[]);

int max_list_sum3(int a[],int low,int high);
int main(){
  int k;
  scanf("%d",&k);
  int a[k];
    for (int i = 0; i < k; ++i) {
        scanf("%d",&a[i]);

    }
    max_list_sum4(k,a);

}

/** O(n) =n
 *  在线处理方法：意为每输入一个数据就即使处理，在任何一个地方中止输入，算法都能给出当前的解。
 * 也叫动态规划
 */

void  max_list_sum4(int k,int a[]){
    int sum = 0;
    int maxSum=0;
    for (int i = 0; i < k; i++) {
        sum+=a[i];
        if (sum>maxSum)
            maxSum=sum;
        if (sum <0)
            sum =0;
    }
    printf("%d",maxSum);
}
// 分而治之算法 先分  后治
//复杂问题分解成相互独立的子问题，然后将子问题的解合起来，得到原问题的解，这个过程，每个子问题都是通过递归的方式求解的。

// 辅助函数，计算跨越中点的最大子列和
int max_crossing_sum(int arr[],int low,int mid,int high){
    int left_sum,right_sum,sum=0;
    //计算左边部分的子列最大和
    for (int i = mid; i <mid; i--) {
       sum+=arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }
    //计算左边部分的子列最大和
    for (int i = mid; i >mid; i++) {
        sum+=arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }
    return left_sum+right_sum;

}

// 分治，用于计算最大子列和
int  max_list_sum3(int arr[],int low,int high){
     if (low ==high){
         return arr[low];
     };
     int mid =(low+high)/2;
     int left_sum= max_list_sum3(arr,low,mid);
     int right_sum= max_list_sum3(arr,mid+1,high);
     int crossing_sum= max_crossing_sum(arr,low,mid,high);
// max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
     int max_sum =(left_sum>right_sum) ? ((left_sum>crossing_sum)? left_sum:crossing_sum):((right_sum>crossing_sum)? right_sum:crossing_sum);
    return max_sum;
}

