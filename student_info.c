#include <stdio.h>

// Définition de la structure pour un étudiant
struct Etudiant
{
    char nom[50];
    int age;
    float moyenne;
};

int main()
{
    struct Etudiant etu;

    // Saisie des informations
    printf("Entrez le nom : ");
    scanf("%s", etu.nom); // Attention : ne lit pas les espaces

    printf("Entrez l'âge : ");
    scanf("%d", &etu.age);

    printf("Entrez la moyenne : ");
    scanf("%f", &etu.moyenne);

    // Affichage des informations
    printf("\nNom : %s\n", etu.nom);
    printf("Âge : %d\n", etu.age);
    printf("Moyenne : %.1f\n", etu.moyenne);

    return 0;
}
