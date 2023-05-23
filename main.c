#include "main.h"

int main(int ac, char **argv){
	char *prompt = "(Sshell) $ ";
	char *lineptr;
	size_t n = 0;

	/* declaring void variables */
	(void)ac; (void)argv;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	free(lineptr);
	return (0);
}

