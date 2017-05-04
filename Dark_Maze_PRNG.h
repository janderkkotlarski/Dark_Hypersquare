void Dark_Maze_PRNG(int square_matrix[][201], int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
int fib_val[], int max_val, int fractal, double wall_frac, double dark_frac, double exit_frac,
double candy_frac, double red_candy_frac, double yellow_candy_frac, double green_candy_frac, double blue_candy_frac)
{


	for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
	{
	
		for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
		{
		
			square_matrix[a_sub + max_level][b_sub + max_level] = 0;
		
			if (((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 1) && pillars_exist &&
				(((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
				!half_gone) &&
				pillars_exist)
			{
			
				square_matrix[a_sub + max_level][b_sub + max_level] = 1;
										
			}
		
			if (((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 0) &&
				((a_sub != 0) || (b_sub != 0)))
			{
				
				if ((1.0*fib_val[0]) < candy_frac*(1.0*max_val))
				{
					
					if ((1.0*fib_val[0]) < red_candy_frac*(1.0*max_val))
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 5;
						
					}
					
					if (((1.0*fib_val[0]) > (red_candy_frac)*(1.0*max_val)) &&
						((1.0*fib_val[0]) < (red_candy_frac + yellow_candy_frac)*(1.0*max_val)))
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 6;
						
					}
					
					if (((1.0*fib_val[0]) > (red_candy_frac + yellow_candy_frac)*(1.0*max_val)) &&
						((1.0*fib_val[0]) < (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0*max_val)))
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 7;
						
					}
					
					if (((1.0*fib_val[0]) > (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0*max_val)) &&
						((1.0*fib_val[0]) < (candy_frac)*(1.0*max_val)))
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 8;
						
					}
					
				}
				
				if (((1.0*fib_val[0]) > (1 - dark_frac)*(1.0*max_val)) && 
					(((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
					(!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
					dark_exist)
				{
				
					square_matrix[a_sub + max_level][b_sub + max_level] = 3;
					
				}
				
				if (((1.0*fib_val[0]) > (0.75 - 0.5*exit_frac)*(1.0*max_val)) &&
					((1.0*fib_val[0]) < (0.75 + 0.5*exit_frac)*(1.0*max_val)) && 
					(((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
					(!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
					exit_exist)
				{
				
					square_matrix[a_sub + max_level][b_sub + max_level] = 2;
					
				}
				
				Fiborand(fib_val, max_val, fractal);
											
			}
			
			if (((((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 1)) ||
				(((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 0))) && 
				(((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
				(!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
				wall_exist)
			{
				
				if ((1.0*fib_val[0]) < wall_frac*(1.0*max_val))
				{
				
					square_matrix[a_sub + max_level][b_sub + max_level] = 10;
					
					if (wall_concrete)
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 1;
						
					}
					
				}
				
				
				Fiborand(fib_val, max_val, fractal);
										
			}
			
			if ((b_sub == 0) && zero_wall)
			{
				
				square_matrix[a_sub + max_level][b_sub + max_level] = 1;
				
			}
			
			// std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
		
		}	
		
		// std::cout << "\n";	
	
	}


}
