#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = atoi(argv[argc - 1]);
	j = atoi(argv[argc - 2]);

	if (argc == 3)
	{
		printf("%d\n", i * j);
		return (0);
	}

	printf("Error\n");
	return (1);
}
