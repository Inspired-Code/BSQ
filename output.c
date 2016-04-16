#include "global.h"

void writer (char *str)
{
	int	cou;
	int	trig;
	
	cou = 0;
	trig = 0;
	while (str[cou])
	{
		if (cou >= ((root * y) + (x + y)) && trig != 1)
		{
			putchar (filler);
			if (((root * y) + (x + y) + sq_sz) < cou) 
				trig = 1;
		}
		else
		{
			putchar (str[cou]); 
			if (str[cou] == '\n' && trig == 1)
			{
				y++;
				trig = 0;
			}
		}	
	}
}