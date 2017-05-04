void Blinker(int blinc, bool blinc_on)
{
	
	if (blinc_on)
	{
		
		if (blinc < 255)
		{
			
			blinc++;
			
		}
		else
		{
			
			blinc_on = false;
			
		}		
		
	}
	
	if (!blinc_on)
	{
		
		if (blinc > 0)
		{
			
			blinc--;
			
		}
		else
		{
			
			blinc_on = true;
			
			blinc++;
			
		}		
		
	}
	
}
