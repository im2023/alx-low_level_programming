#include <unistd.h>

/**
 * main - Entry point
 *
 * description: print a quote using write fonction
 *
 * return: 1 (not succes)
*/

int main(void)

{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\";

	write(1,quo,59);

	return (1);

}
