#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;

struct LNode{
    ElementType Data[MAXSIZE];
    Position Last;
};


List ReadInput();






/**
 * 实现二分查找
 * @param L
 * @param X
 * @return
 */
Position BinarySearch( List L, ElementType X );

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};