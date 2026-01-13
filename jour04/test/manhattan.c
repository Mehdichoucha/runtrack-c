#include <stdio.h>
#include "manhattan.h"

int manhattan(Point a, Point b) {
    printf("%d %d %d %d", a.x, a.y, b.x, b.y);
    return 0;
}

int main(void) {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    int a;
    printf("%d ", a);
    manhattan(p1, p2);

    return 0;
}