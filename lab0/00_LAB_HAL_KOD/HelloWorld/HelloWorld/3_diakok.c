#include <stdio.h>
#include <stdlib.h>

// Diák struktúra definiálása
typedef struct Diak
{
    char nev[50];
    int eletkor;
    float atlag;
} Diak;

int main()
{
    int diakszam;
    printf("Diak szam");
    scanf("%d", &diakszam);

    Diak *diakok = (Diak *)malloc(diakszam * sizeof(Diak));

    for (int i = 0; i < diakszam; i++)
    {
        printf("Add meg az %d. diák nevét: ", i + 1);
        scanf(" %s", diakok[i].nev);
        printf("Add meg az életkorát: ");
        scanf("%d", &diakok[i].eletkor);
        printf("Add meg az átlagát: ");
        scanf("%f", &diakok[i].atlag);
    }

    printf("Diak lista:\n");
    for (int i = 0; i < diakszam; i++)
    {
        printf("%d. %s, %d éves, átlag: %.2f\n", i + 1, diakok[i].nev, diakok[i].eletkor, diakok[i].atlag);
    }

    free(diakok);
    return 0;
}
