#include <stdio.h>

/*
피라미드 쌓기
    *  
   ***
  *****
 *******
*********

*/

int main(void)
{
    int floor;
    printf("피라미드를 몇층으로 쌓을지 입력하세요: ");
    scanf("%d", &floor);

    for (int i = 0; i < floor; i++)
    {
        for (int j = 0; j < floor - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 2 * i + 1; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    /* 
    위에 피라미드 다른 예시 답안:

    for (int i=0;i < floor; i++) {
        for (int j=i; j < floor -1; j++) {
            printf(" ");
        }
        for (int k=0; k < 2*i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    */

    return 0;
}