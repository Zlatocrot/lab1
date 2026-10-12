#include <stdio.h>
#include <locale.h>
void prac1();
void prac2();
void prac3();
void prac4();
void name();
void date();
void dz1();
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	printf("Практика 1\n");
	printf("\nЗадание 1\n");
	prac1();
	printf("\nЗадание 2\n");
	prac2();
	printf("\nЗадание 3\n");
	prac3();
	printf("\nЗадание 4\n");
	prac4();
	printf("\nДомашнее задание\n");
	dz1();
	return 0;
}
void prac1()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("Нажмите Enter для продолжения...");

	getchar();

	puts("Продолжение программы");

}
void prac2()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("Моя программа,");

	getchar();

	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*    Выполнила Мажирина Е.А.              *");
	puts("*                                         *");
	puts("*******************************************");

}
void prac3()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("Дата рождения");

	getchar();

	puts(" . __   __   __   __  __");
	puts("/| __| |  | |__| |  ||__|");
	puts(" | __| |__| |__| |__||__|");

}
void prac4()
{
	name();
	date();
}

void name()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("Моя программа,");
	getchar();
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*    Выполнила Мажирина Е.А.              *");
	puts("*                                         *");
	puts("*******************************************");


}

void date()
{
	puts(" . __   __   __   __  __");
	puts("/| __| |  | |__| |  ||__|");
	puts(" | __| |__| |__| |__||__|");
}
void dz1()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("домик: ");

	getchar();
	puts("     /\\     ");
	puts("    /  \\    ");
	puts("   /____\\   ");
	puts("   |    |   ");
	puts("   |    |   ");
	puts("   |____|   ");
}
