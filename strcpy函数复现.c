#define _CRT_SECURE_NO_WARNINGS

//***ģ��ʵ�ֿ⺯��strcpy

#include <assert.h>  // ���ڲ���У��
#include<stdio.h>

char* my_strcpy(char* dest, const char* src) 
{
    // 1. У��ָ����Ч��
    assert(dest != NULL);
    assert(src != NULL);

    // 2. ����Ŀ���ַ�������ʼ��ַ�����ڷ���ֵ��
    char* ret = dest;

    // 3. �����ַ��������������� '\0'��
    while ((*dest++ = *src++) != '\0')
    {
        ;  // ��ѭ����
    }
    // 4. ����Ŀ���ַ�����ʼ��ַ
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