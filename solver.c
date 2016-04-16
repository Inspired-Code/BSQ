#include "global.h"

void translater (char *str)
{
	int	cou;
	int	convertor;
	cou = 0;
	root = 0;
	convertor = 0;
	while (covertor == 0)
	{
		if ((covertor = atoi(str[cou]) == 0)
			convertor = 1;
			break;
		root *= 10;
		root += atoi(str[cou]);
		cou++;				
	}
	space = str[cou];
	obstacle = str[cou + 1];
	filler = str[cou + 2];
}

void bsqf (int entry)
{
	if (entry > sq_sz)
	{
		sq_sz = entry;
		sq_posx = x;
		sq_posy = y;
	}
}
	

void saver (int entry)
{
	int	grid[1000][1000];
	grid[y][x] = entry;
	if (y == 0)
	{
		if (x == 0)
			left = 0;
		else 
			left = grid[y][x - 1];
	}
	else if (x == 0)
	{
		left = 0;
		tolef = 0;
		top = grid[y - 1][x];
	}
	else
	{
		left = grid[y][x - 1];
		top = grid[y - 1][x];
		tolef = grid[y - 1][x - 1];
	}
	bsqf (entry);
}	

	
void calculator (char value)
{
	if (value == obstacle)
		saver (0);
	else
	{
		if (top <= left && top <= tolef)
			saver (top + 1);
		else if (left <= top && left <= tolef)
			saver (left + 1);
		else
			saver (tolef + 1);
	}
}	

void solver (char *str)
{
	int	cou;
	y = 0;
	x = 0;
	top = 0;
	left = 0;
	tolef = 0;
	cou = 0;
	translater (str);
	while(str[cou])
	{
		if (str[cou] == '\n')
			y++;
			x = 0;
		else
			calculator (str[cou]);
		cou++;
		x++;
	}
}	