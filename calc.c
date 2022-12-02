#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}
    
int main(int argc, char* argv[])
{
    int x, y, choice, result;

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    choice = atoi(argv[3]);

    int (*pf[4])(int, int) = {add, sub, mul, divide};

    result = pf[choice](x, y);
    printf("%d\n", result);

    return 0;

}