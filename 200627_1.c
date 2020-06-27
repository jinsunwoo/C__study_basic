#include <stdio.h>

/*
* 함수 선언: main 위에 선언
* 함수 정의 main 아래에 정의
*/

void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main(void)
{

    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mult(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    return 0;
}

void p(int num)
{
    printf("num 은 %d 입니다\n", num);
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mult(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}