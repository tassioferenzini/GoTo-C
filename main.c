#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
 
    if (i) {
        printf("Goto error!\n");
        goto error;
    }
 
	// Esse código abaixo nunca será executado... GOTO deve ser usado com cuidado e sabedoria!
    printf("OK!\n");
 
    return 0;
 
error:
	printf("Error!\n");
    return 1;
}

