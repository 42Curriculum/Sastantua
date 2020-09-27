#include <stdio.h>
#include <unistd.h>

void	print(int levels, int size)
{
	int i;
	int current_size;

	i = 1;
	current_size = 1;
	while(i <= levels)
	{
		int n = 0;
		while (n++ < levels - i)
			write(1," ",1);
		int j = 0;
		while (++j <= current_size)
			write(1,"*", 1);
		current_size += 2;
		write(1,"\n",1);
		// (i == 1) ? (write(1,"\n", 1)) : ((write(1,"*\n", 2)));
		i++;
	}
}
int		get_size(int levels)
{
	int i;
	int total;

	i = 1;
	total = 0;
	while(i <= levels)
	{
		total += (i + 2);
		i++;
	}
	return total;
}

void	sastantua(int size)
{
	int levels;

	levels = get_size(size);
	// printf("Levels = %d\n", levels);
	print(levels, size);
}

int		main(int argc, char **argv)
{
	sastantua(2);
	return 0;
}
