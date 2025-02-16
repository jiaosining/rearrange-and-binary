#include <stdio.h>
#include "rearrange_binary.h"

int main()
{
    // 重定向输入和输出
    freopen("input.txt", "r", stdin);
    freopen("output_of_arrangement.txt", "w", stdout);

    // 调用 rearrange 函数
    rearrange();

    // 关闭并重定向输入和输出
    
    freopen("output_of_arrangement.txt", "r", stdin);
    freopen("ultimate_results.txt", "w", stdout);

    // 调用 print 函数
    print();

    // 关闭文件
    fclose(stdin);
    fclose(stdout);

    return 0;
}