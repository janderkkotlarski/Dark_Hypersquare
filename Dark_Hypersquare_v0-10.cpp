#include <iostream>
#include <string>
#include <cmath>
#include <chrono>
#include <thread>
#include <random>
#include <SFML/Graphics.hpp>

/// g++ -std=c++11 [-lm -v] -o "%e" "%f" -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

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
	fib_var[1] = ran_var;
	fib_var[2] = 0;
		
}

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

void Colorize(int colorz_in[], int colorz_out[])
{
	
	for (int a_sub = 0; a_sub < 3; a_sub++)
	{
		
		colorz_out[a_sub] = colorz_in[a_sub];
		
	}
	
}

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

void Color_Picker(int cube_identityy, int colorz[], int multikolor[])
{

	int whitee[3] = {255, 255, 255}, greyy[3] = {128, 128, 128}, blackk[3] = {0, 0, 0};
	int redd[3] = {255, 0, 0}, orangee[3] = {255, 128, 0}, yelloww[3] = {255, 255, 0};
	int greenn[3] = {0, 255, 0}, aquaa[3] = {0, 255, 255}, bluee[3] = {0, 0, 255}, violett[3] = {128, 0, 255};
	int darkk[3] = {24, 24, 24};
	
	if (cube_identityy == 0)
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

sf::RectangleShape Square_Draw(sf::RectangleShape squaraa, int colourz[], int tranzp, double poz_x, double poz_y, double squarral_x, double squarral_y)
{
			
	squaraa.setPosition(poz_x - squarral_x, poz_y - squarral_y);
				
	squaraa.setFillColor(sf::Color(colourz[0], colourz[1], colourz[2], tranzp));
	
	return squaraa;
	
}


int main()
{
	int max_level = 100, max_side = 2*max_level + 1, square_matrix[max_side][max_side];
	
	int size_level = 20, level_side, level_pass = 0, max_view = 6;
	
	int level_max = 10;
	
	int delaz = 3;
	
	bool level_change = false, level_back = false, level_reset = false, level_recet = false;
	
	bool level_begin = false, pause = false, view_glitch = false, glitch_excempt = false;
	
	bool moving = false, turn_right = false, turn_left = false;
	
	bool action = false, dark_setback = false, dark_flicker = false;
	
	bool inhale = false, exhale = false, building = false;
	
	bool turning = false, exchange = false, build = false, timeshift = false;
	
	bool one_turn_uplight = false, two_turn_uplight = false;
	
	bool key_up_uplight = false, key_right_uplight= false, key_down_uplight = false, key_left_uplight = false;
	
	bool key_d_uplight = false, key_a_uplight = false, key_w_uplight = false, key_x_uplight = false;
	
	bool key_r_uplight = false, key_v_uplight = false;

	double inhale_move_x = 0, inhale_move_y = 0;
	
	int absorbed = 0, assimilated = 0, nullvoid = 0;
	
	int transitions = 22;
	
	double pi = 2*acos(0), theta = 0, delta_theta = pi/(2*transitions);
	
	int squarep = 50, window_x = 12*squarep, window_y = 12*squarep, squarrel = 20;
	
	int half_wind = 6*squarep, max_transp = 255, square_transp, bat_transp, full_intensity = 255;
	
	int colours[3], karasu[3], kolours[3], transp, toransupu = max_transp, intro_transp = max_transp;
	
	int color_black[3] = {0, 0, 0}, key_colour[3], background_colour[3];
	
	int uplight_transp;
	
	int pacman = 0;
	
	double dark_transp = 0, dark_mult = 3;
	
	int exit_colors[3] = {full_intensity, 0, 0};
	
	int dir_up[2] = {0, -1}, dir_down[2] = {0, 1}, dir_right[2] = {1, 0}, dir_left[2] = {-1, 0};
	
	int dir_move[2] = {0, 0}, dir_direct[2] = {0, 0};
	
	double dir_mult = 2.5, final_move[2] = {0, 0};
	
	int rot_right = -1, rot_left = 1;
	
	double rot_mult = 4.5, final_rot = 0, paruto = 1, paruto_sub = 0.05, scale = 1, scale_mult = 1.17, scale_rot = 18;
	
	int turn_right_matrix[2][2] = {0, -1, 1, 0}, turn_left_matrix[2][2] = {0, 1, -1, 0};
	
	double pos_x = 0, pos_y = 0, pos_i = 0, pos_j = 0;
	
	double scan_pos_x = 0, scan_pos_y = -50, level_pot_x, level_pot_y;
	
	int local_x = 0, local_y = -1, pot_x = 0, pot_y = 0, qot_x = 0, qot_y = 0, radius_max_2 = 72;
	
	int possible_triggers = 0, actual_triggers = 0;
	
	int fib_val[3], max_val = 1000000000, fractal = (max_val - 2);
	
	int blink = max_transp, background_blink = 0;
	
	bool blink_on = true, background_blink_on = false, position_declare = true;
	
	
	int level_loop_counter = 0;



	double wall_frac = 0.40, candy_frac = 0.35, dark_frac = 0.1, exit_frac = 0.03;
	
	Fiboinit(fib_val, max_val, fractal);
	
	
	std::string amazad_var = "Dark Hypersquare V0.10";
	
	std::string scanner_img = "A-M4Z2-D_Scanner.png";
	
	std::string arrow_img = "Arrow_Small.png";
	
	std::string bitmask_img = "Bit_Mask_49a.png";
	
	std::string bitmask_key_up_file = "Key_Up_Icon.png";
	std::string bitmask_key_right_file = "Key_Right_Icon.png";
	std::string bitmask_key_down_file = "Key_Down_Icon.png";
	std::string bitmask_key_left_file = "Key_Left_Icon.png";
	
	std::string bitmask_key_d_file = "Key_D_Icon.png";
	std::string bitmask_key_right_turn_file = "Key_Turn_Right_Icon.png";
	
	std::string bitmask_key_a_file = "Key_A_Icon.png";
	std::string bitmask_key_left_turn_file = "Key_Turn_Left_Icon.png";
	
	std::string bitmask_key_w_file = "Key_W_Icon.png";
	std::string bitmask_exchange_file = "Exchange_Icon.png";
	
	std::string bitmask_key_x_file = "Key_X_Icon.png";
	std::string bitmask_build_file = "Build_Icon.png";
	
	std::string bitmask_key_r_file = "Key_R_Icon.png";
	std::string bitmask_reset_file = "Reset_Icon.png";
	
	std::string bitmask_key_v_file = "Key_V_Icon.png";
	std::string bitmask_timeshift_file = "Timeshift_Icon.png";
	
	std::string bitmask_key_esc_file = "Key_Esc_Icon.png";
	
	std::string bitmask_level_file = "L3V3L_Icon.png";
	
	std::string bitmask_number_file[51];
	
	bitmask_number_file[1] = "Number_1_Icon.png";
	bitmask_number_file[2] = "Number_2_Icon.png";	
	bitmask_number_file[3] = "Number_3_Icon.png";
	bitmask_number_file[4] = "Number_4_Icon.png";
	bitmask_number_file[5] = "Number_5_Icon.png";
	bitmask_number_file[6] = "Number_6_Icon.png";
	bitmask_number_file[7] = "Number_7_Icon.png";
	bitmask_number_file[8] = "Number_8_Icon.png";
	bitmask_number_file[9] = "Number_9_Icon.png";
	bitmask_number_file[10] = "Number_10_Icon.png";
	
	
	
	sf::VertexArray squanner(sf::Quads, 4);
	
	sf::Texture scanner_tex;
	
	if (!scanner_tex.loadFromFile(scanner_img))
	{
			
		std::cout << scanner_img << " not found!\n";
			
	}
	
	sf::Sprite scanner_sprite;
	scanner_sprite.setTexture(scanner_tex);
	
	scanner_sprite.setOrigin(sf::Vector2f(half_wind, half_wind));
	
	scanner_sprite.setPosition(sf::Vector2f(0, -squarep));

	
	squanner[0].position = sf::Vector2f(-half_wind, -half_wind);
	squanner[0].color = sf::Color(full_intensity, full_intensity, full_intensity, 128);
									
	squanner[1].position = sf::Vector2f(half_wind, -half_wind);
	squanner[1].color = sf::Color(full_intensity, full_intensity, full_intensity, 128);
								
	squanner[2].position = sf::Vector2f(half_wind, half_wind);
	squanner[2].color = sf::Color(full_intensity, full_intensity, full_intensity, 128);
									
	squanner[3].position = sf::Vector2f(-half_wind, half_wind);
	squanner[3].color = sf::Color(full_intensity, full_intensity, full_intensity, 128);
	
	squanner[0].texCoords = sf::Vector2f(0, 0);
	squanner[1].texCoords = sf::Vector2f(2*half_wind, 0);
	squanner[2].texCoords = sf::Vector2f(2*half_wind, 2*half_wind);
	squanner[3].texCoords = sf::Vector2f(0, 2*half_wind);
	
	
	sf::Texture arrow_tex;
	
	if (!arrow_tex.loadFromFile(arrow_img))
	{
			
		std::cout << arrow_img << " not found!\n";
			
	}
	
	sf::Sprite arrow_sprite;
	arrow_sprite.setTexture(arrow_tex);
	
	arrow_sprite.setOrigin(sf::Vector2f(squarrel, squarrel));
	
	arrow_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_tex;
	
	if (!bitmask_tex.loadFromFile(bitmask_img))
	{
			
		std::cout << bitmask_img << " not found!\n";
			
	}
	
	sf::Sprite bitmask_sprite;
	bitmask_sprite.setTexture(bitmask_tex);
	
	bitmask_sprite.setOrigin(sf::Vector2f(squarrel, squarrel));
	
	bitmask_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	sf::Sprite bitomasuku_supuraito;
	bitomasuku_supuraito.setTexture(bitmask_tex);
	
	bitomasuku_supuraito.setOrigin(sf::Vector2f(squarrel, squarrel));
	
	bitomasuku_supuraito.setPosition(sf::Vector2f(0, 0));
	
	
	
	sf::Sprite pitmask_sprite;
	pitmask_sprite.setTexture(bitmask_tex);
	
	pitmask_sprite.setOrigin(sf::Vector2f(squarrel, squarrel));
	
	pitmask_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	sf::Texture bitmask_key_up;
	
	if (!bitmask_key_up.loadFromFile(bitmask_key_up_file))
	{
			
		std::cout << bitmask_key_up_file << " not found!\n";
			
	}
	
	sf::Sprite key_up_sprite;
	key_up_sprite.setTexture(bitmask_key_up);
	
	key_up_sprite.setOrigin(sf::Vector2f(-3.5*squarep, -3.5*squarep));
	
	key_up_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	sf::Texture bitmask_key_right;
	
	if (!bitmask_key_right.loadFromFile(bitmask_key_right_file))
	{
			
		std::cout << bitmask_key_right_file << " not found!\n";
			
	}
	
	sf::Sprite key_right_sprite;
	key_right_sprite.setTexture(bitmask_key_right);
	
	
	key_right_sprite.setOrigin(sf::Vector2f(-4.5*squarep, -4.5*squarep));
	
	key_right_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_down;
	
	if (!bitmask_key_down.loadFromFile(bitmask_key_down_file))
	{
			
		std::cout << bitmask_key_down_file << " not found!\n";
			
	}
	
	sf::Sprite key_down_sprite;
	key_down_sprite.setTexture(bitmask_key_down);

	key_down_sprite.setOrigin(sf::Vector2f(-3.5*squarep, -4.5*squarep));
	
	key_down_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_left;
	
	if (!bitmask_key_left.loadFromFile(bitmask_key_left_file))
	{
			
		std::cout << bitmask_key_left_file << " not found!\n";
			
	}
	
	sf::Sprite key_left_sprite;
	key_left_sprite.setTexture(bitmask_key_left);
	
	key_left_sprite.setOrigin(sf::Vector2f(-2.5*squarep, -4.5*squarep));
	
	key_left_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_d;
	
	if (!bitmask_key_d.loadFromFile(bitmask_key_d_file))
	{
			
		std::cout << bitmask_key_d_file << " not found!\n";
			
	}
	
	sf::Sprite key_d_sprite;
	key_d_sprite.setTexture(bitmask_key_d);
	
	key_d_sprite.setOrigin(sf::Vector2f(4.5*squarep, -4.5*squarep));
	
	key_d_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_right_turn;
	
	if (!bitmask_key_right_turn.loadFromFile(bitmask_key_right_turn_file))
	{
			
		std::cout << bitmask_key_right_turn_file << " not found!\n";
			
	}
	
	sf::Sprite key_right_turn_sprite;
	key_right_turn_sprite.setTexture(bitmask_key_right_turn);
	
	key_right_turn_sprite.setOrigin(sf::Vector2f(4.5*squarep, -3.5*squarep));
	
	key_right_turn_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	sf::Texture bitmask_key_a;
	
	if (!bitmask_key_a.loadFromFile(bitmask_key_a_file))
	{
			
		std::cout << bitmask_key_a_file << " not found!\n";
			
	}
	
	sf::Sprite key_a_sprite;
	key_a_sprite.setTexture(bitmask_key_a);
	
	key_a_sprite.setOrigin(sf::Vector2f(5.5*squarep, -4.5*squarep));
	
	key_a_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_left_turn;
	
	if (!bitmask_key_left_turn.loadFromFile(bitmask_key_left_turn_file))
	{
			
		std::cout << bitmask_key_left_turn_file << " not found!\n";
			
	}
	
	sf::Sprite key_left_turn_sprite;
	key_left_turn_sprite.setTexture(bitmask_key_left_turn);
	
	key_left_turn_sprite.setOrigin(sf::Vector2f(5.5*squarep, -3.5*squarep));
	
	key_left_turn_sprite.setPosition(sf::Vector2f(0, -squarep));

	
	
	sf::Texture bitmask_key_w;
	
	if (!bitmask_key_w.loadFromFile(bitmask_key_w_file))
	{
			
		std::cout << bitmask_key_w_file << " not found!\n";
			
	}
	
	sf::Sprite key_w_sprite;
	key_w_sprite.setTexture(bitmask_key_w);
	
	key_w_sprite.setOrigin(sf::Vector2f(3*squarep, -4.5*squarep));
	
	key_w_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_exchange;
	
	if (!bitmask_exchange.loadFromFile(bitmask_exchange_file))
	{
			
		std::cout << bitmask_exchange_file << " not found!\n";
			
	}
	
	sf::Sprite exchange_sprite;
	exchange_sprite.setTexture(bitmask_exchange);
	
	exchange_sprite.setOrigin(sf::Vector2f(3*squarep, -3.5*squarep));
	
	exchange_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_x;
	
	if (!bitmask_key_x.loadFromFile(bitmask_key_x_file))
	{
			
		std::cout << bitmask_key_x_file << " not found!\n";
			
	}
	
	sf::Sprite key_x_sprite;
	key_x_sprite.setTexture(bitmask_key_x);
	
	key_x_sprite.setOrigin(sf::Vector2f(2*squarep, -4.5*squarep));
	
	key_x_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_build;
	
	if (!bitmask_build.loadFromFile(bitmask_build_file))
	{
			
		std::cout << bitmask_build_file << " not found!\n";
			
	}
	
	sf::Sprite build_sprite;
	build_sprite.setTexture(bitmask_build);
	
	build_sprite.setOrigin(sf::Vector2f(2*squarep, -3.5*squarep));
	
	build_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_v;
	
	if (!bitmask_key_v.loadFromFile(bitmask_key_v_file))
	{
			
		std::cout << bitmask_key_v_file << " not found!\n";
			
	}
	
	sf::Sprite key_v_sprite;
	key_v_sprite.setTexture(bitmask_key_v);
	
	key_v_sprite.setOrigin(sf::Vector2f(0.5*squarep, -4.5*squarep));
	
	key_v_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_timeshift;
	
	if (!bitmask_timeshift.loadFromFile(bitmask_timeshift_file))
	{
			
		std::cout << bitmask_timeshift_file << " not found!\n";
			
	}
	
	sf::Sprite timeshift_sprite;
	timeshift_sprite.setTexture(bitmask_timeshift);
	
	timeshift_sprite.setOrigin(sf::Vector2f(0.5*squarep, -3.5*squarep));
	
	timeshift_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_r;
	
	if (!bitmask_key_r.loadFromFile(bitmask_key_r_file))
	{
			
		std::cout << bitmask_key_r_file << " not found!\n";
			
	}
	
	sf::Sprite key_r_sprite;
	key_r_sprite.setTexture(bitmask_key_r);
	
	key_r_sprite.setOrigin(sf::Vector2f(-1*squarep, -4.5*squarep));
	
	key_r_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_reset;
	
	if (!bitmask_reset.loadFromFile(bitmask_reset_file))
	{
			
		std::cout << bitmask_reset_file << " not found!\n";
			
	}
	
	sf::Sprite reset_sprite;
	reset_sprite.setTexture(bitmask_reset);
	
	reset_sprite.setOrigin(sf::Vector2f(-1*squarep, -3.5*squarep));
	
	reset_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture bitmask_key_esc;
	
	if (!bitmask_key_esc.loadFromFile(bitmask_key_esc_file))
	{
			
		std::cout << bitmask_key_esc_file << " not found!\n";
			
	}
	
	sf::Sprite key_esc_sprite;
	key_esc_sprite.setTexture(bitmask_key_esc);
	
	key_esc_sprite.setOrigin(sf::Vector2f(5.5*squarep, 5.5*squarep));
	
	key_esc_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	sf::Texture bitmask_level;	
	
	if (!bitmask_level.loadFromFile(bitmask_level_file))
	{
			
		std::cout << bitmask_level_file << " not found!\n";
			
	}
	
	sf::Sprite level_sprite;
	level_sprite.setTexture(bitmask_level);
	
	level_sprite.setOrigin(sf::Vector2f(5.5*squarep, -0.5*squarep));
	
	level_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	sf::Texture bitmask_number[51];
	
	for (int a_sub = 1; a_sub <= level_max; a_sub++)
	{
		
	
		if (!bitmask_number[a_sub].loadFromFile(bitmask_number_file[a_sub]))
		{
				
			std::cout << bitmask_number_file[a_sub] << " not found!\n";
				
		}
		
	}
	
	sf::Sprite number_sprite[51];
	
	for (int a_sub = 1; a_sub <= level_max; a_sub++)
	{
	
		number_sprite[a_sub].setTexture(bitmask_number[a_sub]);
	
		number_sprite[a_sub].setOrigin(sf::Vector2f(4.5*squarep, -0.5*squarep));
	
		number_sprite[a_sub].setPosition(sf::Vector2f(0, -squarep));
	
	}
	
	
	std::chrono::milliseconds delay(delaz);
	
	
	
	sf::RectangleShape squaree(sf::Vector2f(2*squarrel, 2*squarrel));
	
	Color_Picker(8, colours, exit_colors);
	
	squaree = Square_Draw(squaree, colours, blink, pos_x, pos_y, squarrel, squarrel);
	
	
	
	sf::RectangleShape sukuwarii(sf::Vector2f(2*squarrel, 2*squarrel));
	
	Color_Picker(8, karasu, exit_colors);
	
	sukuwarii = Square_Draw(sukuwarii, karasu, blink, pos_x, pos_y, squarrel, squarrel);
	
	
	
	sf::RectangleShape squarei(sf::Vector2f(2*squarrel, 2*squarrel));
	
	Color_Picker(0, kolours, exit_colors);

	squarei = Square_Draw(squarei, kolours, max_transp, local_x*squarep, local_y*squarep - squarep, squarrel, squarrel);
	
	
	sf::RectangleShape infobox(sf::Vector2f(2*half_wind, half_wind - 0.5*squarep));
	
	Color_Picker(0, color_black, exit_colors);
	
	infobox.setOrigin(sf::Vector2f(half_wind, -0.5*squarep));
	
	infobox = Square_Draw(infobox, color_black, max_transp, 0, -squarep, 0, 0);
	
	
	sf::RectangleShape exit_filler(sf::Vector2f(2*squarrel, 2*squarrel));
	
	Color_Picker(0, karasu, exit_colors);
	
	exit_filler.setOrigin(squarrel, squarrel);
	
	exit_filler = Square_Draw(exit_filler, karasu, max_transp, pos_x, pos_y, 0, 0);
	
	
	sf::RectangleShape intro_filler(sf::Vector2f(2*squarrel, 2*squarrel));
	
	Color_Picker(0, karasu, exit_colors);
	
	intro_filler.setOrigin(squarrel, squarrel);
	
	intro_filler = Square_Draw(intro_filler, karasu, max_transp, pos_x, pos_y, 0, 0);
	
	intro_filler.scale(18, 18);
	
	
	
	
	Color_Picker(2, key_colour, exit_colors);
	
	
	
	sf::Font font;
	if (!font.loadFromFile("Carlito-Regular.ttf"))
	{
		
			// error...
			
	}
	
	sf::Text text;
		
	text.setFont(font);
		
	text.setCharacterSize(18);
		
	text.setColor(sf::Color::White);
		
	text.setPosition(50, 350);
	
	
	sf::RenderWindow window(sf::VideoMode(window_x, window_y), amazad_var, sf::Style::Default);
	
	sf::View view(sf::Vector2f(0, -squarep), sf::Vector2f(window_x, window_x));
	
	view.setViewport(sf::FloatRect(0, 0, 1, 1));
	
	window.setView(view);
	
	while (window.isOpen())
    {
		
		
		
		for (int level = 1; level <= level_max; level++)
		{

			level_change = false;
			
			if (level <= 2)
			{
				
				size_level = 5;
				
			}
			
			if (level >= 3)
			{
				
				size_level = 10;
				
			}
			
			level_side = 2*size_level + 1;
			
			// std::cout << "[" << level << ":" << size_level << ":" << level_side << "]" << "\n" << "\n";
			
			
			for (int a_sub = -max_level; a_sub <= max_level; a_sub++)
			{
				
				for (int b_sub = -max_level; b_sub <= max_level; b_sub++)
				{
						
					square_matrix[a_sub + max_level][b_sub + max_level] = 1;
						
					// std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
						
				}
					
				//std::cout << "\n";
					
			}
				
			//std::cout << "\n";
				

			
			if (level <= 2)
			{
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
				
					for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 10;
						
						// std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
						
					}
					
					// std::cout << "\n";
					
				}
				
				// std::cout << "\n";
				
			}
			
			
			if (level >= 3)
			{
			
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
				
					for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
					{
					
						square_matrix[a_sub + max_level][b_sub + max_level] = 0;
					
						if (((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 1) && 
							((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))))
						{
						
							square_matrix[a_sub + max_level][b_sub + max_level] = 1;
													
						}
					
						if (((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 0) &&
							((a_sub != 0) || (b_sub != 0)))
						{
							
							if ((1.0*fib_val[0]) < candy_frac*(1.0*max_val))
							{
							
								square_matrix[a_sub + max_level][b_sub + max_level] = 5;
								
							}
							
							if (((1.0*fib_val[0]) > (1 - dark_frac)*(1.0*max_val)) && 
								((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))))
							{
							
								square_matrix[a_sub + max_level][b_sub + max_level] = 3;
								
							}
							
							if (((1.0*fib_val[0]) > 0.5*(1 - exit_frac)*(1.0*max_val)) &&
								((1.0*fib_val[0]) < 0.5*(1 + exit_frac)*(1.0*max_val)) && 
								((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))))
							{
							
								square_matrix[a_sub + max_level][b_sub + max_level] = 2;
								
							}
							
							Fiborand(fib_val, max_val, fractal);
														
						}
						
						if (((((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 1)) ||
							(((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 0))) && 
							((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))))
						{
							
							if ((1.0*fib_val[0]) < wall_frac*(1.0*max_val))
							{
							
								square_matrix[a_sub + max_level][b_sub + max_level] = 1;
								
							}
							
							
							Fiborand(fib_val, max_val, fractal);
													
						}
						
						if ((b_sub == 0) && false)
						{
							
							square_matrix[a_sub + max_level][b_sub + max_level] = 1;
							
						}
						
						// std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
					
					}	
					
					// std::cout << "\n";	
				
				}
				
				// std::cout << "\n";
			
			}
			
			
			
			if (level == 1)
			{
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level][a_sub + max_level] = 0;
					
				}
				
			}
			
			
			if (level == 2)
			{
				
				
				// up
				for (int a_sub = -size_level; a_sub <= 1; a_sub++)
				{
					
					square_matrix[max_level][a_sub + max_level] = 0;
					
				}
				
				// right
				for (int a_sub = 0; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-size_level + max_level] = 0;
					
				}
				
				// up
				for (int a_sub = 2; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[size_level + max_level][a_sub + max_level] = 0;
					
				}
				
								
				// right
				for (int a_sub = -size_level; a_sub <= 0; a_sub++)
				{
					
					square_matrix[a_sub + max_level][2 + max_level] = 0;
					
				}
				
				
			}
			
			square_matrix[max_level][max_level] = 4;
						
			
			if (level == 1)
			{
				
				square_matrix[max_level][max_level] = 10;
				
			}
			
			if (level <= 2)
			{
				
				square_matrix[max_level][max_level + 1] = 2;
				
			}
			
			if (level >= 3)
			{
			
			
				square_matrix[max_level][1 + max_level] = 1;

				
				for (int a_sub = -1; a_sub <= 1; a_sub = a_sub + 2)
				{
					
					for (int b_sub = -1; b_sub <= 1; b_sub++)
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 1;
						
					}
					
				}
				
			}
			
			
			
			
			
			turning = false;
			exchange = false;
			build = false;
			timeshift = false;
			
			if (level > 0)
			{
				
				turning = true;
				
			}
			
			if (level <= 5)
			{
				
				exchange = true;
				
			}
			
			if (level < 50)
			{
				
				build = true;
				
			}
			
			if (level < 50)
			{
				
				timeshift = true;
				
			}
					
			// square_matrix[max_level][-3 + max_level] = 3;					
					
			local_x = 0;
			local_y = -1;
			
			view.setCenter(0, -squarep);
			
			
			view.setRotation(0);

			
			scanner_sprite.setPosition(sf::Vector2f(0, -squarep));			
			scanner_sprite.setRotation(0);
			
			
			arrow_sprite.setPosition(sf::Vector2f(0, -squarep));			
			arrow_sprite.setRotation(0);
			
			
			
			infobox.setPosition(sf::Vector2f(0, -squarep));			
			infobox.setRotation(0);
			
			
			key_up_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_up_sprite.setRotation(0);
			
			key_right_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_right_sprite.setRotation(0);
			
			key_down_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_down_sprite.setRotation(0);
			
			key_left_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_left_sprite.setRotation(0);
			
			key_d_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_d_sprite.setRotation(0);
			
			key_right_turn_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_right_turn_sprite.setRotation(0);
			
			key_a_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_a_sprite.setRotation(0);
			
			key_left_turn_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_left_turn_sprite.setRotation(0);
			
			key_w_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_w_sprite.setRotation(0);
			
			exchange_sprite.setPosition(sf::Vector2f(0, -squarep));
			exchange_sprite.setRotation(0);
			
			key_x_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_x_sprite.setRotation(0);

			build_sprite.setPosition(sf::Vector2f(0, -squarep));
			build_sprite.setRotation(0);
			
			key_v_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_v_sprite.setRotation(0);
			
			timeshift_sprite.setPosition(sf::Vector2f(0, -squarep));
			timeshift_sprite.setRotation(0);
			
			key_r_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_r_sprite.setRotation(0);
			
			reset_sprite.setPosition(sf::Vector2f(0, -squarep));
			reset_sprite.setRotation(0);
			
			key_esc_sprite.setPosition(sf::Vector2f(0, -squarep));
			key_esc_sprite.setRotation(0);
			
			level_sprite.setPosition(sf::Vector2f(0, -squarep));
			level_sprite.setRotation(0);
			
			for (int a_sub = 1; a_sub <= level_max; a_sub++)
			{
				
				number_sprite[a_sub].setPosition(sf::Vector2f(0, -squarep));
				number_sprite[a_sub].setRotation(0);
				
			}

			if (!two_turn_uplight)
			{
								
				key_up_uplight = false;
				key_right_uplight= false;
				key_down_uplight = false;
				key_left_uplight = false;
		
				key_d_uplight = false;
				key_a_uplight = false;
				
				key_w_uplight = false;
				key_x_uplight = false;
		
				key_r_uplight = false;
				key_v_uplight = false;
								
			}

			
			action = true;
			
			final_move[0] = 0;
			final_move[1] = 0;
			
			dir_up[0] = 0;
			dir_up[1] = -1;
			
			dir_down[0] = 0;
			dir_down[1] = 1;
			
			dir_right[0] = 1;
			dir_right[1] = 0;
			
			dir_left[0] = -1;
			dir_left[1] = 0;
			
			dir_direct[0] = 0;
			dir_direct[1] = 0;
			
						
			scan_pos_x = 0;
			scan_pos_y = -squarep;
			
							
			view_glitch = true;
			
			position_declare = true;
			
			window.setView(view);
					
			while (!level_change)
			{
				
				if (inhale)
				{
					
					exhale = true;
					
					inhale = false;
										
				}
				
				if ((level == 1) && !glitch_excempt)
				{
				
					view_glitch = false;
		
				}
				
				glitch_excempt = false;
				
				dark_flicker = false;
				
				if (dark_setback)
				{
						
					level_recet = true;
					
					view_glitch = true;
					
					action = true;
					
					dark_flicker = true;
					
					local_x = 0;
					local_y = -1;
			
					view.setCenter(0, -squarep);
					
					scanner_sprite.setPosition(sf::Vector2f(0, -squarep));			
		
					arrow_sprite.setPosition(sf::Vector2f(0, -squarep));	
					
					infobox.setPosition(sf::Vector2f(0, -squarep));	
					
					
					key_up_sprite.setPosition(sf::Vector2f(0, -squarep));
					key_right_sprite.setPosition(sf::Vector2f(0, -squarep));	
					key_down_sprite.setPosition(sf::Vector2f(0, -squarep));	
					key_left_sprite.setPosition(sf::Vector2f(0, -squarep));	
					
					key_d_sprite.setPosition(sf::Vector2f(0, -squarep));
					key_right_turn_sprite.setPosition(sf::Vector2f(0, -squarep));	
					
					key_a_sprite.setPosition(sf::Vector2f(0, -squarep));	
					key_left_turn_sprite.setPosition(sf::Vector2f(0, -squarep));	
					
					key_w_sprite.setPosition(sf::Vector2f(0, -squarep));	
					exchange_sprite.setPosition(sf::Vector2f(0, -squarep));
					
					key_x_sprite.setPosition(sf::Vector2f(0, -squarep));	
					build_sprite.setPosition(sf::Vector2f(0, -squarep));
					
					key_v_sprite.setPosition(sf::Vector2f(0, -squarep));	
					timeshift_sprite.setPosition(sf::Vector2f(0, -squarep));
					
					key_r_sprite.setPosition(sf::Vector2f(0, -squarep));	
					reset_sprite.setPosition(sf::Vector2f(0, -squarep));
					
					key_esc_sprite.setPosition(sf::Vector2f(0, -squarep));
					
					level_sprite.setPosition(sf::Vector2f(0, -squarep));

					for (int a_sub = 1; a_sub <= level_max; a_sub++)
					{
						
						number_sprite[a_sub].setPosition(sf::Vector2f(0, -squarep));
						
					}
					
					
					final_move[0] = 0;
					final_move[1] = 0;	
					
					dir_direct[0] = 0;
					dir_direct[1] = 0;
					
								
					scan_pos_x = 0;
					scan_pos_y = -squarep;	
					
					window.setView(view);
						
				}
				
				
				if (!view_glitch && !exhale)
				{
																	
					window.clear(sf::Color(color_black[0], color_black[1], color_black[2]));
					
					// window.clear(sf::Color(255, 255, 255));
					
					for (int a_sub = -max_view; a_sub <= max_view; a_sub++)
					{
						
						pot_x = local_x + a_sub;
						
						pos_x = pot_x*squarep;
						
						if (pot_x > size_level)
						{
							
							pot_x = pot_x - level_side;
							
						}
						
						if (pot_x < -size_level)
						{
							
							pot_x = pot_x + level_side;
							
						}

						for (int b_sub = -max_view; b_sub <= max_view; b_sub++)
						{
							
							pot_y = local_y + b_sub;
							
							pos_y = pot_y*squarep;
						
							if (pot_y > size_level)
							{
								
								pot_y = pot_y - level_side;
								
							}
							
							if (pot_y < -size_level)
							{
								
								pot_y = pot_y + level_side;
								
							}
						
							Color_Picker(square_matrix[pot_x + max_level][pot_y + max_level], colours, exit_colors);
							
							if ((square_matrix[pot_x + max_level][pot_y + max_level] <= 4) ||
								(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
							{
								
								square_transp = max_transp;
								
							}
							else
							{
								
								square_transp = blink;
								
							}
							
							if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
							{
									
								dark_transp = exp(-sqrt(1.0*a_sub*a_sub + 1.0*b_sub*b_sub)/(dark_mult));
									
							}
							else
							{
									
								dark_transp = 1;
									
							}
						
								
							// qot_x = a_sub + local_x + c_sub*level_side;
							
							// qot_y = b_sub + local_y + d_sub*level_side;
							
										
							squaree = Square_Draw(squaree, colours, round(dark_transp*square_transp), pos_x, pos_y, squarrel, squarrel);
										
							window.draw(squaree);
							
							if (square_matrix[pot_x + max_level][pot_y + max_level] != 3)
							{			
											
								bitmask_sprite.setPosition(pos_x, pos_y);
																	
								bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], round(dark_transp*max_transp)));
												
								window.draw(bitmask_sprite);
							
							}
						
						}
					
					}
			
					window.draw(scanner_sprite);
					
					window.draw(arrow_sprite);
					
					
					
					if (level_recet)
					{
							
						Color_Picker(0, karasu, exit_colors);
							
						intro_filler = Square_Draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, squarrel, squarrel);
							
						window.draw(intro_filler);
						
						action = true;
							
					}
					
					
					
					window.draw(infobox);
					
					
					
					
					
					if ((one_turn_uplight || two_turn_uplight) && (uplight_transp >= 0))
					{
						
						if (key_up_uplight)
						{
								
							key_up_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_right_uplight)
						{
								
							key_right_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_down_uplight)
						{
								
							key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_left_uplight)
						{
								
							key_left_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_down_uplight)
						{
								
							key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_d_uplight)
						{
								
							key_d_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_a_uplight)
						{
								
							key_a_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_w_uplight)
						{
								
							key_w_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_x_uplight)
						{
								
							key_x_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_v_uplight)
						{
								
							key_v_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						if (key_r_uplight)
						{
								
							key_r_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
								
						}
						
						// std::cout << uplight_transp << "\n";
						
					}
					else
					{
							
						key_up_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_right_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_left_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
						key_d_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_a_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
						key_w_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_x_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
						key_v_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						key_r_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							
					}
					
					key_esc_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						
					
					window.draw(key_up_sprite);
					window.draw(key_right_sprite);
					window.draw(key_down_sprite);
					window.draw(key_left_sprite);
					
					if (turning)
					{
						
						window.draw(key_d_sprite);
						window.draw(key_right_turn_sprite);
							
						window.draw(key_a_sprite);
						window.draw(key_left_turn_sprite);
						
					}
						
					if (exchange)
					{
						
						window.draw(key_w_sprite);
						window.draw(exchange_sprite);
							
					}
							
					if (build)
					{
						
						window.draw(key_x_sprite);
						window.draw(build_sprite);
							
					}
						
					if (timeshift)
					{
							
						window.draw(key_v_sprite);
						window.draw(timeshift_sprite);
							
					}
					
					window.draw(key_r_sprite);
					window.draw(reset_sprite);
					
					window.draw(key_esc_sprite);
					
					window.draw(level_sprite);
					
					window.draw(number_sprite[level]);
					
					
								
									
					window.display();
					
					
					
					
					Color_Picker(level, kolours, exit_colors);
					
					Color_Picker(2, key_colour, exit_colors);
					
					for (int a_sub = 0; a_sub <= 2; a_sub++)
					{
						
						key_colour[a_sub] = 128 + key_colour[a_sub]/2;
						
					}
					
					
					
					Exit_Multicolor(exit_colors);

					if (blink_on)
					{
						
						if (blink < max_transp)
						{
							
							blink = blink + 5;
							
							if (blink > max_transp)
							{
								
								 blink = max_transp;
								
							}
							
						}
						else
						{
							
							blink_on = false;
							
						}		
						
					}
					
					if (!blink_on)
					{
						
						if (blink > 0)
						{
							
							blink = blink - 5;
							
							if (blink < 0)
							{
								
								 blink = 0;
								
							}
							
						}
						else
						{
							
							blink_on = true;
							
							blink = blink + 5;
							
						}		
						
					}
					
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
							
							background_blink = background_blink + 5;
							
						}		
						
					}
					
					
				
				}				
							
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
						
					window.close();
					
					return(0);
						
				}	
				
				if (level_reset)
				{
					
					toransupu = 0;
					
					action = true;
					
				}
								
				dark_setback = false;
				
				inhale = false;
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::V) && timeshift && !exhale && !action)
				{
					
					action = true;
					
					key_v_uplight = true;
					
					one_turn_uplight = true;
					
					dir_direct[0] = 0;
					dir_direct[1] = 0;					
					
					final_move[0] = dir_mult*dir_direct[0];
					final_move[1] = dir_mult*dir_direct[1];
					
					inhale_move_x = dir_direct[0];
					inhale_move_y = dir_direct[1];
					
				}
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && exchange && !exhale && !action)
				{
					
					inhale = true;
					
				}
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::X) && !inhale && !exhale && !action)
				{
					
					building = true;
					
				}
				
				if ((inhale || building) && !exhale && !action && !(level_reset || level_recet))
				{
				
				
					dir_direct[0] = dir_up[0];
					dir_direct[1] = dir_up[1];					
					
					final_move[0] = dir_mult*dir_direct[0];
					final_move[1] = dir_mult*dir_direct[1];
					
					inhale_move_x = dir_direct[0];
					inhale_move_y = dir_direct[1];			
					
					if ((abs(local_x + dir_direct[0]) <= size_level) &&
						(abs(local_y + dir_direct[1]) <= size_level) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] != 1))
					{
							
						if (inhale)
						{
							
							absorbed = square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level];
								
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] = assimilated;
							
							action = true;
							
						}
						
						if (building && !inhale && (square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] == 0))
						{
							
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] = 10;
							
							action = true;
														
						}
						
					}
					
										
					if  (((local_x + dir_direct[0]) > size_level) &&
						(square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] != 1))
					{
						
						if (inhale)
						{
						
							absorbed = square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level];
								
							square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] = assimilated;
							
							action = true;
							
						}
						
						if (building && !inhale && (square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] == 0))
						{
							
							square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] = 10;
							
							action = true;
														
						}
						
					}
					
					
					if (((local_x + dir_direct[0]) < -size_level) &&
						(square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] != 1))
					{
						
						if (inhale)
						{
							
							absorbed = square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level];
									
							square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] = assimilated;
								
							action = true;
							
						}
						
						if (building && !inhale && (square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] == 0))
						{
							
							square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] = 10;
							
							action = true;
														
						}
							
					}
						
						
					if (((local_y + dir_direct[1]) > size_level) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] != 1))
					{
						
						if (inhale)
						{
							
							absorbed = square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level];
									
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] = assimilated;
								
							action = true;
							
						}
						
						if (building && !inhale && (square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] == 0))
						{
							
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] = 10;
							
							action = true;
														
						}
								
					}
						
						
					if (((local_y + dir_direct[1]) < -size_level) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] != 1))
					{
						
						if (inhale)
						{
							
							absorbed = square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level];
									
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] = assimilated;
								
							action = true;
							
						}
						
						if (building && !inhale && (square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] == 0))
						{
							
							square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] = 10;
							
							action = true;
														
						}
							
					}
						
					if (inhale && action)
					{
																			
						pacman = absorbed;
						
						one_turn_uplight = true;
						
						two_turn_uplight = true;
						
						key_w_uplight = true;

					}
					
					
					
					if (building && !inhale && action)
					{
																			
						pacman = 10;
						
						one_turn_uplight = true;
						
						key_x_uplight = true;
						
						toransupu = 0;
						
					}
					
					if (!action)
					{
						
						inhale = false;
						
						building = false;
						
					}
					

					
					Color_Picker(pacman, karasu, exit_colors);			
					
				}
				
				if (exhale && exchange && !action && !(level_reset || level_recet))
				{

					dir_direct[0] = dir_up[0];
					dir_direct[1] = dir_up[1];
					
					final_move[0] = dir_mult*dir_direct[0];
					final_move[1] = dir_mult*dir_direct[1];
					
					inhale_move_x = dir_direct[0];
					inhale_move_y = dir_direct[1];	
					
					pacman = assimilated;
						
					assimilated = absorbed;
						
					toransupu = 0;
					
					action = true;
					
					Color_Picker(pacman, karasu, exit_colors);			
							
				}
	
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ||
					sf::Keyboard::isKeyPressed(sf::Keyboard::Down) ||
					sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ||
					sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) &&
					!action && !(level_reset || level_recet))
				{	
				
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
					{
						
						dir_direct[0] = dir_up[0];
						dir_direct[1] = dir_up[1];
						
						one_turn_uplight = true;
						
						key_up_uplight = true;

					}
				
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
					{
					
						dir_direct[0] = dir_down[0];
						dir_direct[1] = dir_down[1];
						
						one_turn_uplight = true;
						
						key_down_uplight = true;
						
					}
				
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
					{
					
						dir_direct[0] = dir_right[0];
						dir_direct[1] = dir_right[1];
						
						one_turn_uplight = true;
						
						key_right_uplight = true;
						
					}
				
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
					{
						
						dir_direct[0] = dir_left[0];
						dir_direct[1] = dir_left[1];
						
						one_turn_uplight = true;
						
						key_left_uplight = true;
						
					}
					
					position_declare = true;
					
					if (false)
					{
						
						// std::cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~]" << "\n";
						
						// std::cout << "[" << local_x << "," << local_y << "]:" << square_matrix[local_x + max_level][local_y + max_level] << "\n";
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] - level_side << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] + level_side << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] - level_side << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] + level_side << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] << "\n";
						
						// std::cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~]" << "\n" << "\n";

						
					}
					
					
					
					if (((square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] != 1) ||
						((square_matrix[size_level + max_level][local_y + max_level] != 1) && (local_x == -size_level) && (local_x + dir_direct[0] < -size_level)) ||
						((square_matrix[local_x + max_level][size_level + max_level] != 1) && (local_y == -size_level) && (local_y + dir_direct[1] < -size_level)) ||
						((square_matrix[-size_level + max_level][local_y + max_level] != 1) && (local_x == size_level) && (local_x + dir_direct[0] > size_level)) ||
						((square_matrix[local_x + max_level][-size_level + max_level] != 1) && (local_y == size_level) && (local_y + dir_direct[1] > size_level))) &&
						((square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] != 10) ||
						((square_matrix[size_level + max_level][local_y + max_level] != 10) && (local_x == -size_level) && (local_x + dir_direct[0] < -size_level)) ||
						((square_matrix[local_x + max_level][size_level + max_level] != 10) && (local_y == -size_level) && (local_y + dir_direct[1] < -size_level)) ||
						((square_matrix[-size_level + max_level][local_y + max_level] != 10) && (local_x == size_level) && (local_x + dir_direct[0] > size_level)) ||
						((square_matrix[local_x + max_level][-size_level + max_level] != 10) && (local_y == size_level) && (local_y + dir_direct[1] > size_level))))
					{
							
						moving = true;
						
						action = true;
					
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
					
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
						
						if (local_x > size_level)
						{
							
							local_x = local_x - level_side;
							
							view.move(-level_side*squarep, 0);
						
							scanner_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							arrow_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							infobox.move(sf::Vector2f(-level_side*squarep, 0));
							
							
							
							key_up_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							key_right_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							key_down_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							key_left_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_d_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							key_right_turn_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_a_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							key_left_turn_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_w_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							exchange_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_x_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							build_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_v_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							timeshift_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_r_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							reset_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							key_esc_sprite.move(sf::Vector2f(-level_side*squarep, 0));
							
							level_sprite.move(sf::Vector2f(-level_side*squarep, 0));

							for (int a_sub = 1; a_sub <= level_max; a_sub++)
							{
								
								number_sprite[a_sub].move(sf::Vector2f(-level_side*squarep, 0));
								
							}
							
							
							scan_pos_x = scan_pos_x - level_side*squarep;
			
						}
						
						if (local_x < -size_level)
						{
							
							local_x = local_x + level_side;
							
							view.move(level_side*squarep, 0);
						
							scanner_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							arrow_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							infobox.move(sf::Vector2f(level_side*squarep, 0));
							
							
							
							key_up_sprite.move(sf::Vector2f(level_side*squarep, 0));
							key_right_sprite.move(sf::Vector2f(level_side*squarep, 0));
							key_down_sprite.move(sf::Vector2f(level_side*squarep, 0));
							key_left_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_d_sprite.move(sf::Vector2f(level_side*squarep, 0));
							key_right_turn_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_a_sprite.move(sf::Vector2f(level_side*squarep, 0));
							key_left_turn_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_w_sprite.move(sf::Vector2f(level_side*squarep, 0));
							exchange_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_x_sprite.move(sf::Vector2f(level_side*squarep, 0));
							build_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_v_sprite.move(sf::Vector2f(level_side*squarep, 0));
							timeshift_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_r_sprite.move(sf::Vector2f(level_side*squarep, 0));
							reset_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							key_esc_sprite.move(sf::Vector2f(level_side*squarep, 0));
							
							level_sprite.move(sf::Vector2f(level_side*squarep, 0));

							for (int a_sub = 1; a_sub <= level_max; a_sub++)
							{
								
								number_sprite[a_sub].move(sf::Vector2f(level_side*squarep, 0));
								
							}
							
							
							scan_pos_x = scan_pos_x + level_side*squarep;
									
						}
						
						if (local_y > size_level)
						{
							
							local_y = local_y - level_side;
							
							view.move(0, -level_side*squarep);
						
							scanner_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							arrow_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							infobox.move(sf::Vector2f(0, -level_side*squarep));
							
							
							
							key_up_sprite.move(sf::Vector2f(0, -level_side*squarep));							
							key_right_sprite.move(sf::Vector2f(0, -level_side*squarep));							
							key_down_sprite.move(sf::Vector2f(0, -level_side*squarep));							
							key_left_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_d_sprite.move(sf::Vector2f(0, -level_side*squarep));
							key_right_turn_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_a_sprite.move(sf::Vector2f(0, -level_side*squarep));
							key_left_turn_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_w_sprite.move(sf::Vector2f(0, -level_side*squarep));
							exchange_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_x_sprite.move(sf::Vector2f(0, -level_side*squarep));
							build_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_v_sprite.move(sf::Vector2f(0, -level_side*squarep));
							timeshift_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_r_sprite.move(sf::Vector2f(0, -level_side*squarep));
							reset_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							key_esc_sprite.move(sf::Vector2f(0, -level_side*squarep));
							
							level_sprite.move(sf::Vector2f(0, -level_side*squarep));

							for (int a_sub = 1; a_sub <= level_max; a_sub++)
							{
								
								number_sprite[a_sub].move(sf::Vector2f(0, -level_side*squarep));
								
							}
							
						
							scan_pos_y = scan_pos_y - level_side*squarep;
										
						}
						
						if (local_y < -size_level)
						{
							
							local_y = local_y + level_side;
							
							view.move(0, level_side*squarep);
						
							scanner_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							arrow_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							infobox.move(sf::Vector2f(0, level_side*squarep));
							
							
							
							key_up_sprite.move(sf::Vector2f(0, level_side*squarep));
							key_right_sprite.move(sf::Vector2f(0, level_side*squarep));
							key_down_sprite.move(sf::Vector2f(0, level_side*squarep));
							key_left_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_d_sprite.move(sf::Vector2f(0, level_side*squarep));
							key_right_turn_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_a_sprite.move(sf::Vector2f(0, level_side*squarep));
							key_left_turn_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_w_sprite.move(sf::Vector2f(0, level_side*squarep));
							exchange_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_x_sprite.move(sf::Vector2f(0, level_side*squarep));
							build_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_v_sprite.move(sf::Vector2f(0, level_side*squarep));
							timeshift_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_r_sprite.move(sf::Vector2f(0, level_side*squarep));
							reset_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							key_esc_sprite.move(sf::Vector2f(0, level_side*squarep));
							
							level_sprite.move(sf::Vector2f(0, level_side*squarep));

							for (int a_sub = 1; a_sub <= level_max; a_sub++)
							{
								
								number_sprite[a_sub].move(sf::Vector2f(0, level_side*squarep));
								
							}
							
							
							scan_pos_y = scan_pos_y + level_side*squarep;
			
						}
						
						if (square_matrix[local_x + max_level][local_y + max_level] == 2)
						{
					
							level_change = true;

							two_turn_uplight = true;

						}
						
						if (square_matrix[local_x + max_level][local_y + max_level] == 3)
						{
					
							dark_setback = true;

							two_turn_uplight = true;
						
						}
						
						if (square_matrix[local_x + max_level][local_y + max_level] == 4)
						{
					
							level_back = true;

							two_turn_uplight = true;

						}
						
						if (square_matrix[local_x + max_level][local_y + max_level] != 1)
						{
							
							pacman = square_matrix[local_x + max_level][local_y + max_level];
							
							Color_Picker(pacman, karasu, exit_colors);
							
							square_matrix[local_x + max_level][local_y + max_level] = 0;

						}
						
					}
					
				}
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && !action && !(level_reset || level_recet))
				{
					
					turn_right = true;
					
					action = true;
					
					one_turn_uplight = true;
					
					key_a_uplight = true;
					
					for (int a_sub = 0; a_sub <= 1; a_sub++)
					{
								
						dir_move[a_sub] = dir_up[a_sub];		
										
						dir_up[a_sub] = dir_left[a_sub];
						dir_left[a_sub] = dir_down[a_sub];
						dir_down[a_sub] = dir_right[a_sub];
						
						dir_right[a_sub] = dir_move[a_sub];
						
					}
					
					final_rot = rot_mult*rot_right;
						
				}		
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && !action && !(level_reset || level_recet))
				{
					
					turn_left = true;
					
					action = true;
					
					one_turn_uplight = true;

					key_d_uplight = true;
					
					for (int a_sub = 0; a_sub <= 1; a_sub++)
					{
								
						dir_move[a_sub] = dir_up[a_sub];		
										
						dir_up[a_sub] = dir_right[a_sub];
						dir_right[a_sub] = dir_down[a_sub];
						dir_down[a_sub] = dir_left[a_sub];
						
						dir_left[a_sub] = dir_move[a_sub];
						
					}
					
					final_rot = rot_mult*rot_left;
					
				}
				
				
				if (one_turn_uplight)
				{
					
					uplight_transp = -12;		
					
					if (!two_turn_uplight)
					{
						
						uplight_transp = -6;
						
					}	
					
				}
				
								
				if (action)
				{
					
					if (exhale || building)
					{
						
						paruto = 0.08;
						
					}
					
					for (int actions = 1; actions <= transitions; actions++)
					{
						
						std::this_thread::sleep_for(delay);
						
						if (level_reset || exhale || building)
						{
							
							if (toransupu < 255)
							{
							
								toransupu = toransupu + 12;
								
							}
							
							if (toransupu > 255)
							{
								
								toransupu = 255;
								
							}
							
						}
						
						if (!level_reset && !exhale && !building)
						{
							
							if (toransupu > 0)
							{
							
								toransupu = toransupu - 12;
								
							}
							
							if (toransupu < 0)
							{
								
								toransupu = 0;
								
							}
							
						}
						
						if (one_turn_uplight && !two_turn_uplight)
						{
							
							uplight_transp = uplight_transp + 12;
							
						}
						
						if (two_turn_uplight)
						{
							
							uplight_transp = uplight_transp + 6;
							
						}	
						
						if (uplight_transp > 255)
						{
							
							uplight_transp = 255;
							
						}						
						
						if (!level_change && !level_back)
						{
						
							paruto = paruto - 0.04;
							
							if (exhale || building)
							{
							
								paruto = paruto + 0.08;
								
							}
						
							sukuwarii.setSize(sf::Vector2f(2*paruto*squarrel, 2*paruto*squarrel));
							
							bitomasuku_supuraito.setScale(sf::Vector2f(paruto, paruto));
							
						}
						
						if (inhale)
						{
							
							inhale_move_x = inhale_move_x - final_move[0];
							
							inhale_move_y = inhale_move_y - final_move[1];
							
						}
						
						if ((exhale || building) && (actions > 2))
						{
													
							inhale_move_x = inhale_move_x + final_move[0];
							
							inhale_move_y = inhale_move_y + final_move[1];
							
						}
						
						if (moving)
						{
							
							if (level_change)
							{
									
								exit_filler.rotate(scale_rot);
									
								exit_filler.scale(scale_mult, scale_mult);
									
								pitmask_sprite.rotate(scale_rot);
									
								pitmask_sprite.scale(scale_mult, scale_mult);
									
							}
								
							if (level_back)
							{
									
								exit_filler.rotate(-scale_rot);
									
								exit_filler.scale(scale_mult, scale_mult);
									
								pitmask_sprite.rotate(-scale_rot);
									
								pitmask_sprite.scale(scale_mult, scale_mult);
									
							}
								
							if (dark_setback)
							{
									
								exit_filler.scale(scale_mult, scale_mult);
									
							}
							
							if (actions <= 21)
							{
								
								view.move(final_move[0], final_move[1]);
									
								scanner_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
									
								arrow_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								infobox.move(sf::Vector2f(final_move[0], final_move[1]));
								
								
								
								key_up_sprite.move(sf::Vector2f(final_move[0], final_move[1]));								
								key_right_sprite.move(sf::Vector2f(final_move[0], final_move[1]));								
								key_down_sprite.move(sf::Vector2f(final_move[0], final_move[1]));								
								key_left_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_d_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								key_right_turn_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_a_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								key_left_turn_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_w_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								exchange_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_x_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								build_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_v_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								timeshift_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_r_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								reset_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								key_esc_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								level_sprite.move(sf::Vector2f(final_move[0], final_move[1]));

								for (int a_sub = 1; a_sub <= level_max; a_sub++)
								{
									
									number_sprite[a_sub].move(sf::Vector2f(final_move[0], final_move[1]));
									
								}
									
								scan_pos_x = scan_pos_x + final_move[0];							
								scan_pos_y = scan_pos_y + final_move[1];
							
							}
							else
							{
								
								view.move(-final_move[0], -final_move[1]);									
								scanner_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));									
								arrow_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));								
								infobox.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_up_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));								
								key_right_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));								
								key_down_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));								
								key_left_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_d_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								key_right_turn_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_a_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								key_left_turn_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_w_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								exchange_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_x_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								build_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_v_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								timeshift_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_r_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								reset_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								key_esc_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));
								
								level_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));

								for (int a_sub = 1; a_sub <= level_max; a_sub++)
								{
									
									number_sprite[a_sub].move(sf::Vector2f(-final_move[0], -final_move[1]));
									
								}
								
									
								scan_pos_x = scan_pos_x - final_move[0];							
								scan_pos_y = scan_pos_y - final_move[1];
							
							}
							
						}
														
						if (turn_right || turn_left)
						{
							
							if (actions <= 21)
							{
							
								view.rotate(final_rot);
								
								scanner_sprite.rotate(final_rot);
								
								infobox.rotate(final_rot);
								
								
								
								key_up_sprite.rotate(final_rot);								
								key_right_sprite.rotate(final_rot);								
								key_down_sprite.rotate(final_rot);								
								key_left_sprite.rotate(final_rot);
								
								key_d_sprite.rotate(final_rot);
								key_right_turn_sprite.rotate(final_rot);
								
								key_a_sprite.rotate(final_rot);
								key_left_turn_sprite.rotate(final_rot);
								
								key_w_sprite.rotate(final_rot);
								exchange_sprite.rotate(final_rot);
								
								key_x_sprite.rotate(final_rot);
								build_sprite.rotate(final_rot);
								
								key_v_sprite.rotate(final_rot);
								timeshift_sprite.rotate(final_rot);
								
								key_r_sprite.rotate(final_rot);
								reset_sprite.rotate(final_rot);
								
								key_esc_sprite.rotate(final_rot);
								
								level_sprite.rotate(final_rot);

								for (int a_sub = 1; a_sub <= level_max; a_sub++)
								{
									
									number_sprite[a_sub].rotate(final_rot);
									
								}
								
													
							}
							else
							{
							
								view.rotate(-final_rot);
								
								scanner_sprite.rotate(-final_rot);
								
								infobox.rotate(-final_rot);
								
								
								
								key_up_sprite.rotate(-final_rot);								
								key_right_sprite.rotate(-final_rot);								
								key_down_sprite.rotate(-final_rot);								
								key_left_sprite.rotate(-final_rot);
								
								key_d_sprite.rotate(-final_rot);
								key_right_turn_sprite.rotate(-final_rot);
								
								key_a_sprite.rotate(-final_rot);
								key_left_turn_sprite.rotate(-final_rot);
								
								key_w_sprite.rotate(-final_rot);
								exchange_sprite.rotate(-final_rot);
								
								key_x_sprite.rotate(-final_rot);
								build_sprite.rotate(-final_rot);
								
								key_v_sprite.rotate(-final_rot);
								timeshift_sprite.rotate(-final_rot);
								
								key_r_sprite.rotate(-final_rot);
								reset_sprite.rotate(-final_rot);
								
								key_esc_sprite.rotate(-final_rot);
								
								level_sprite.rotate(-final_rot);

								for (int a_sub = 1; a_sub <= level_max; a_sub++)
								{
									
									number_sprite[a_sub].rotate(-final_rot);
									
								}
																	
							}
														
						}
						
						window.setView(view);
						
						window.clear(sf::Color(color_black[0], color_black[1], color_black[2]));
											
						// window.clear(sf::Color(255, 255, 255));
						
						possible_triggers = 0;
						actual_triggers = 0;
						
						for (int a_sub = -max_view; a_sub <= max_view; a_sub++)
						{
							
							pot_x = local_x + a_sub;
							
							pos_x = pot_x*squarep;
							
							if (pot_x > size_level)
							{
								
								pot_x = pot_x - level_side;
								
							}
							
							if (pot_x < -size_level)
							{
								
								pot_x = pot_x + level_side;
								
							}

							for (int b_sub = -max_view; b_sub <= max_view; b_sub++)
							{
								
								pot_y = local_y + b_sub;
								
								pos_y = pot_y*squarep;
							
								if (pot_y > size_level)
								{
									
									pot_y = pot_y - level_side;
									
								}
								
								if (pot_y < -size_level)
								{
									
									pot_y = pot_y + level_side;
									
								}
							
								Color_Picker(square_matrix[pot_x + max_level][pot_y + max_level], colours, exit_colors);
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] <= 4) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
								{
									
									square_transp = max_transp;
									
								}
								else
								{
									
									square_transp = blink;
									
								}
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
								{
									
									dark_transp = exp(-sqrt((pos_x - scan_pos_x)*(pos_x - scan_pos_x) + (pos_y - scan_pos_y)*(pos_y - scan_pos_y))/(dark_mult*squarep));
									
								}
								else
								{
									
									dark_transp = 1;
									
								}
																
								squaree = Square_Draw(squaree, colours, round(dark_transp*square_transp), pos_x, pos_y, squarrel, squarrel);
											
								window.draw(squaree);
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] != 3)
								{
											
											
									bitmask_sprite.setPosition(pos_x, pos_y);
																		
									bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], round(dark_transp*1.0*max_transp)));
													
									window.draw(bitmask_sprite);
									
								}
																
								
								if ((moving && (a_sub == 0) && (b_sub == 0)) &&
									!level_change && !level_back && !(dark_setback || dark_flicker))
								{
										
									bat_transp = 1.0*blink*toransupu/max_transp;
									
									if ((pacman == 2) || (pacman == 3) || (pacman == 10))
									{
										
										bat_transp = toransupu;
										
									}
										
									sukuwarii = Square_Draw(sukuwarii, karasu, bat_transp, pos_x, pos_y, paruto*squarrel, paruto*squarrel);
											
									window.draw(sukuwarii);
									
									if (pacman != 3)
									{
											
										bitomasuku_supuraito.setPosition(pos_x, pos_y);
																
										bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], max_transp));
											
										window.draw(bitomasuku_supuraito);
										
									}
											
								}
		
							}
						
						}
						
						if ((inhale || exhale || building) && !level_change && !level_back && !(dark_setback || dark_flicker))
						{
							
							Color_Picker(nullvoid, karasu, exit_colors);
														
										
							squaree = Square_Draw(squaree, karasu, max_transp, scan_pos_x + dir_direct[0]*squarep, scan_pos_y + dir_direct[1]*squarep, squarrel, squarrel);
											
							window.draw(squaree);
							
																	
							bat_transp = 1.0*blink*toransupu/max_transp;
							
							Color_Picker(pacman, karasu, exit_colors);
							
							if (building)
							{
								
								// std::cout << pacman << "\n";
								
							}
									
							if ((pacman <= 4) || (pacman == 10))
							{
										
								bat_transp = toransupu;
										
							}							
							
							if (inhale)
							{
										
								sukuwarii = Square_Draw(sukuwarii, karasu, bat_transp, scan_pos_x + dir_direct[0]*squarep + inhale_move_x, scan_pos_y + dir_direct[1]*squarep + inhale_move_y, paruto*squarrel, paruto*squarrel);
									
							}
							
							if (exhale || building)
							{
										
								sukuwarii = Square_Draw(sukuwarii, karasu, bat_transp, scan_pos_x + inhale_move_x, scan_pos_y + inhale_move_y, paruto*squarrel, paruto*squarrel);
									
							}
											
							window.draw(sukuwarii);
									
							if (pacman != 3)
							{
								
								if (inhale)
								{
											
									bitomasuku_supuraito.setPosition(scan_pos_x + dir_direct[0]*squarep + inhale_move_x, scan_pos_y + dir_direct[1]*squarep + inhale_move_y);
									
								}
								
								if (exhale || building)
								{
											
									bitomasuku_supuraito.setPosition(scan_pos_x + inhale_move_x, scan_pos_y + inhale_move_y);
									
								}
																
								bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], max_transp));
											
								window.draw(bitomasuku_supuraito);
										
							}
											
						}
						
						
						
						window.draw(scanner_sprite);
						
						window.draw(arrow_sprite);
						


						if (moving && level_change && !(level_reset || level_recet))
						{
											
							Color_Picker(2, karasu, exit_colors);
							
							if (actions % 2 == 1)
							{
							
								Color_Picker(actions/2, karasu, exit_colors);
								
							}
										
							exit_filler = Square_Draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0, 0);
											
							window.draw(exit_filler);
							
										
							pitmask_sprite.setPosition(local_x*squarep, local_y*squarep);
																
							pitmask_sprite.setColor(sf::Color(karasu[0], karasu[1], karasu[2], toransupu));
											
							window.draw(pitmask_sprite);
		
											
						}
						
						if (moving && level_back && !(level_reset || level_recet))
						{
											
							Color_Picker(4, karasu, exit_colors);
							
							if (actions % 2 == 1)
							{
							
								Color_Picker(9, karasu, exit_colors);
								
							}
										
							exit_filler = Square_Draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0, 0);
											
							window.draw(exit_filler);
							
										
							pitmask_sprite.setPosition(local_x*squarep, local_y*squarep);
																
							pitmask_sprite.setColor(sf::Color(karasu[0], karasu[1], karasu[2], toransupu));
											
							window.draw(pitmask_sprite);
		
											
						}
						
						if (dark_setback && !(level_reset || level_recet))
						{
											
							Color_Picker(0, karasu, exit_colors);
							
							if (actions % 2 == 1)
							{
							
								Color_Picker(5, karasu, exit_colors);
								
							}
										
							exit_filler = Square_Draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0, 0);
											
							window.draw(exit_filler);
											
						}
						
						if (view_glitch && !(level_reset || level_recet))
						{
							
							Color_Picker(2, karasu, exit_colors);
							
							intro_filler = Square_Draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, 0, 0);
							
							if (actions % 2 == 1)
							{
								
								Color_Picker(actions/2, karasu, exit_colors);
								
								intro_filler = Square_Draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, 0, 0);
								
							}
											
							window.draw(intro_filler);
							
						}
						
						if (level_reset || level_recet)
						{
							
							Color_Picker(0, karasu, exit_colors);
							
							if ((actions % 2 == 1) && dark_flicker)
							{
							
								Color_Picker(5, karasu, exit_colors);
								
							}
							
							intro_filler = Square_Draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, 0, 0);
							
							window.draw(intro_filler);
							
						}
						
						
												
						window.draw(infobox);
											
						if (one_turn_uplight || two_turn_uplight)
						{
							
							if (key_up_uplight)
							{
									
								key_up_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_right_uplight)
							{
									
								key_right_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_down_uplight)
							{
									
								key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_left_uplight)
							{
									
								key_left_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_down_uplight)
							{
									
								key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_d_uplight)
							{
									
								key_d_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_a_uplight)
							{
									
								key_a_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_w_uplight)
							{
									
								key_w_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_x_uplight)
							{
									
								key_x_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_v_uplight)
							{
									
								key_v_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							if (key_r_uplight)
							{
									
								key_r_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], uplight_transp));
									
							}
							
							// std::cout << actions << " : " << uplight_transp << "\n";
							
						}
						else
						{
							
							key_up_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_right_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_left_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
							key_d_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_a_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
							key_w_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_x_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
							key_v_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							key_r_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							
						}
						
						key_esc_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
							
						
						window.draw(key_up_sprite);						
						window.draw(key_right_sprite);						
						window.draw(key_down_sprite);						
						window.draw(key_left_sprite);
						
						if (turning)
						{
						
							window.draw(key_d_sprite);
							window.draw(key_right_turn_sprite);
							
							window.draw(key_a_sprite);
							window.draw(key_left_turn_sprite);
						
						}
						
						if (exchange)
						{
						
							window.draw(key_w_sprite);
							window.draw(exchange_sprite);
							
						}
							
						if (build)
						{
						
							window.draw(key_x_sprite);
							window.draw(build_sprite);
							
						}
						
						if (timeshift)
						{
							
							window.draw(key_v_sprite);
							window.draw(timeshift_sprite);
							
						}
													
						window.draw(key_r_sprite);
						window.draw(reset_sprite);
						
						window.draw(key_esc_sprite);
						
						window.draw(level_sprite);
						
						window.draw(number_sprite[level]);
						
						
						
						
						
						window.display();
						
						
						
						Color_Picker(level, kolours, exit_colors);
				
						Color_Picker(2, key_colour, exit_colors);
						
						for (int a_sub = 0; a_sub <= 2; a_sub++)
						{
							
							key_colour[a_sub] = 128 + key_colour[a_sub]/2;
							
						}

								
						
						Exit_Multicolor(exit_colors);
												
						if (blink_on)
						{
							
							if (blink < max_transp)
							{
								
								blink = blink + 5;
								
								if (blink > max_transp)
								{
									
									 blink = max_transp;
									
								}
								
							}
							else
							{
								
								blink_on = false;
								
							}		
							
						}
						
						if (!blink_on)
						{
							
							if (blink > 0)
							{
								
								blink = blink - 5;
								
								if (blink < 0)
								{
									
									 blink = 0;
									
								}
								
							}
							else
							{
								
								blink_on = true;
								
								blink = blink + 5;
								
							}		
							
						}
						
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
								
								background_blink = background_blink + 5;
								
							}		
							
						}
													
					}
					
					position_declare = true;
							
				}
				
				view_glitch = false;
				
				level_recet = false;
				
				if (level_reset)
				{
						
					level--;
					
					level_recet = true;
					
					level_change = true;
					
					glitch_excempt = true;
						
				}
				
				level_reset = false;
				
				if (level_back)
				{
					
					level--;
					level--;
					
					level_change = true;
					
					glitch_excempt = true;			
					
				}
				
				level_back = false;
				
				if (two_turn_uplight && !one_turn_uplight)
				{
					
					two_turn_uplight = false;
					
				}
				
				one_turn_uplight = false;
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
				{
						
					// level--;
					
					// level_change = true;
					
					level_reset = true;
					
					one_turn_uplight = true;
					
					two_turn_uplight = true;
					
					key_r_uplight = true;
					
					uplight_transp = -6;
						
				}	
				
				
				if (!two_turn_uplight)
				{
				
					key_up_uplight = false;
					key_right_uplight= false;
					key_down_uplight = false;
					key_left_uplight = false;
			
					key_d_uplight = false;
					key_a_uplight = false;
					
					key_w_uplight = false;
					key_x_uplight = false;
			
					key_r_uplight = false;
					key_v_uplight = false;
				
				}
				
				key_up_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_right_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_down_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_left_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						
				key_d_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_a_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						
				key_w_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_x_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						
				key_v_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				key_r_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
						
				key_esc_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
				
				moving = false;

				turn_right = false;
				turn_left = false;
				
				action = false;
				
				exhale = false;
				
				building = false;
				
				toransupu = max_transp;
				paruto = 1;
				
				if (!inhale)
				{
				
					sukuwarii.setSize(sf::Vector2f(2*squarrel, 2*squarrel));
				
					bitomasuku_supuraito.setScale(sf::Vector2f(1, 1));
					
				}
				
				exit_filler.setScale(1, 1);
				exit_filler.setRotation(0);
				
				pitmask_sprite.setScale(1, 1);
				pitmask_sprite.setRotation(0);
				
				std::this_thread::sleep_for(delay);
				
				
				
				position_declare = false;
				
			}
			
			level_pass++;
			
		}
		
		window.close();
					
		return(0);
		
	}
	
}  
