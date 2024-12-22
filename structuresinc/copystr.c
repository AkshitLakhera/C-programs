#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct copystr
    {
        int hp;
        int power;
        int attack;
    } copystr;
    copystr a, b;
    a.attack = 100;
    a.power = 200;
    a.hp = 400;
    b = a;
    printf("%d", b.attack);
    return 0;
}