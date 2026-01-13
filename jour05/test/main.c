#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "music.h"

// cd /c/Users/linda/OneDrive/Bureau/runtrack-c/jour05/test

int open_file(void) {
    char *path = "raw.txt";
    int fd = open(path, O_RDONLY);
    if (fd == -1){
        printf("erreur de %s", path);
        return -1;
    }
    return fd;
}

void read_file(int fd, char *buf) {
    char buf[1024 * 4] = {0};
    int ret = read(fd, buf, 1024 * 4);
    if (ret == -1) {
        printf("erreur lecture fichier de %d\n", fd);
        return NULL;
    }
    printf("octet lu : %d\n", ret);
    printf("%d\n", buf);
    return buf;
    
}

void parse_content(char* str){
    char **lines = strsplit(str);
    for (int i = 0 ; i < strken(str):i++)
}

int main (void) {
    Album a = {"Master of Puppets", "Mettalica", 1986};
    int fd = open("./raw.txt", O_RDONLY);
    printf("%d\n", fd);
    char *content = read_file();
    printf("%s\n", buf);

    parse_content(buf)

    return (0);
}
