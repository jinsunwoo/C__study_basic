#include <stdio.h>
// 함수 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate);

int main(void)
{
    // function // 계산기
    int num = 2;
    p(num);

    num = num + 3;
    p(num);

    num -= 1;
    p(num);

    num *= 3;
    p(num);

    num /= 6;
    p(num);

    function_without_return();

    int ret = function_with_return();
    p(ret);

    function_without_params();

    function_with_params(1, 2, 3);

    int left = apple(5, 2);
    printf("사과 5개 중에 2개 먹으면 %d 개 남음.\n", left);

    printf("사과 %d개 중에 %d개 먹으면 %d 개 남음.\n", 8, 3, apple(8, 3));

    return 0;
}

// 함수 정의
void p(int num)
{
    printf("num 은 %d 입니다\n", num);
}

/*
void 함수이름(int num1, int num2, char c, float f) {
}
*/

// 반환값이 없는 함수
void function_without_return()
{
    printf("반환값이 없는 함수입니다\n");
}

// 반환값이 있는 함수
int function_with_return()
{
    printf("반환값이 있는 함수입니다\n");
    return 10;
}

void function_without_params()
{
    printf("parameter가 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
    printf("parameter가 있는 함수입니다. parameter 로 전달받은 값은 %d, %d, %d 입니다.\n",
           num1, num2, num3);
}

int apple(int total, int ate)
{
    return total - ate;
}
