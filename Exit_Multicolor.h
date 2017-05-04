void Exit_Multicolor(int kolor[])
{
	
	int full_int = 255, gate_delta = 5;
	
	if ((kolor[0] == full_int) && (kolor[1] > 0))
	{
			
		kolor[1] = kolor[1] - gate_delta;
		
		if (kolor[1] < 0)
		{
			
			kolor[1] = 0;
			
		}
			
	}
		
	if ((kolor[0] == full_int) && (kolor[1] == 0) && (kolor[2] < full_int))
	{
	
		kolor[2] = kolor[2] + gate_delta;
		
		if (kolor[2] > full_int)
		{
			
			kolor[2] = full_int;
			
		}
	
	}
	
	if ((kolor[2] == full_int) && (kolor[0] > 0))
	{
			
		kolor[0] = kolor[0] - gate_delta;
		
		if (kolor[0] < 0)
		{
			
			kolor[0] = 0;
			
		}
			
	}
		
	if ((kolor[2] == full_int) && (kolor[0] == 0) && (kolor[1] < full_int))
	{
	
		kolor[1] = kolor[1] + gate_delta;
		
		if (kolor[1] > full_int)
		{
			
			kolor[1] = full_int;
			
		}
			
	}
		
	if ((kolor[1] == full_int) && (kolor[2] > 0))
	{
			
		kolor[2] = kolor[2] - gate_delta;
		
		if (kolor[2] < 0)
		{
			
			kolor[2] = 0;
			
		}
			
	}
		
	if ((kolor[1] == full_int) && (kolor[2] == 0) && (kolor[0] < full_int))
	{
			
		kolor[0] = kolor[0] + gate_delta;
		
		if (kolor[0] > full_int)
		{
			
			kolor[0] = full_int;
			
		}
				
	}
	
	
	
}
