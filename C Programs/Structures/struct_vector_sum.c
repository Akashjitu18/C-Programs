/* Program to add to vector quantities using Structures in C */

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector vsum(struct vector v1, struct vector v2);

int main()
{

    struct vector v1, v2, sum;
    v1.x = 44;
    v1.y = 33;
    v2.x = 33;
    v2.y = 44;
    sum = vsum(v1, v2);
    printf("%d\n%d", sum.x, sum.y);
    return 0;
}

struct vector vsum(struct vector v1, struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}