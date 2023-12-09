#include <stdio.h>

/*
// Recherche de 3 Max dans un tableau
void Recherche3Max(int T[], int size){
    // Initiasation of container of 3 maxes
    int Max1=T[0], Max2= T[0], Max3=T[0];
    // do the loop
    for(int i=1; i<size; i++){
        // Glisser le maximum
        if (T[i]>Max1){
            Max3=Max2;
            Max2=Max1;
            Max1=T[i];
        }
        else if (T[i]>Max2){
            Max3=Max2;
            Max2=T[i];
        }
        else if (T[i]>Max3){
            Max3=T[i];
        }

    }
    // Afficher les 3 Maxes dans ce tableau
    printf("Max1: %d <Max2: %d <Max3: %d ", Max1, Max2, Max3);


}

void main (){
    int n=6;
    int tab[]={2,3,-6,5,7,9};
    // appel de fonction
    Recherche3Max(tab, n);
}
*/

// determiner la 1er occurence d'un nombre donnee

int RechFirstOccurence(int T[], int size, int x)
{
    // la declaration des variables
    int left = 0, right = size - 1;
    int mil, result = -1;

    // faire le boucle
    while (left <= right)
    {
        mil = (left + right) / 2;

        if (T[mil] == x)
        {
            result = mil;
            right = mil - 1;
        }
        else if (T[mil] < x)
        {
            left = mil + 1;
        }
        else
        {
            right = mil - 1;
        }
    }
    return result;
}

void main()
{
    int len = 8;
    int tab[] = {1, 2, 2, 3, 3, 3, 5, 6};

    // appel du fonction RechFirstOccurence
    int pos = RechFirstOccurence(tab, len, 3);

    // Faire l'affichage
    printf("la 1er position est: %d", pos);
}
