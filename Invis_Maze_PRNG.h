void Invis_Maze_PRNG(int square_matrix[][201], int max_level, int size_level)
{


	for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
	{
	
		for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
		{
			
			if (square_matrix[a_sub + max_level][b_sub + max_level] == 1)
			{
		
				square_matrix[a_sub + max_level][b_sub + max_level] = -1;
				
			}
		
			
		}	
		
	
	}


}
