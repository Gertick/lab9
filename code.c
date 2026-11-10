#include <locale.h>
#include <stdio.h>

#define ROW 9
#define COL 9

void task1()
{
    int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1; col <= COL;col++)
            printf("%5d", col * row);
        printf("\n");
    }
    system("pause");

    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1; col <= row;col++)
            printf("%5d", col * row);
        printf("\n");
    }
    system("pause");

    printf("\n");
    for (row = 0; row <= 30; row++)
    {
        int start = 30 - row;
        for (int col = 0; col <= row; col++)
        {
            printf("%d ", start + col);
        }
        printf("\n");
    }

    system("pause");
}

void task2()
{
    char choice;

    do
    {
        printf("Введите число: ");

        int c,cc, cifra;
        scanf("%d", &c);
        cc = c;

        int scifra = 0;
        int schet = 0;
        int snechet = 0;
        int proizv = 1;
        int razr = 1;

        while (c > 0)
        {
            cifra = c % 10;
            scifra += cifra;

            if (razr % 2 == 0)
            {
                schet += cifra;
            }
            else
            {
                snechet += cifra;
            }

            c /= 10;
            razr++;
        }

        proizv = schet * snechet * scifra;

        printf("Произведение сумм цифр, четных и нечетных разрядов %d: %d\n",cc, proizv);

        printf("Продолжить? (Да - y, нет - n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice != 'n' && choice != 'N');
}

void task3()
{
    char sym;
    int h, a;

    printf("Введите символ для построения фигуры: ");
    scanf(" %c", &sym);

    printf("Введите высоту: ");
    scanf("%d", &h);

    printf("Введите верхнее основание: ");
    scanf("%d", &a);

    for (int i = 0; i < h; i++) 
    {
        // Вывод отступа слева
        for (int s = 0; s < h - 1 - i; s++) 
        {
            printf(" ");
        }

        // Общая ширина текущей строки
        int width = a + 2 * i;

        for (int j = 0; j < width; j++) 
        {
            if (i == 0 || i == h - 1 || j == 0 || j == width - 1) 
            {
                printf("%c", sym);
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
    
    printf("Задание 1\n");
    task1();

    printf("Задание 2\n");
    task2();

    printf("Задание 3\n");
    task3();
}