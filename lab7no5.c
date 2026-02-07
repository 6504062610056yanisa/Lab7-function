#include <stdio.h>
long covert(long h, long m, long s)
{
    long totalhour = (h * 60) * 60;
    long totalmiute = (m * 60);
    long totalall = totalhour + totalmiute + s;
    printf("%ld", totalall);
}
int main()
{
    long hour, minute, second;
    scanf("%ld: %ld: %ld", &hour, &minute, &second);
    covert(hour, minute, second);
}