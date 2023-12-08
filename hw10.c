#include <stdio.h>

typedef struct 
{
    char name[50];
    char country[50];
    int population;
} City;

int main() 
{
    City cities[3];

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("Name> ");
        scanf("%49s", cities[i].name);
        printf("Country> ");
        scanf("%49s", cities[i].country);
        printf("Population > ");
        scanf("%d", &cities[i].population);
    }

    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
