#define _CRT_SECURE_NO_WARNINGS

//***模拟实现库函数strcpy

#include <assert.h>  // 用于参数校验
#include<stdio.h>

char* my_strcpy(char* dest, const char* src) 
{
    // 1. 校验指针有效性
    assert(dest != NULL);
    assert(src != NULL);

    // 2. 保存目标字符串的起始地址（用于返回值）
    char* ret = dest;

    // 3. 复制字符串（包括结束符 '\0'）
    while ((*dest++ = *src++) != '\0')
    {
        ;  // 空循环体
    }
    // 4. 返回目标字符串起始地址
    return ret;
}

int main()
{
    char arr[] = "hello world";
    char arr2[20] = { 0 };
   char* p= my_strcpy(arr2, arr);
    printf("%s", p);
    return 0;
}