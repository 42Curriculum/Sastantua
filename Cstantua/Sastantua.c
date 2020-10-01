#include <unistd.h>
#include <stdio.h>

void	print(int amount, char c)
{
	while (amount > 0)
	{
		write(1, &c, 1);
		amount--;
	}
}

void	print_door(int size, int i)
{
	if ((i == (size / 2) + 1) && size >= 5)
	{
		print(size - 2, '|');
		print(1, '$');
		print(1, '|');
	}
	else
		print(size, '|');
}

void	print_last(int level, int height, int offset, int size)
{
	int i;
	int lower_odd;

	i = level + 2;
	lower_odd = (size % 2 == 0) ? (size - 1) : (size);
	while (i > 0)
	{
		print(height, ' ');
		write(1, "/",1);
		if (i <= lower_odd)
		{
			print((offset / 2) - (size / 2), '*');
			print_door(size, i);
			print((offset / 2) - (size / 2), '*');
		}
		else
			print(offset, '*');
		write(1, "\\",1);
		write(1, "\n",1);
		i--;
		height--;
		offset += 2;
	}
}

void	build(int height, int size)
{
	int i;
	int offset;
	int current_level;

	offset = 1;
	current_level = 1;
	while(current_level < size)
	{
		i = current_level + 2;
		while(i-- > 0)
		{
			print(height, ' ');
			write(1, "/",1);
			print(offset, '*');
			write(1, "\\",1);
			write(1, "\n",1);
			height--;
			offset += 2;
		}
		current_level++;
		height -= (current_level / 2) + (current_level % 2) + 1;
		offset += ((current_level / 2) + (current_level % 2) + 1) * 2;
	}
	print_last(current_level,height, offset, size);
}

void	get_size(int input, int *height)
{
	int i;
	int base_len;

	i = 0;
	while (i <= input)
	{
		*height += (i + 2) + 1;
		base_len +=  ((i - 1) / 2) + ((i - 1) % 2);
		i++;
	}
	*height += base_len - 2;
}

void	sastantua(int size)
{
	int height;

	height = 0;
	get_size(size, &height);
	build(height, size);
}
