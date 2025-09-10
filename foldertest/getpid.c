#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t parent_pid;/*sa Déclare une variable pour stocker l%u\ne PID du parent */

    parent_pid = getppid();/* Appelle la fonction getppid pour obtenir le PPID */
    printf("Parent PID: %u\n", parent_pid);/* Affiche le PPID du processus parent */

    return (0);/* Indique que le programme s'est bien terminé */
}
