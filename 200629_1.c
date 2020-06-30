#include <stdio.h>
// 배열
int main(void)
{
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0; i < 3; i++)
    {
        printf("지하철 %d호차에 %d명이 타고 있습니다\n", i + 1, subway_array[i]);
    }

    printf("\n\n\n");

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n\n\n");

    // 어레이를 꼭 초기화 해줘야 한다는 거. 그렇지 않으면 이렇게 (의미 없는) dummy 값 나옴.
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }

    int arra[] = {1, 2}; // int arra[2]; 라고 선언한 것과 동일

    printf("\n\n\n");

    // float 로도 배열 만들 수 있음. 할당 안된 값들은 0.00으로 대체됨. 정수형이라면 마찬가지로 0으로 대체됨.
    float array_f[5] = {1.0f, 2.0f, 3.0f};
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", array_f[i]);
    }

    return 0;
}