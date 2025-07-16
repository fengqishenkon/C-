#define _CRT_SECURE_NO_WARNINGS 

//£¡£¡£¡strncatµÄ¸´ÏÖ
#include<stdio.h>

void my_strncat(char* dest, char* src, size_t num)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (num > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		num--;
	}
	*dest = '\0';
}

int main()
{
	char arr[] = "hello world";
	char dest[20] = "aaaa";
	my_strncat(dest, arr, 7);
	printf("%s ", dest);
	return 0;
}