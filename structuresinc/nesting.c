#include <stdio.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int power;
    } pokemon;
    typedef struct legendarypokemon
    {
        pokemon normal;
        int extrapower;
    } legendarypokemon;
    legendarypokemon mewtwo;
    mewtwo.normal.attack = 500;
    mewtwo.extrapower = 400;
    printf("%d", mewtwo.normal.attack);
    return 0;
}