#include <stdio.h>
/*
printf & scanf examples 
*/

/*
(N/Solved)
왜 나머지 다 코멘트 아웃하면 문자 입력하는거 제대로되는데 다른거랑 같이 하면 이상하게 되지?
맨마지막 예제 에러 뜸
*/

int main(void)
{

    // 말그대로 print
    printf("%d x %d = %d\n", 10, 35, 10 * 35);

    // scanf : 키보드 입력 받아서 저장
    int number;
    printf("값을 입력하세요: ");
    // &변수 로 써야 여기에 입력값이 담긴다 함
    scanf("%d", &number);
    printf("입력값: %d\n ", number);

    int one, two, three;
    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값: %d\n", one);
    printf("두번째 값: %d\n", two);
    printf("세번째 값: %d\n", three);

    // char 에서도 scanf 사용할때 변수 앞에 & 붙여줘야 함
    char c;
    printf("문자를 입력하세요: ");
    scanf("%c", &c);
    printf("입력한 문자: %c\n", c);

    // char c = 'A'; 이런식으러 설정 함 (same with java)
    char str1[256];
    char str2[256];
    printf("Type two words and put space in between: ");
    scanf("%s %s", str1, str2);
    printf("%s and %s\n", str1, str2);
    // check memory size of 256 which will be 256. lu because 256 here is unsigned long type
    printf("%lu\n", sizeof(str1));

    return 0;

    /*
    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);
    */
}