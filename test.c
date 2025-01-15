#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main() {
    char *argv[] = {"/bin/ls", "-l", NULL};        // Arguments pour le programme
    char *envp[] = {"PATH=/bin:/usr/bin", NULL};  // Variables d'environnement

    if (execve("/bin/ls", argv, envp) == -1) {
        perror("execve"); // Affiche une erreur si execve échoue
    }

    return 0; // Cette ligne ne sera atteinte que si execve échoue
}
