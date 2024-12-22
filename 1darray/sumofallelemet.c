#include <stdio.h>
// if marks < 35 print roll no(index)
int main()
{
    int sum = 0;
    int marks[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i = 0; i <= 9; i++)
    {
        sum = sum + marks[i];
    }
    printf("%d", sum);
    return 0;
}