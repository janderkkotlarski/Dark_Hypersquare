sf::RectangleShape Square_Draw(sf::RectangleShape squaraa, int colourz[], int tranzp, double poz_x, double poz_y, double squarral_x, double squarral_y)
{
			
	squaraa.setPosition(poz_x - squarral_x, poz_y - squarral_y);
				
	squaraa.setFillColor(sf::Color(colourz[0], colourz[1], colourz[2], tranzp));
	
	return squaraa;
	
}
