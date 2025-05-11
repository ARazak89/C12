#include <stdio.h>

// Définition de la structure pour une date
struct Date
{
    int jour;
    int mois;
    int annee;
};

int main()
{
    struct Date date;

    // Saisie de la date
    printf("Entrez le jour : ");
    scanf("%d", &date.jour);

    printf("Entrez le mois : ");
    scanf("%d", &date.mois);

    printf("Entrez l'année : ");
    scanf("%d", &date.annee);

    // Affichage de la date
    printf("Date : %02d/%02d/%d\n", date.jour, date.mois, date.annee);

    return 0;
}
