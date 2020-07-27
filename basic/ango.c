/*XOR binary mode
A>ango>a.txt>b.txt*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main (void) {
    int c, key = 0x07;

    setmode(fileno(stdin), O_BINARY);
    setmode(fileno(stdout), O_BINARY);
    
    while ((c = getchar()) != EOF) {
        putchar(c ^ key);
    }
}
