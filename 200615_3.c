#include <stdio.h>
/*
float vs double : float 보다 더 많은 자릿수 표현할땐 double 사용함. 
상수: 태어난 해 처럼 바꿀 수 없는 값. 한번 정의하면 값을 바꿀 수 없다.
*/

int main(void)
{
    // output : 46.500000. 소숫점 조절하고 싶다면
    float f1 = 45.5f;
    printf("%f\n", f1);

    // f 앞에 "소숫점 ~ 까지 반올림한 값" 해당하는 .숫자 적기. output : 46.59
    float f2 = 45.589f;
    printf("%.2f\n", f2);

    // double 타입. output: 45.590
    double d = 45.5899;
    printf("%.3lf\n", d);

    const int birthYear = 2015;
    printf("Birth Year: %d\n", birthYear);
    // 위에서 birthYear 변수를 상수설정 했기 때문에 값을 바꿀 수 없음.
    /*
    birthYear = 2017;
    printf("Birth Year: %d\n", birthYear);
    */

    return 0;
}
