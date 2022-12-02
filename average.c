#include<stdio.h>
#define ROWS 5
#define COLS 3

double get_col_avg(int m[][COLS], int c)
{
    int* p, *ep;
    double sum = 0.0;

    p = &m[0][c];
    ep = &m[ROWS][c];

    while(p < ep) {
        printf("%d\n", *p);
        sum += *p;
        p += 3;
    }
    return sum / ROWS;
}

int main()
{
    int m[ROWS][COLS];

    //init
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            m[i][j] = i + j;
        }
    }

    double avg = get_col_avg(m, 2);

    printf("%f\n", avg);
}