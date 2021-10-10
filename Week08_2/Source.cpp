#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int count = 0;
	char str[50], * p;
	p = str;
	printf("input : ");
	scanf("%s", str);

	while (*p != '\0') {
		count++;
		p++;
	}

	printf("output(Karaca) : ");

	for (int i = count - 1; i >= 0; i--) {
		if (str[i] == 'a') {
			printf("%c", str[i] - 49);
		}
		else if (str[i] == 'e') {
			printf("%c", str[i] - 52);
		}
		else if (str[i] == 'i') {
			printf("%c", str[i] - 55);
		}
		else if (str[i] == 'o') {
			printf("%c", str[i] - 60);
		}
		else if (str[i] == 'u') {
			printf("%c", str[i] - 65);
		}
		else { printf("%c", str[i]); }
	}
	printf("aca");

	return 0;
}