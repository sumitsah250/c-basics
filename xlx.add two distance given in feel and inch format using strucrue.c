#include <stdio.h>
int main()
{
    struct distance
    {
        int feet;
        int inch;

    } d1, d2;
    struct distance s;
    int t1, t2, t;

    printf("enter the first distance feet: and inch");
    scanf("%d%d", &d1.feet, &d1.inch);
    printf("enter the sccond distance feet: and inch:");
    scanf("%d%d", &d2.feet, &d2.inch);
    t1 = d1.feet * 12 + d1.inch;
    t2 = d2.feet * 12 + d2.inch;
    t = t1 + t2;
    s.feet = t / 12;
    s.inch = t % 12;
    printf("the total length is %d feet and %d inch", s.feet, s.inch);

    return 0;
}