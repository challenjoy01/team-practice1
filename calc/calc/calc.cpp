#include <iostream>
#include "add.h"
#include "sub.h"
#include "mul.h"
using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    char oper = 'a';
    int add_ = add(1,4);
    int sub_ = sub(4, 1);
    int mul_ = mul(2, 4);
    printf("%d\n", add_);
    printf("%d\n", sub_);
    printf("%d\n", mul_);
    printf("|숫자 연산자 숫자| 입력. 공백이 꼭 있어야 합니다.\n");
    cin >> x >> oper >> y;

    if (oper == '+')
    {
        printf("%d + %d = %d", x, y, add(x, y));
    }
    else if (oper == '-')
    {
        printf("%d - %d = %d", x, y, sub(x, y));
    }
    else if (oper == '*')
    {
        printf("%d * %d = %d", x, y, mul(x, y));
    }

}
