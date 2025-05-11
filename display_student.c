#include <stdio.h>

// Définition de la structure pour un étudiant
struct Etudiant
{
    char nom[50];
    int age;
    float moyenne;
};

// Fonction pour afficher les informations de l'étudiant
void afficherEtudiant(struct Etudiant e)
{
    printf("Nom : %s\n", e.nom);
    printf("Âge : %d\n", e.age);
    printf("Moyenne : %.1f\n", e.moyenne);
}

int main()
{
    struct Etudiant etu;

    // Saisie des informations de l'étudiant
    printf("Entrez le nom : ");
    scanf("%s", etu.nom); // Note : ne lit pas les espaces

    printf("Entrez l'âge : ");
    scanf("%d", &etu.age);

    printf("Entrez la moyenne : ");
    scanf("%f", &etu.moyenne);

    // Appel de la fonction d'affichage
    afficherEtudiant(etu);

    return 0;
}
