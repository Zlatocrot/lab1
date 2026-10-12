

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>




void name()
{
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
void dz()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	puts("     /\\     ");
	puts("    /  \\    ");
	puts("   /____\\   ");
	puts("   |    |   ");
	puts("   |    |   ");
	puts("   |____|   ");
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    name();
	date();
	dz();

    system("pause");

    return 0;
}