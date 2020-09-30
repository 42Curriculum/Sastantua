#include <stdio.h>
#include <unistd.h>

void print(int amount, char c)
{
	while(amount > 0)
	{
		write(1, &c, 1);
		amount--;
	}
}

void	build(int height, int size, int len)
{
	int i;
	int offset;
	int current_level;

	offset = 1;
	current_level = 1;
	while(current_level <= size)
	{
		i = current_level + 2;
		while(i > 0)
		{
			print(height, ' ');
			write(1, "/",1);
			print(offset, '*');
			write(1, "\\",1);
			write(1, "\n",1);
			i--;
			height--;
			offset += 2;
		}
		current_level += 1;
		height -= (current_level / 2) + (current_level % 2) + 1;
		offset += ((current_level / 2) + (current_level % 2) + 1) * 2;
	}
}

void		get_size(int input, int *base_len, int *height)
{
	int i;

	i = 1;
	while(i <= input)
	{
		*height += (i + 2) + 1;
		*base_len +=  ((i - 1) / 2) + ((i - 1) % 2);
		i++;
	}
	*height -= 1;
	*base_len += (*height);
	printf("Amount %d char %d\n", *base_len, *height);
}

void	sastantua(int size)
{
	int height;
	int base_len;

	get_size(size, &height, &base_len);
	build(height, size, base_len);
	// printf("Levels = %d\n", base_len);
	// prints(levels, size);
}

int		main(int argc, char **argv)
{
	sastantua(4);
	return 0;
}
