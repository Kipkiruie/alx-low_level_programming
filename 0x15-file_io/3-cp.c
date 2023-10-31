#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message) {
    dprintf(2, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_source = open(file_from, O_RDONLY);
    if (fd_source == -1) {
        error_exit(98, "Can't read from file");
    }

    int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
    if (fd_dest == -1) {
        error_exit(99, "Can't write to file");
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    while ((bytes_read = read(fd_source, buffer, sizeof(buffer))) > 0) {
        if (write(fd_dest, buffer, bytes_read) == -1) {
            error_exit(99, "Can't write to file");
        }
    }

    if (bytes_read == -1) {
        error_exit(99, "Can't write to file");
    }

    if (close(fd_source) == -1) {
        error_exit(100, "Can't close fd");
    }

    if (close(fd_dest) == -1) {
        error_exit(100, "Can't close fd");
    }

    return 0;
}
