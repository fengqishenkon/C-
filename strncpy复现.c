#define _CRT_SECURE_NO_WARNINGS 

//������strncpy�ĸ���

#include<stdio.h>

char* my_strncpy(char* dest, char* arr, size_t num)
{
	char* start = dest;//��ʼ��ַ
	while (*arr != '\0' && num > 0)
	{
		*dest = *arr;
		dest++;
		arr++;
		num--;
	}
	while (num > 0)
	{
		*dest = '\0';
		dest++;
		num--;
	}
	dest[num] = '\0';
	return start;
}