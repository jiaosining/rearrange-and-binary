#include <stdio.h>
#include <stdlib.h>
#include "rearrange_binary.h"

void print()
{
    int num;
    long x;
    char c[100];

    while (scanf("%ld", &x) == 1)
    {
        num = 0; // 重置 num
        for (int i = 0; i < 100; i++) {
            c[i] = '\0'; // 重置字符数组 c
        }
        binary(x, c, &num);
        printf("%s\n", c);
    }
}

void binary(long a, char *ch, int *n)
{
    if (a > 1)
    {
        binary(a / 2, ch, n);
    }
    ch[*n] = (a % 2 == 0) ? '0' : '1';
    (*n)++;
}

void rearrange()
{
    long numbers1;
    long numbers2 = 0;
    long number[600]; // 假设最多有100个数字
    int i = 0;

    // 读取输入并存储在数组中
    while (scanf("%ld", &numbers1) == 1)
    {
        number[i] = numbers1;
        i++;
        numbers2++;
    }

    // 使用 qsort 对数组进行排序
    qsort(number, numbers2, sizeof(long), compare);

    // 打印排序后的数组
    for (i = 0; i < numbers2; i++)
    {
        printf("%ld\n", number[i]);
    }
}

int compare(const void *a, const void *b)
{
    long diff = *(long *)a - *(long *)b;
    if(diff < 0)
        return -1;
    else if(diff > 0)
        return 1;
    else
        return 0;
}