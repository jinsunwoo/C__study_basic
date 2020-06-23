#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Up and Down, number guessing game

int main(void)
{
    srand(time(NULL));
    int ranNumber = rand() % 100 + 1; // 0 ~ 99 + 1 => 1 ~ 100
    printf("맞춰야 할 숫자: %d\n", ranNumber);
    int answer;
    int chance = 5;
    while (chance > 0)
    {
        printf("남은 기회 %d번 \n", chance--);
        printf("숫자를 맞춰 보세요 (1~100) : ");
        scanf("%d", &answer);

        if (answer > ranNumber)
        {
            printf("Down\n");
        }
        else if (answer < ranNumber)
        {
            printf("UP\n");
        }
        else if (answer == ranNumber)
        {
            printf("정답!\n");
            break;
        }
        if (chance == 0)
        {
            printf("5번 안에 숫자 맞추기 실패! 다시 도전해 보세요.\n");
            break;
        }
    }

    return 0;
}