void Fiboinit(int fib_var[], int max_var, int fractar)
{

	std::random_device generator;
	
	std::uniform_int_distribution<int> distribution(1, fractar);
	
	int	frac_var = distribution(generator);
	
	int ran_var = frac_var;
	
	if (ran_var <= 0)
	{
		
		ran_var = 1;
		
	}
	
	if (ran_var >= (fractar + 1))
	{
		
		ran_var = fractar;
		
	}
	
	fib_var[0] = ran_var;
	
	
	frac_var = distribution(generator);
	
	ran_var = frac_var;
	
	if (ran_var <= 0)
	{
		
		ran_var = 1;
		
	}
	
	if (ran_var >= (fractar + 1))
	{
		
		ran_var = fractar;
		
	}
	
	
	fib_var[1] = ran_var;
	fib_var[2] = 0;
		
}
