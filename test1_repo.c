#include <stdio.h>

// Recherche de 3 Max dans un tableau
void Recherche3Max(int T[], int size)
{
    // Initiasation of container of 3 maxes
    int Max1 = T[0], Max2 = T[0], Max3 = T[0];
    // do the loop
    for (int i = 1; i < size; i++)
    {
        // Glisser le maximum
        if (T[i] > Max1)
        {
            Max3 = Max2;
            Max2 = Max1;
            Max1 = T[i];
        }
        else if (T[i] > Max2)
        {
            Max3 = Max2;
            Max2 = T[i];
        }
        else if (T[i] > Max3)
        {
            Max3 = T[i];
        }
    }
    // Afficher les 3 Maxes dans ce tableau
    printf("Max1: %d <Max2: %d <Max3: %d ", Max1, Max2, Max3);
}

void main()
{
    int n = 6;
    int tab[] = {2, 3, -6, 5, 7, 9};
    // appel de fonction
    Recherche3Max(tab, n);
}
