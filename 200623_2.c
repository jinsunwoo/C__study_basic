#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));  // 임의의 랜덤 숫자
    int i = rand() % 3; // 0 ~ 2 반환
    if (i == 0)
    {
        printf("가위\n");
    }
    else if (i == 1)
    {
        printf("바위\n");
    }
    else if (i == 2)
    {
        printf("보\n");
    }
    else
    {
        printf("셋다 해당안됨\n");
    }

    printf("\n-------------------------------\n\n");

    /*
    switch (값) 
    {
    case 가위값: // 값이 가위에 해당하는 값인 경우 
    case 바위값: // 값이 바위에 해당하는 값인 경우
    case 보값: // 값이 보에 해당하는 값인 경우
    default: // 값이 셋 모두 해당되지 않는 경우
    }
    */

    // 여기서 switch 특징이 break 안 걸어주면 ex) j=0 나와서 가위 걸리면, 그 아래 다 같이 나옴. 가위 바위 보 셋다 해당 안됨.
    // break 걸어서 switch 문 탈출해야 함.

    int j = 0;
    switch (j)
    {
    case 0:
        printf("가위\n");
        break;
    case 1:
        printf("바위\n");
        break;
    case 2:
        printf("보\n");
        break;
    default:
        printf("셋다 해당 안됨\n");
    }

    printf("\n-------------------------------\n\n");

    // 초, 중, 고 나이대별로 나누기 (switch 이용)
    // 모든 case 다 printf, break 할 필요 없이 이렇게 쓰는게 더 간결
    int age = 28;
    switch (age)
    {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        printf("초등학생\n");
        break;
    case 14:
    case 15:
    case 16:
        printf("중학생\n");
        break;
    case 17:
    case 18:
    case 19:
        printf("고등학생\n");
        break;
    default:
        printf("학생 아님\n");
        break;
    }
    return 0;
}