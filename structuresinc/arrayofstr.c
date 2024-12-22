#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    // array of 10 pokemon
    pokemon arr[4];
    arr[0].hp = 10;
    arr[0].speed = 500;
    arr[0].attack = 600;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "pikanchu");

    arr[1].hp = 10;
    arr[1].speed = 500;
    arr[1].attack = 600;
    arr[1].tier = 'A';
    strcpy(arr[1].name, "raichu");

    arr[2].hp = 10;
    arr[2].speed = 500;
    arr[2].attack = 600;
    arr[2].tier = 'A';
    strcpy(arr[2].name, "bulbasour");

    arr[3].hp = 10;
    arr[3].speed = 500;
    arr[3].attack = 600;
    arr[3].tier = 'A';
    strcpy(arr[3].name, "mewtwo");

    for (int i = 0; i < 3; i++)
    {
        printf("%s \n", arr[i].name);
        printf("%d \n", arr[i].attack);
        printf("%d \n", arr[i].hp);
        printf("%d \n", arr[i].speed);
        printf("%c \n", arr[i].tier);
        printf("\n");
    }
    return 0;
}