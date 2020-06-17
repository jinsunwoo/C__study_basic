#include <stdio.h>
// 프로젝트 1
// 경찰관이 범죄자의 정보를 입수 (조서작성)
// 이름, 나이, 몸무게, 키, 범죄명

int main(void)
{
    char name[256];
    printf("이름이 뭐에요? ");
    scanf("%s", name);

    int age;
    printf("몇 살 이에요? ");
    scanf("%d", &age);

    float weight;
    printf("몇 Kg 이에요? ");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm 이에요? ");
    scanf("%lf", &height);

    char crimeTitle[256];
    printf("무슨 범죄를 저질렀나요? ");
    scanf("%s", crimeTitle);

    printf("\n\n---범죄자 정보---\n\n");
    printf("이름   : %s\n", name);
    printf("나이   : %d 세\n", age);
    printf("몸무게   : %.1f kg\n", weight);
    printf("키   : %.1lf cm\n", height);
    printf("범죄명   : %s\n", crimeTitle);

    return 0;
}