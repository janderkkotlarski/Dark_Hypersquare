void Color_Picker(int cube_identityy, int colorz[], int multikolor[])
{

	int whitee[3] = {255, 255, 255}, greyy[3] = {128, 128, 128}, blackk[3] = {0, 0, 0};
	int redd[3] = {255, 0, 0}, orangee[3] = {255, 128, 0}, yelloww[3] = {255, 255, 0};
	int greenn[3] = {0, 255, 0}, aquaa[3] = {0, 255, 255}, bluee[3] = {0, 0, 255}, violett[3] = {128, 0, 255};
	int darkk[3] = {24, 24, 24};
	
	if (cube_identityy <= 0)
	{
	
		Colorize(blackk, colorz);
	
	}
	
	if (cube_identityy == 1)
	{
	
		Colorize(greyy, colorz);
	
	}
	
	if (cube_identityy == 2)
	{
	
		Colorize(multikolor, colorz);
	
	}
	
	if (cube_identityy == 3)
	{
	
		Colorize(darkk, colorz);
	
	}
	
	if (cube_identityy == 4)
	{
	
		Colorize(violett, colorz);
	
	}
	
	if (cube_identityy == 5)
	{
	
		Colorize(redd, colorz);
	
	}
	
	if (cube_identityy == 6)
	{
	
		Colorize(yelloww, colorz);
	
	}
	
	if (cube_identityy == 7)
	{
	
		Colorize(greenn, colorz);
	
	}
	
	if (cube_identityy == 8)
	{
	
		Colorize(bluee, colorz);
	
	}
	
	if (cube_identityy == 9)
	{
	
		Colorize(orangee, colorz);
	
	}
	
	if (cube_identityy == 10)
	{
	
		Colorize(whitee, colorz);
	
	}
	
	if (cube_identityy == 11)
	{
	
		Colorize(aquaa, colorz);
	
	}
	
	if (cube_identityy > 11)
	{
	
		Colorize(blackk, colorz);
	
	}
	
	
}
