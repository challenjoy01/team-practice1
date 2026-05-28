#include <iostream>
#include "add.h"
#include "sub.h"
#include "mul.h"

int main()
{

    int add_ = add(1,4);
    int sub_ = sub(4, 1);
    int mul_ = mul(2, 4);
    printf("%d", add_);
    printf("%d", sub_);
    printf("%d", mul_);

}
