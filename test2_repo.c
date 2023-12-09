#include <stdio.h>

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
