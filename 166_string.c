// wap to count and print only vovels of given strin..
#include <stdio.h>
void main()
{
    char name[] = "chetani patelu";
    int i, c = 0;
    printf("string : %s\n", name);
    printf("vovel in string : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'o' || name[i] == 'i' || name[i] == 'u')
        {
            printf("%c ", name[i]);
            c++; // 3
        }
    }
    printf("\ntotal vovle count : %d", c);
}