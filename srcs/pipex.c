#include <stdio.h>
#include <unistd.h> // Pour fork()

int main() {
    int pid = fork(); // Crée un nouveau processus

    if (pid == -1) {
        perror("Erreur lors de la création du processus");
        return 1;
    }

    if (pid == 0) {
        // Code du processus enfant
        printf("Je suis le processus enfant ! Mon PID est %d\n", getpid());
    } else {
        // Code du processus parent
        printf("Je suis le processus parent ! Mon PID est %d, et mon enfant a le PID %d\n", getpid(), pid);
    }

    return 0;
}
