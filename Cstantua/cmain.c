#include <stdlib.h>
#include <unistd.h>

void	sastantua(int size);
void	rev_sastantua(int size);

int		main(int argc, char **argv)
{
	int size;

	if (argc == 2)
	{
		size = atoi(argv[1]);
		(size >= 0) ? (sastantua(size)) : (rev_sastantua(-size));
	}
	else
		write(1, "/n",1);
	return 0;
}
