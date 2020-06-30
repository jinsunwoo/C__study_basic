#include <stdio.h>
// 문자 vs 문자열

int main(void)
{

    char c = 'J';
    printf("%c\n", c);

    // 문자열 끝에는 문자열 끝이라는 null 들어갈 공간 필요
    // 문자열이 6글자라면 + 1을 해줘서 마지막에 null 이 들어갈 공간을 만들어 줘야 함
    char str[6] = "coding";
    printf("%s\n", str);

    // 이게 맞는 방식
    char str1[7] = "coding";
    printf("%s\n", str1);

    // 자동으로 7자리 설정해줌. 사이즈 확인해보면 7 나옴.
    char str2[] = "coding";
    printf("%s\n", str2);
    printf("%lu\n", sizeof(str2));

    for (int i = 0; i < sizeof(str2); i++)
    {
        printf("%c\n", str2[i]);
    }

    // 영어 1글자 : 1 byte
    // 한글 1글자 : 3 byte (환경에 따라 2byte 인 경우도 있음)
    // char 크기 : 1byte
    // "프로그래밍" size: 5*3 + 1(null) = 16
    char kor[] = "프로그래밍";
    printf("%s\n", kor);
    printf("%lu\n", sizeof(kor));

    char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    printf("%s\n", c_array);

    // 이렇게 실제 사용하는 크기보다 더 크게 할당해도 상관 없고, \0 안써도 알아서 배정 해줌 (크기 +1 여유만 있으면 됨)
    char array_c[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    printf("%s\n", array_c);
    for (int i = 0; i < sizeof(array_c); i++)
    {
        printf("%c\n", array_c[i]);
    }
    // %d 로 출력하게 되면 ascii code 나옴
    char array_cc[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    for (int i = 0; i < sizeof(array_cc); i++)
    {
        printf("%d\n", array_cc[i]);
    }

    char name[256];
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    printf("%s\n", name);

    // ASCII code : ANSI (미국표준협회) 에서 제시한 표준 코드 체계.
    // 7bit. 총 128개 코드 (0 ~ 127)
    for (int i = 0; i < 128; i++)
    {
        printf("아스키코드 정수 %c : %d\n", i, i);
    }

    return 0;
}