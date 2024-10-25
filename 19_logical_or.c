// logical or opearator
#include <stdio.h>
void main()
{
    int ans1, ans2, ans3;
    ans1 = 12 > 55 || 56 < 4;
    ans2 = 12 == 8 || 45 < 7 || 34 != 90;
    ans3 = !(12 > 55 || 56 < 4);
    printf("ans1 = %d\n", ans1);
    printf("ans2 = %d\n", ans2);
    printf("ans3 = %d\n", ans3);
}