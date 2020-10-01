#include <unistd.h>

static void	print(int amount, char c)
{
	while (amount > 0)
	{
		write(1, &c, 1);
		amount--;
	}
}

// void	print_door(int size, int i)
// {
// 	if ((i == (size / 2) + 1) && i >= 5)
// 	{
// 		print(size - 2, '|');
// 		print(1, '$');
// 		print(1, '|');
// 	}
// 	else
// 		print(size, '|');
// }

// void	print_last(int level, int height, int offset, int size)
// {

// }

static void	build(int size, int len)
{
	int i;
	int height;
	int current_level;

	height = 0;
	current_level = size;
	while (current_level > 0)
	{
		i = current_level + 2;;
		while (i-- > 0)
		{
			print(height, ' ');
			print(len, '*');
			write(1, "\n",1);
			len -= 2;
			height++;
		}
		height += (current_level / 2) + (current_level % 2) + 1;
		len -= ((current_level / 2) + (current_level % 2) + 1) * 2;
		current_level--;
	}
}

#include <stdio.h>
void	rev_sastantua(int size)
{
	int height;
	int base_len;
	int i;

	i = 1;
	while (i <= size)
	{
		height += (i + 2) + 1;
		base_len +=  ((i - 1) / 2) + ((i - 1) % 2);
		i++;
	}
	base_len += height;
	build(size, base_len);
}
