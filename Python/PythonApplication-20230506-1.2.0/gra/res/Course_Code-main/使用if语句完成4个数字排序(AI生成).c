
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Compare a with b, c, and d
    if (a > b && a > c && a > d) {
        printf("%d ", a);
        if (b > c && b > d) {
            printf("%d ", b);
            if (c > d) {
                printf("%d %d", c, d);
            } else {
                printf("%d %d", d, c);
            }
        } else if (c > b && c > d) {
            printf("%d ", c);
            if (b > d) {
                printf("%d %d", b, d);
            } else {
                printf("%d %d", d, b);
            }
        } else if (d > b && d > c) {
            printf("%d ", d);
            if (b > c) {
                printf("%d %d", b, c);
            } else {
                printf("%d %d", c, b);
            }
        }
    }
    // Compare b with a, c, and d
    else if (b > a && b > c && b > d) {
        printf("%d ", b);
        if (a > c && a > d) {
            printf("%d ", a);
            if (c > d) {
                printf("%d %d", c, d);
            } else {
                printf("%d %d", d, c);
            }
        } else if (c > a && c > d) {
            printf("%d ", c);
            if (a > d) {
                printf("%d %d", a, d);
            } else {
                printf("%d %d", d, a);
            }
        } else if (d > a && d > c) {
            printf("%d ", d);
            if (a > c) {
                printf("%d %d", a, c);
            } else {
                printf("%d %d", c, a);
            }
        }
    }
    // Compare c with a, b, and d
    else if (c > a && c > b && c > d) {
        printf("%d ", c);
        if (a > b && a > d) {
            printf("%d ", a);
            if (b > d) {
                printf("%d %d", b, d);
            } else {
                printf("%d %d", d, b);
            }
        } else if (b > a && b > d) {
            printf("%d ", b);
            if (a > d) {
                printf("%d %d", a, d);
            } else {
                printf("%d %d", d, a);
            }
        } else if (d > a && d > b) {
            printf("%d ", d);
            if (a > b) {
                printf("%d %d", a, b);
            } else {
                printf("%d %d", b, a);
            }
        }
    }
    // Compare d with a, b, and c
    else if (d > a && d > b && d > c) {
        printf("%d ", d);
        if (a > b && a > c) {
            printf("%d ", a);
            if (b > c) {
                printf("%d %d", b, c);
            } else {
                printf("%d %d", c, b);
            }
        } else if (b > a && b > c) {
            printf("%d ", b);
            if (a > c) {
                printf("%d %d", a, c);
            } else {
                printf("%d %d", c, a);
            }
        } else if (c > a && c > b) {
            printf("%d ", c);
            if (a > b) {
                printf("%d %d", a, b);
            } else {
                printf("%d %d", b, a);
            }
        }
    }
    return 0;
}