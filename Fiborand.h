void Fiborand(int fib_var[], int max_var, int fractar)
{

	fib_var[2] = fib_var[1];
	fib_var[1] = fib_var[1] + fib_var[0];
	fib_var[0] = fib_var[2];
						
	if (fib_var[1] >= max_var)
	{
							
		fib_var[1] = fib_var[1] - fractar - 1;
							
	}
	
}
