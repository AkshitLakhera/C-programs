#include <stdio.h>
#include <strings.h>
int main()
{
    typedef struct cricketstructure
    {
        int age;
        int matches;
        char name[30];
        float avgruns;
    } cricstr;
    // now creating array of structure;
    cricstr arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter player %d details:\n", i + 1);

        // Input name (no spaces allowed in name here)
        printf("Name: ");
        scanf("%[^\n]s", arr[i].name); // Use %s for strings

        // Input age
        printf("Age: ");
        scanf("%d", &arr[i].age);

        // Input matches
        printf("Matches: ");
        scanf("%d", &arr[i].matches);

        // Input average runs
        printf("Average Runs: ");
        scanf("%f", &arr[i].avgruns);

        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        puts(arr[i].name);
        printf("%d \n", arr[i].age);
        printf("%d \n", arr[i].matches);
        printf("%f \n", arr[i].avgruns);

        printf("\n");
    }
    return 0;
}