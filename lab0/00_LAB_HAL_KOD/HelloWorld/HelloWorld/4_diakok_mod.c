#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nev[50];
    int eletkor;
    float atlag;
} Diak;

void modosit_diak(Diak *diak)
{
    printf("Add meg az új életkort: ");
    scanf("%d", &diak->eletkor);
    printf("Add meg az új átlagot: ");
    scanf("%f", &diak->atlag);
}

int main()
{
    int diakszam;
    printf("Hány diákot szeretnél megadni? ");
    scanf("%d", &diakszam);

    Diak *diakok = (Diak *)malloc(diakszam * sizeof(Diak));
    if (diakok == NULL)
    {
        printf("Hiba a memória foglalásánál!\n");
        return 1;
    }

    for (int i = 0; i < diakszam; i++)
    {
        printf("Add meg az %d. diák nevét: ", i + 1);
        scanf(" %s", diakok[i].nev);
        printf("Add meg az életkorát: ");
        scanf("%d", &diakok[i].eletkor);
        printf("Add meg az átlagát: ");
        scanf("%f", &diakok[i].atlag);
    }

    int modosit_index;
    printf("Melyik diák?");
    scanf("%d", &modosit_index);
    if (modosit_index >= 1 && modosit_index <= diakszam)
    {
        modosit_diak(&diakok[modosit_index - 1]);
    }
    else
    {
        printf("Érvénytelen index!\n");
    }

    printf("Diákok listája:\n");
    for (int i = 0; i < diakszam; i++)
    {
        printf("%d. %s, %d éves, átlag: %.2f\n", i + 1, diakok[i].nev, diakok[i].eletkor, diakok[i].atlag);
    }

    free(diakok);
    return 0;
}
