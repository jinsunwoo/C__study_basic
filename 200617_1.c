#include <stdio.h>
/*
반복문
*/

int main(void)
{

    // ++
    int a = 10;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n\n", a);

    int b = 20;
    // ++b 는 해당 먼저 +1 하니까 해당 라인에서 b값 1 증가
    printf("b는 %d\n", ++b);
    // b++ 은 해당 라인에서는 b 인데 +1 한 값이 다음 라인 부터 적용
    printf("b는 %d\n", b++);
    printf("b는 %d\n\n", b);

    int i = 1;
    printf("Hello World, %d\n", i++);
    printf("Hello World, %d\n", i++);
    printf("Hello World, %d\n", i++);
    printf("Hello World, %d\n", i++);
    printf("Hello World, %d\n\n", i++);

    // 반복문 : for, while, do while

    // for (선언, 조건, 증감)
    for (int i = 1; i <= 5; i++)
    {
        printf("Hello World, %d\n", i);
    }
    printf("\n");

    // while (조건)
    int j = 1;
    while (j <= 5)
    {
        printf("Hello World, %d\n", j++);
    }
    printf("\n");

    // do {} while (조건)
    int k = 1;
    do
    {
        printf("Hello World, %d\n", k++);
    } while (k <= 5);
    printf("\n");

    // 이중 반복문
    for (int i = 1; i <= 3; i++)
    {
        printf("첫번째 반복문, %d\n", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("두번째 반복문, %d\n", j);
        }
    }
    printf("\n");

    // 구구단
    for (int i = 2; i <= 9; i++)
    {
        printf("%d단 계산\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    /* 
    별 피라미드 찍기
    *
    **
    ***
    ****
    *****

    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /* 
    별 피라미드 빈공간 포함해서 찍기
        *
       **
      ***
     ****
    *****

    */

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

