#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct circle {
    int r;
    int x;
    int y;
};

int circle_comp(struct circle r1, struct circle r2)
{
    return ((r1.r == r2.r) && (r1.x == r2.x) && (r1.y ==r2.y)) ? 1 : 0;
}

void print_equal(struct circle r1, struct circle r2, int (*func)(struct circle, struct circle))
{
    if(func(r1, r2))
        printf("Equal\n");
    else
        printf("Not equal\n");
}

int main(void)
{
    
    struct circle r1 = {20, 0, 0};
    struct circle r2 = {20, 0, 0};

    print_equal(r1, r2, circle_comp);

    return 0;
}