#include <stdio.h>

int main(char **av)
{
    int i = 0; /* Index pour parcourir av */

    while (av[i] != NULL) /* Tant qu'on n'a pas atteint la fin du tableau */
    {
        printf("%s\n", av[i]); /* Affiche chaque argument sur une ligne */
        i++;
    }

    return (0); /* Fin du programme */
}
