
#define _CRT_SECURE_NO_WARNINGS
//***strlen函数的实现

#include<stdio.h>

size_t my_strlen_ptr(const char* str)
{
	if (str == NULL)
	{
		return 0;
	}

	 const char* star = str;
	 while (*str != '\0')
	 {
		 str++;
	 }
	 return (size_t)(str - star);
}

int main()
{
	char arr[] = "hello world";
	size_t num=my_strlen_ptr(arr);
	printf("%zu", num);
	return 0;
}
