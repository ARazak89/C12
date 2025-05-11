#include <stdio.h>

// Définition de la structure pour un nombre complexe
struct Complex
{
    int reel;
    int imaginaire;
};

int main()
{
    struct Complex nombre;

    // Saisie des valeurs par l'utilisateur
    printf("Entrez la partie réelle : ");
    scanf("%d", &nombre.reel);

    printf("Entrez la partie imaginaire : ");
    scanf("%d", &nombre.imaginaire);

    // Affichage du nombre complexe
    printf("Nombre complexe : %d + %di\n", nombre.reel, nombre.imaginaire);
    printf("Partie réelle : %d\n", nombre.reel);
    printf("Partie imaginaire : %d\n", nombre.imaginaire);

    return 0;
}
