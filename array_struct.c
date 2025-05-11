#include <stdio.h>
#include <stdlib.h>

// Définition de la structure pour un étudiant
struct Etudiant
{
    char nom[50];
    int age;
    float moyenne;
};

int main()
{
    int n;

    // Demander le nombre d'étudiants
    printf("Combien d'étudiants voulez-vous ajouter ? ");
    scanf("%d", &n);

    // Allocation dynamique d'un tableau d'étudiants
    struct Etudiant etudiants[n];

    // Saisie des informations pour chaque étudiant
    for (int i = 0; i < n; i++)
    {
        printf("\nÉtudiant %d\n", i + 1);

        printf("Nom : ");
        scanf("%s", etudiants[i].nom); // Ne lit pas les espaces

        printf("Âge : ");
        scanf("%d", &etudiants[i].age);

        printf("Moyenne : ");
        scanf("%f", &etudiants[i].moyenne);
    }

    // Affichage des informations
    printf("\n--- Informations des étudiants ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Étudiant %d : %s - %d ans - Moyenne : %.1f\n",
               i + 1, etudiants[i].nom, etudiants[i].age, etudiants[i].moyenne);
    }

    return 0;
}
