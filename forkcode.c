#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

    child_pid = fork(); // Create a child process

    if (child_pid == 0) {
        // Child process
        printf("Child process is running\n");
    } else if (child_pid > 0) {
        // Parent process
        printf("Parent process is running\n");
    } else {
        // Error handling if fork fails
        perror("fork");
        return 1;
    }

    return 0;
}
