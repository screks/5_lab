#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include "func.h"

void menu(int task_count)
{
	int i = 1;
	while (i <= task_count)
	{
		printf("%d. ������� %d\n", i, i);
		++i;
	}
	printf("%d. ����� \n", i);
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	_Bool close_flag = true;
	while (close_flag)
	{
		char str1[] = "Eduard Ivanov";
		char substr[] = "uard";
		char str3[] = " Sergeevich ";

		unsigned int len1 = 0, destlen = 0, index = 0;
		_Bool err;
		char* point, dest[100];

		menu(6);
		switch (getch())
		{
		case '1':
			system("cls");
			len1 = strlen(str1);
			printf("������ - %s. ����� ������ - %d \n", str1, len1);
			break;
		case '2':
			system("cls");
			point = find(str1, substr);
			point == 0 ? printf("������ - %s. ��������� - %s. \n��������� �� ������ � ������ \n", str1, substr) : printf("������ - %s. ��������� - %s. \n����� ��������� - %p \n", str1, substr, point);
			break;
		case '3':
			system("cls");
			printf("������ - %s. ��������� - %s \n", str1, substr);
			delete(str1, substr);
			printf("������ ����� �������� ��������� - %s \n", str1);
			break;
		case '4':
			system("cls");
			destlen = strlen(dest);
			strcpy(dest, destlen, str1);
			printf("������ - %s. ����� ����������� - %s \n", str1, dest);
			break;
		case '5':
			system("cls");
			destlen = strlen(dest);
			strcat(dest, destlen, str1, str3);
			printf("������ - %s. ������ ������ - %s. \n��������� ������������ - %s \n", str1, str3, dest);
			break;
		case '6':
			system("cls");
			destlen = strlen(dest);
			printf("������� ������ ��� ������� ");
			scanf_s("%d", &index);
			err = insert(str1, str3, index, dest, destlen);
			err ? printf("������ - %s. ������ ������ - %s. \n��������� ������� - %s \n", str1, str3, dest) : printf("������ \n");
			break;
		case '7':
			close_flag = false;
			break;


		}
	}
}
