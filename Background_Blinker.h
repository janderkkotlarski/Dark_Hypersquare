void Background_Blinker(bool& background_blink_on, int& background_blink, int max_transp)
{


	if (background_blink_on)
	{
		
		if (background_blink < max_transp)
		{
			
			background_blink = background_blink + 1;
			
			if (background_blink > max_transp)
			{
				
				 background_blink = max_transp;
				
			}
			
		}
		else
		{
			
			background_blink_on = false;
			
		}		
		
	}
	
	
	
	if (!background_blink_on)
	{
		
		if (background_blink > 0)
		{
			
			background_blink = background_blink - 1;
			
			if (background_blink < 0)
			{
				
				 background_blink = 0;
				
			}
			
		}
		else
		{
			
			background_blink_on = true;
			
			background_blink = background_blink + 1;
			
		}	
		
	}
		
}
