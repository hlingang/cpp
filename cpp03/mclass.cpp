#include "mclass.h"
#include <stdio.h>

void MClass::publicMethod()
{
    printf("public method\n");
}

void MClass::privateMethod()
{
    printf("private method\n");
}

void MClass::publicStaticMethod()
{
    printf("publicStaticMethod\n");
}

void MClass::privateStaticMethod()
{
    printf("privateStaticMethod\n");
}
int MClass::publicStaticValue = 0;
int MClass::privateStaticValue = 0;