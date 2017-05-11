#include <iostream>
#include <string>
#include <cmath>
#include <chrono>
#include <thread>
#include <random>

#include <SFML/Graphics.hpp>

#include "Fiboinit.h"
#include "Fiborand.h"
#include "Colorize.h"
#include "Exit_Multicolor.h"
#include "Blinker.h"
#include "Background_Blinker.h"
#include "Color_Picker.h"
#include "Square_Draw.h"
#include "Dark_Maze_PRNG.h"
#include "Clear_Maze_PRNG.h"
#include "Invis_Walls_PRNG.h"
#include "Invis_Maze_PRNG.h"




int main()
{
	
	std::string amazad_var = "Dark Hypersquare V0.43";
	
	int max_level = 100, max_side = 2*max_level + 1, square_matrix[201][201], temp_matrix[201][201];
	
	int size_level = 20, level_side, level_pass = 0, max_view = 6;
	
	int level_max = 35, level_threshold = 16, level_init = 1;
	
	int delaz = 10, delay_flip = 0, coord_a_sub, coord_b_sub;
	
	bool delay_flipping = false;
	
	int crunchy_number = 0, crunched = 0, max_pow = 20;
	
	int dosh = 0, dosh_increase = 0;
	
	bool start_screen = true, testing = false;
	
	bool level_change = false, level_back = false, level_reset = false, level_recet = false;
	
	bool level_begin = false, pause = false, view_glitch = false, glitch_excempt = false;
	
	bool up_movement = false, down_movement = false, right_movement = false, left_movement = false;
	
	bool moving = false, turn_right = false, turn_left = false, roturning = false;
	
	bool action = false, dark_setback = false, dark_flicker = false;
	
	bool dark_backed = false, first_dark_back = false, timecop = false;
	
	bool inhale = false, exhale = false, building = false;
	
	bool turning = false, exchange = false, build = false, timeshift = false;
	
	bool one_turn_uplight = false, two_turn_uplight = false;
	
	bool key_up_uplight = false, key_right_uplight= false, key_down_uplight = false, key_left_uplight = false;
	
	bool key_d_uplight = false, key_a_uplight = false, key_w_uplight = false, key_x_uplight = false;
	
	bool key_r_uplight = false, key_v_uplight = false;

	double inhale_move_x = 0, inhale_move_y = 0;
	
	int absorbed = 0, assimilated = 0, nullvoid = 0;
	
	int transitions = 20;
	
	double pi = 2*acos(0), theta = 0, delta_theta = pi/(2*transitions);
	
	int squarep = 50, window_x = 12*squarep, window_y = 12*squarep, squarrel = 20;
	
	int half_wind = 6*squarep, max_transp = 255, square_transp, bat_transp, full_intensity = 255;
	
	int colours[3], karasu[3], kolours[3], transp, toransupu = max_transp, intro_transp = max_transp;
	
	int color_black[3] = {0, 0, 0}, color_white[3] = {full_intensity, full_intensity, full_intensity}, key_colour[3], background_colour[3], shadow_colours[3];
	
	int uplight_transp;
	
	int pacman = 0;
	
	double dark_transp = 0, dark_mult = 3;
	
	int exit_colors[3] = {full_intensity, 0, 0};
	
	int dir_up[2] = {0, -1}, dir_down[2] = {0, 1}, dir_right[2] = {1, 0}, dir_left[2] = {-1, 0};
	
	int dir_move[2] = {0, 0}, dir_direct[2] = {0, 0};
	
	double dir_mult = 2.5, final_move[2] = {0, 0}, cumu_move[2] = {0, 0};
	
	int rot_right = -1, rot_left = 1;
	
	double rot_mult = 4.5, final_rot = 0, paruto = 1, paruto_sub = 0.05, scale = 1, scale_mult = 1.17, scale_rot = 18;
	
	int turn_right_matrix[2][2] = {0, -1, 1, 0}, turn_left_matrix[2][2] = {0, 1, -1, 0};
	
	double pos_x = 0, pos_y = 0, pos_i = 0, pos_j = 0;
	
	double scan_pos_x = 0, scan_pos_y = -50, level_pot_x, level_pot_y;
	
	int local_x = 0, local_y = -1, pot_x = 0, pot_y = 0, qot_x = 0, qot_y = 0, radius_max_2 = 72;
	
	int delta_flee_x, delta_flee_y;
	
	int possible_triggers = 0, actual_triggers = 0;
	
	int fib_val[3], max_val = 1000000000, fractal = (max_val - 2);
	
	int blink = max_transp, background_blink = 0, blink_min = 32, blink_delta = 4;
	
	bool blink_on = true, background_blink_on = false, position_declare = true;
	
	sf::Vector2i mouse_position;
	
	int mouse_pos_x, mouse_pos_y;
	
	int mouse_pressed = false;
	
	
	int level_loop_counter = 0;
	

	
	double red_candy_frac = 0.50, yellow_candy_frac = 0.10, green_candy_frac = 0.02, blue_candy_frac = 0.005;
	
	double wall_frac = 0.40, dark_frac = 0.1, exit_frac = 0.03;
	
	double candy_frac = red_candy_frac + yellow_candy_frac + green_candy_frac + blue_candy_frac;
	
	bool wall_exist = false, pillars_exist = false, dark_exist = false, exit_exist = false;
	
	bool wall_concrete = false, half_gone = false, zero_wall = false;
	
	int clear_radius = 4;
	
	Fiboinit(fib_val, max_val, fractal);
	
	
	
	
	
	
	
	std::string start_screen_img = "Start_Screen_a.png";
	
	std::string start_shadow_img = "Start_Shadow_a.png";
	
	std::string scanner_img = "A-M4Z2-D_Scanner.png";
	
	std::string arrow_img = "Arrow_Mini.png";
	
	std::string compass_back_img = "Compass_Back_Mini.png";
	
	std::string compass_img = "Compass_Mini.png";
	
	std::string bitmask_img = "Bit_Mask_40e.png";
	
	std::string bitsquare_img = "Bit_Square_40e.png";
	
	std::string bitshadow_img = "Bit_Shadow_40--e.png";
	
	std::string bitshine_img = "Bit_Shine_40e.png";

	
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
	
	std::string bitmask_key_s_file = "Key_S_Icon.png";
	
	std::string bitmask_level_file = "L3V3L_Icon.png";
	
	int number_max = 11;
	
	std::string bitmask_number_file[number_max];
	
		
	bitmask_number_file[0] = "Number_0_Icon.png";
	bitmask_number_file[1] = "Number_1_Icon.png";
	bitmask_number_file[2] = "Number_2_Icon.png";	
	bitmask_number_file[3] = "Number_3_Icon.png";
	bitmask_number_file[4] = "Number_4_Icon.png";
	bitmask_number_file[5] = "Number_5_Icon.png";
	bitmask_number_file[6] = "Number_6_Icon.png";
	bitmask_number_file[7] = "Number_7_Icon.png";
	bitmask_number_file[8] = "Number_8_Icon.png";
	bitmask_number_file[9] = "Number_9_Icon.png";
	
	bitmask_number_file[10] = "Number_Minus_Icon.png";
	
	std::string bitmask_dollar_file = "Number_Dollar_Icon.png";
	
	
	
	sf::Texture start_screen_tex;
	
	if (!start_screen_tex.loadFromFile(start_screen_img))
	{
			
		std::cout << start_screen_img << " not found!\n";
			
	}
	
	sf::Sprite start_screen_sprite;
	start_screen_sprite.setTexture(start_screen_tex);
	
	start_screen_sprite.setOrigin(sf::Vector2f(half_wind, half_wind));
	
	start_screen_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	start_screen_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
	
	
	int shadow_blink = 0;
	
	bool shadow_blink_up = true;
	
	
	sf::Texture start_shadow_tex;
	
	if (!start_shadow_tex.loadFromFile(start_shadow_img))
	{
			
		std::cout << start_shadow_img << " not found!\n";
			
	}
	
	sf::Sprite start_shadow_sprite;
	start_shadow_sprite.setTexture(start_shadow_tex);
	
	start_shadow_sprite.setOrigin(sf::Vector2f(half_wind, half_wind));
	
	start_shadow_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	start_shadow_sprite.setColor(sf::Color(0, 0, 0, max_transp));
	
	
	
	
	
	
	sf::Texture scanner_tex;
	
	if (!scanner_tex.loadFromFile(scanner_img))
	{
			
		std::cout << scanner_img << " not found!\n";
			
	}
	
	sf::Sprite scanner_sprite;
	scanner_sprite.setTexture(scanner_tex);
	
	scanner_sprite.setOrigin(sf::Vector2f(half_wind, half_wind));
	
	scanner_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	scanner_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, 1*max_transp));


	sf::VertexArray squanner(sf::Quads, 4);
	
	squanner[0].position = sf::Vector2f(-half_wind, -half_wind);
	squanner[0].color = sf::Color(full_intensity, full_intensity, full_intensity, max_transp);
									
	squanner[1].position = sf::Vector2f(half_wind, -half_wind);
	squanner[1].color = sf::Color(full_intensity, full_intensity, full_intensity, max_transp);
								
	squanner[2].position = sf::Vector2f(half_wind, half_wind);
	squanner[2].color = sf::Color(full_intensity, full_intensity, full_intensity, max_transp);
									
	squanner[3].position = sf::Vector2f(-half_wind, half_wind);
	squanner[3].color = sf::Color(full_intensity, full_intensity, full_intensity, max_transp);
	
	squanner[0].texCoords = sf::Vector2f(0, 0);
	squanner[1].texCoords = sf::Vector2f(2*half_wind, 0);
	squanner[2].texCoords = sf::Vector2f(2*half_wind, 2*half_wind);
	squanner[3].texCoords = sf::Vector2f(0, 2*half_wind);
	
	
	
	sf::Texture compass_back_tex;
	
	if (!compass_back_tex.loadFromFile(compass_back_img))
	{
			
		std::cout << compass_back_img << " not found!\n";
			
	}
	
	sf::Sprite compass_back_sprite;
	compass_back_sprite.setTexture(compass_back_tex);
	
	compass_back_sprite.setOrigin(sf::Vector2f(12, 12));
	
	compass_back_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	sf::Texture compass_tex;
	
	if (!compass_tex.loadFromFile(compass_img))
	{
			
		std::cout << compass_img << " not found!\n";
			
	}
	
	sf::Sprite compass_sprite;
	compass_sprite.setTexture(compass_tex);
	
	compass_sprite.setOrigin(sf::Vector2f(12, 12));
	
	compass_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	sf::Texture arrow_tex;
	
	if (!arrow_tex.loadFromFile(arrow_img))
	{
			
		std::cout << arrow_img << " not found!\n";
			
	}
	
	sf::Sprite arrow_sprite;
	arrow_sprite.setTexture(arrow_tex);
	
	arrow_sprite.setOrigin(sf::Vector2f(12, 12));
	
	arrow_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	
	
	
	sf::Texture bitmask_tex;
	
	if (!bitmask_tex.loadFromFile(bitmask_img))
	{
			
		std::cout << bitmask_img << " not found!\n";
			
	}
	
	sf::Sprite bitmask_sprite;
	bitmask_sprite.setTexture(bitmask_tex);
	
	bitmask_sprite.setOrigin(sf::Vector2f(25, 25));
	
	bitmask_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	
	sf::Texture bitsquare_tex;
	
	if (!bitsquare_tex.loadFromFile(bitsquare_img))
	{
			
		std::cout << bitsquare_img << " not found!\n";
			
	}
	
	sf::Sprite bitsquare_sprite;
	bitsquare_sprite.setTexture(bitsquare_tex);
	
	bitsquare_sprite.setOrigin(sf::Vector2f(25, 25));
	
	bitsquare_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	
	sf::Texture bitshadow_tex;
	
	if (!bitshadow_tex.loadFromFile(bitshadow_img))
	{
			
		std::cout << bitshadow_img << " not found!\n";
			
	}
	
	sf::Sprite bitshadow_sprite;
	bitshadow_sprite.setTexture(bitshadow_tex);
	
	bitshadow_sprite.setOrigin(sf::Vector2f(25, 25));
	
	bitshadow_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	
	
	sf::Texture bitshine_tex;
	
	if (!bitshine_tex.loadFromFile(bitshine_img))
	{
			
		std::cout << bitshine_img << " not found!\n";
			
	}
	
	sf::Sprite bitshine_sprite;
	bitshine_sprite.setTexture(bitshine_tex);
	
	bitshine_sprite.setOrigin(sf::Vector2f(25, 25));
	
	bitshine_sprite.setPosition(sf::Vector2f(0, 0));
	
	
	
	
	
	sf::Sprite bitomasuku_supuraito;
	bitomasuku_supuraito.setTexture(bitmask_tex);
	
	bitomasuku_supuraito.setOrigin(sf::Vector2f(25, 25));
	
	bitomasuku_supuraito.setPosition(sf::Vector2f(0, 0));
	
	
	
	sf::Sprite pitmask_sprite;
	pitmask_sprite.setTexture(bitmask_tex);
	
	pitmask_sprite.setOrigin(sf::Vector2f(25, 25));
	
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
	
	
	
	
	
	sf::Texture bitmask_key_s;
	
	if (!bitmask_key_s.loadFromFile(bitmask_key_s_file))
	{
			
		std::cout << bitmask_key_s_file << " not found!\n";
			
	}
	
	sf::Sprite key_s_sprite;
	key_s_sprite.setTexture(bitmask_key_s);
	
	key_s_sprite.setOrigin(sf::Vector2f(0.5*squarep, -3.5*squarep));
	
	key_s_sprite.setPosition(sf::Vector2f(0, -squarep));
	
	
	
	
	sf::Texture bitmask_level;	
	
	if (!bitmask_level.loadFromFile(bitmask_level_file))
	{
			
		std::cout << bitmask_level_file << " not found!\n";
			
	}
	
	sf::Sprite level_sprite[max_pow + 1];
	
	for (int b_sub = 0; b_sub <= max_pow; b_sub++)
	{
	
		level_sprite[b_sub].setTexture(bitmask_level);
		
		level_sprite[b_sub].setOrigin(sf::Vector2f(-4.5*squarep + (b_sub + 1)*18, 5.5*squarep));
		
		level_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
		
	}
	
	
	
	
	sf::Texture bitmask_number[number_max];
	
	for (int a_sub = 0; a_sub < number_max; a_sub++)
	{
	
		if (!bitmask_number[a_sub].loadFromFile(bitmask_number_file[a_sub]))
		{
				
			std::cout << bitmask_number_file[a_sub] << " not found!\n";
				
		}

	}
	
	sf::Sprite number_sprite[number_max][max_pow + 1];
	
	for (int a_sub = 0; a_sub < number_max; a_sub++)
	{
		
		for (int b_sub = 0; b_sub <= max_pow; b_sub++)
		{

		
			number_sprite[a_sub][b_sub].setTexture(bitmask_number[a_sub]);
		
			number_sprite[a_sub][b_sub].setOrigin(sf::Vector2f(-4.5*squarep + (b_sub - 2)*18, 5.5*squarep + 1));
		
			number_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
			
		}
	
	}
	
	
	sf::Texture bitmask_dollar;	
	
	if (!bitmask_dollar.loadFromFile(bitmask_dollar_file))
	{
			
		std::cout << bitmask_dollar_file << " not found!\n";
			
	}
	
	sf::Sprite dollar_sprite[max_pow + 1];
	
	for (int b_sub = 0; b_sub <= max_pow; b_sub++)
	{
	
		dollar_sprite[b_sub].setTexture(bitmask_dollar);
		
		dollar_sprite[b_sub].setOrigin(sf::Vector2f(-4.5*squarep + (b_sub + 0)*18, -1.5*squarep));
		
		dollar_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
		
	}
	
	
	
	sf::Sprite dosh_sprite[number_max][max_pow + 1];
	
	for (int a_sub = 0; a_sub < number_max; a_sub++)
	{
	
		for (int b_sub = 0; b_sub <= max_pow; b_sub++)
		{

		
			dosh_sprite[a_sub][b_sub].setTexture(bitmask_number[a_sub]);
		
			dosh_sprite[a_sub][b_sub].setOrigin(sf::Vector2f(-4.5*squarep + (b_sub - 2)*18, -1.5*squarep + 1));
		
			dosh_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
			
		}
	
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
	
	infobox = Square_Draw(infobox, color_black, 1*max_transp, 0, -squarep, 0, 0);
	
	
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
	
	
	
	int outro = 255;
	
	
	
	while (window.isOpen())
    {
		
		key_s_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], 0));
			
		start_shadow_sprite.setColor(sf::Color(0, 0, 0, background_blink/4));
		
		start_screen_sprite.setColor(sf::Color(0, 0, 0, max_transp));
	
		for (int b_sub = 1; b_sub <= 255; b_sub = b_sub + 2)
		{
			
			window.clear(sf::Color(color_black[0], color_black[1], color_black[2]));
			
			window.draw(start_shadow_sprite);
			
			window.draw(start_screen_sprite);
			
			
			
			// window.draw(key_esc_sprite);
			
			window.draw(key_s_sprite);
			
			
			window.display();
			
			key_s_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], b_sub));
			
			start_shadow_sprite.setColor(sf::Color(b_sub, b_sub, b_sub, background_blink));
			
			start_screen_sprite.setColor(sf::Color(b_sub, b_sub, b_sub, max_transp));
			
			
			Color_Picker(2, key_colour, exit_colors);
					
			for (int a_sub = 0; a_sub <= 2; a_sub++)
			{
						
				key_colour[a_sub] = 128 + key_colour[a_sub]/2;
						
			}
					
					
					
			Exit_Multicolor(exit_colors);
			
			Background_Blinker(background_blink_on, background_blink, max_transp);
			
			
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
					
				mouse_position = sf::Mouse::getPosition(window);
				
				mouse_pos_x = mouse_position.x;
				
				mouse_pos_y = mouse_position.y;
													
				mouse_pressed = true;
			
			}
			
			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ||
				(mouse_pressed && (mouse_pos_x > 275) && (mouse_pos_x < 325) &&
				(mouse_pos_y > 475) && (mouse_pos_y < 525)))
			{
						
				start_screen = false;
				
				sf::Mouse::setPosition(sf::Vector2i(half_wind, half_wind), window);
				
				mouse_pressed = false;
				
				outro = b_sub;
				
				b_sub = 255;
						
			}
			
			std::this_thread::sleep_for(delay);
			
			
			
		}
		
		
		while (start_screen)
		{
			
			window.clear(sf::Color(color_black[0], color_black[1], color_black[2]));
			
			window.draw(start_shadow_sprite);
			
			window.draw(start_screen_sprite);
			
			
			
			// window.draw(key_esc_sprite);
			
			window.draw(key_s_sprite);
			
			
			window.display();
			
			key_s_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
			
			start_shadow_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, background_blink));
			
			start_screen_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
			
			Color_Picker(2, key_colour, exit_colors);
					
			for (int a_sub = 0; a_sub <= 2; a_sub++)
			{
						
				key_colour[a_sub] = 128 + key_colour[a_sub]/2;
						
			}
					
					
					
			Exit_Multicolor(exit_colors);
			
			Background_Blinker(background_blink_on, background_blink, max_transp);
			
			
			
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
					
				mouse_position = sf::Mouse::getPosition(window);
				
				mouse_pos_x = mouse_position.x;
				
				mouse_pos_y = mouse_position.y;
													
				mouse_pressed = true;
			
			}
			
			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ||
				(mouse_pressed && (mouse_pos_x > 275) && (mouse_pos_x < 325) &&
				(mouse_pos_y > 475) && (mouse_pos_y < 525)))
			{
						
				start_screen = false;
				
				sf::Mouse::setPosition(sf::Vector2i(half_wind, half_wind), window);
				
				mouse_pressed = false;
						
			}
			
			std::this_thread::sleep_for(delay);
			
		}
		
		
		
		for (int b_sub = outro; b_sub >= 0; b_sub = b_sub - 2)
		{
			
			if (b_sub < 0)
			{
				
				b_sub = 0;
				
			}
			
			window.clear(sf::Color(color_black[0], color_black[1], color_black[2]));
			
			window.draw(start_shadow_sprite);
			
			window.draw(start_screen_sprite);
			
			
			
			// window.draw(key_esc_sprite);
			
			window.draw(key_s_sprite);
			
			
			window.display();
			
			key_s_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], b_sub));
			
			start_shadow_sprite.setColor(sf::Color(b_sub, b_sub, b_sub, background_blink));
			
			start_screen_sprite.setColor(sf::Color(b_sub, b_sub, b_sub, max_transp));
			
			
			Color_Picker(2, key_colour, exit_colors);
					
			for (int a_sub = 0; a_sub <= 2; a_sub++)
			{
						
				key_colour[a_sub] = 128 + key_colour[a_sub]/2;
						
			}
					
					
					
			Exit_Multicolor(exit_colors);
			
			Background_Blinker(background_blink_on, background_blink, max_transp);
			
			
			
			std::this_thread::sleep_for(delay);
			
			
		}
		
		
		
		for (int level = level_init; level <= level_max; level++)
		{

			level_change = false;
			
			if (level < level_threshold)
			{
				
				size_level = 5;
				
			}
			
			if (level >= level_threshold)
			{
				
				size_level = level;
				
			}
			
			level_side = 2*size_level + 1;
			
			
			
			for (int a_sub = -max_level; a_sub <= max_level; a_sub++)
			{
				
				for (int b_sub = -max_level; b_sub <= max_level; b_sub++)
				{
						
					square_matrix[a_sub + max_level][b_sub + max_level] = 1;
				
				}
				
			}
					

			
			if (level < level_threshold)
			{
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
				
					for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
					{
						
						square_matrix[a_sub + max_level][b_sub + max_level] = 1;
						
						if (level <= 8)
						{
							
							square_matrix[a_sub + max_level][b_sub + max_level] = 10;
							
							if (testing)
							{
								
								square_matrix[a_sub + max_level][b_sub + max_level] = 6;
								
							}
						
						}
				
					}
					
				}
				
			}
			
			
			if (level >= level_threshold)
			{
				
				wall_frac = 0.3 + level/100;
				
				dark_frac = 0.1;
				
				exit_frac = 0.3/level;
	
				wall_exist = false;
				
				pillars_exist = false;
				
				dark_exist = false;
				
				exit_exist = false;
				
				half_gone = false;
				
				zero_wall = false;
				
				
				if (level == 16)
				{
					
					wall_exist = true;
				
					zero_wall = true;
					
				}
				
				if (level == 17)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					zero_wall = true;
					
				}
				
				if (level == 18)
				{
					
					wall_exist = true;
				
					wall_concrete = true;
				
					zero_wall = true;
					
				}
				
				if (level == 19)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					zero_wall = true;
					
				}
				
				if (level == 20)
				{
					
					wall_exist = true;
					
					wall_concrete = true;
				
					dark_exist = true;
				
					zero_wall = true;
					
				}
				
				if (level == 21)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
					zero_wall = true;
					
				}
				
				
				if (level == 22)
				{
					
					pillars_exist = true;
				
					wall_concrete = true;
										
					dark_exist = true;
					
					exit_exist = true;
					
					half_gone = true;
					
				}
				
				
				if (level == 23)
				{
										
					pillars_exist = true;
					
					wall_exist = true;
					
					wall_concrete = true;
					
					exit_exist = true;
					
					dark_exist = true;
					
					half_gone = true;
					
				}
				
				if (level == 24)
				{

					wall_concrete = true;
					
					dark_exist = true;
					
				}
				
				if (level == 25)
				{

					wall_concrete = true;
					
					dark_exist = true;
					
					exit_exist = true;
					
				}
				
				if (level == 28)
				{

					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
					half_gone = true;

				}
				
				if (level == 30)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					zero_wall = true;
					
				}
				
				if (level == 31)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
					zero_wall = true;
					
				}
				
				if (level == 32)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
					zero_wall = true;
					
				}
				
				if (level == 33)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
				}
								
				if (level == 34)
				{
					
					wall_exist = true;
				
					pillars_exist = true;
					
					wall_concrete = true;
					
					dark_exist = true;
					
				}
				
				if (level == 35)
				{
				
					pillars_exist = true;
					
					wall_concrete = true;
					
				}

				Dark_Maze_PRNG(square_matrix, max_level, size_level, clear_radius,
								half_gone, pillars_exist, wall_exist, zero_wall, wall_concrete, exit_exist, dark_exist,
								fib_val, max_val, fractal, wall_frac, dark_frac, exit_frac,
								candy_frac, red_candy_frac, yellow_candy_frac, green_candy_frac, blue_candy_frac);
								
				if (level == 26)
				{

					Clear_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 27)
				{

					Clear_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 28)
				{

					Clear_Maze_PRNG(square_matrix, max_level, size_level/2 + 2);
										
				}
				
				if (level == 29)
				{

					Clear_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 30)
				{

					Invis_Walls_PRNG(square_matrix, max_level, size_level);
										
				}
				
				
				if (level == 31)
				{

					Invis_Walls_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 32)
				{

					square_matrix[max_level][max_level + 1] = 1;

					Invis_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 33)
				{

					Invis_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 34)
				{

					Invis_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
				if (level == 35)
				{

					Clear_Maze_PRNG(square_matrix, max_level, size_level);
										
				}
				
			
			}
			
			
			
			if (level == 1)
			{
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level][a_sub + max_level] = 0;
					
				}
				

			}
			
			if (testing && (level >= 2) && (level <= level_threshold) && false)
			{
				
				for (int a_sub = -2; a_sub <= 2; a_sub++)
				{
					
					// square_matrix[max_level - 2][a_sub + max_level] = 4;
					
					
					
					// square_matrix[max_level - 4][a_sub + max_level] = 1;
					
					// square_matrix[max_level + 4][a_sub + max_level] = 10;
					
					
					
				}
				
				
				
				for (int a_sub = 2; a_sub <= size_level; a_sub++)
				{


					for (int b_sub = -3; b_sub <= 1; b_sub++)
					{
						
						square_matrix[max_level + a_sub][max_level + b_sub] = 3;
						
						square_matrix[max_level - a_sub][max_level + b_sub] = 3;
						
						
					}
					
				}
				
			}
			
			
			if ((level == 2) && !testing)
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
			
			if (level == 3)
			{
				
				
				// up
				for (int a_sub = -size_level; a_sub <= 1; a_sub++)
				{
					
					square_matrix[max_level][a_sub + max_level] = 0;
					
				}
				
				// left
				for (int a_sub = -size_level; a_sub <= 0; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-size_level + max_level] = 0;
					
				}
				
				// up
				for (int a_sub = 2; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[-size_level + max_level][a_sub + max_level] = 0;
					
				}
				
								
				// left
				for (int a_sub = 0; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[a_sub + max_level][2 + max_level] = 0;
					
				}
				
				
			}
			
			if (level == 4)
			{
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level][a_sub + max_level] = 0;
					
				}

			}
			
			if (level == 5)
			{
				
				square_matrix[+ max_level][-1 + max_level] = 0;
				
				// left
				
				for (int a_sub = -2; a_sub <= 0; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-2 + max_level] = 0;
					
				}
				
				//down
				
				for (int a_sub = -2; a_sub <= 4; a_sub++)
				{
					
					square_matrix[-2 + max_level][a_sub + max_level] = 0;
					
				}
				
				// right
				
				for (int a_sub = -2; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[a_sub + max_level][4 + max_level] = 0;
					
				}
				
				square_matrix[size_level + max_level][2 + max_level] = 0;
				
				square_matrix[size_level + max_level][0 + max_level] = 0;
				
				square_matrix[size_level + max_level][-2 + max_level] = 0;
				
				square_matrix[size_level + max_level][-4 + max_level] = 0;
				
				
				square_matrix[-size_level + max_level][4 + max_level] = 0;
				
				square_matrix[-size_level + max_level][2 + max_level] = 0;
				
				square_matrix[-size_level + max_level][0 + max_level] = 0;
				
				square_matrix[-size_level + max_level][-2 + max_level] = 0;
				
				
				
				for (int a_sub = 2; a_sub <= 4; a_sub++)
				{
					
					square_matrix[-4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = 0; a_sub <= 2; a_sub++)
				{
					
					square_matrix[4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = -2; a_sub <= 0; a_sub++)
				{
					
					square_matrix[-4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = -4; a_sub <= -2; a_sub++)
				{
					
					square_matrix[4 + max_level][a_sub + max_level] = 0;
					
				}
				
				// right
				
				for (int a_sub = -size_level; a_sub <= 2; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-4 + max_level] = 0;
					
				}
				
				//down
				
				for (int a_sub = -4; a_sub <= 2; a_sub++)
				{
					
					square_matrix[2 + max_level][a_sub + max_level] = 0;
					
				}
				
				square_matrix[1 + max_level][2 + max_level] = 0;
				
				square_matrix[max_level][2 + max_level] = 0;
				
				square_matrix[max_level][max_level + 1] = 2;
				

			}
			
			if (level == 6)
			{
				
				square_matrix[+ max_level][-1 + max_level] = 0;
				
				// left
				
				for (int a_sub = 0; a_sub <= 2; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-2 + max_level] = 0;
					
				}
				
				//down
				
				for (int a_sub = -2; a_sub <= 4; a_sub++)
				{
					
					square_matrix[2 + max_level][a_sub + max_level] = 0;
					
				}
				
				// right
				
				for (int a_sub = -size_level; a_sub <= 2; a_sub++)
				{
					
					square_matrix[a_sub + max_level][4 + max_level] = 0;
					
				}
				
				square_matrix[-size_level + max_level][2 + max_level] = 0;
				
				square_matrix[-size_level + max_level][0 + max_level] = 0;
				
				square_matrix[-size_level + max_level][-2 + max_level] = 0;
				
				square_matrix[-size_level + max_level][-4 + max_level] = 0;
				
				
				square_matrix[size_level + max_level][4 + max_level] = 0;
				
				square_matrix[size_level + max_level][2 + max_level] = 0;
				
				square_matrix[size_level + max_level][0 + max_level] = 0;
				
				square_matrix[size_level + max_level][-2 + max_level] = 0;
				
				
				
				for (int a_sub = 2; a_sub <= 4; a_sub++)
				{
					
					square_matrix[4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = 0; a_sub <= 2; a_sub++)
				{
					
					square_matrix[-4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = -2; a_sub <= 0; a_sub++)
				{
					
					square_matrix[4 + max_level][a_sub + max_level] = 0;
					
				}
				
				for (int a_sub = -4; a_sub <= -2; a_sub++)
				{
					
					square_matrix[-4 + max_level][a_sub + max_level] = 0;
					
				}
				
				// right
				
				for (int a_sub = -2; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-4 + max_level] = 0;
					
				}
				
				//down
				
				for (int a_sub = -4; a_sub <= 2; a_sub++)
				{
					
					square_matrix[-2 + max_level][a_sub + max_level] = 0;
					
				}
				
				square_matrix[-1 + max_level][2 + max_level] = 0;
				
				square_matrix[max_level][2 + max_level] = 0;
				
				square_matrix[max_level][max_level + 1] = 2;
				

			}
			
			if (level == 7)
			{
				
				// y = -1, 1
				
				for (int a_sub = -1; a_sub <= 1; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level - 1] = 0;
					
					square_matrix[max_level + a_sub][max_level + 1] = 0;
					
				}
				
				// y = 0
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level] = 0;
					
				}
				
				// y = -2, 2
				
				for (int a_sub = 2; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-2 + max_level] = 0;
					
					square_matrix[-a_sub + max_level][-2 + max_level] = 0;
					
					square_matrix[a_sub + max_level][2 + max_level] = 0;
					
					square_matrix[-a_sub + max_level][2 + max_level] = 0;
					
				}
				
				square_matrix[max_level][-2 + max_level] = 0;
					
				square_matrix[max_level][2 + max_level] = 0;
				
				// y = -3, 3
				
				for (int a_sub = -2; a_sub <= 2; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-3 + max_level] = 0;
					
					square_matrix[a_sub + max_level][3 + max_level] = 0;
					
				}
								
				// y = -4, 4
				
				for (int a_sub = -size_level; a_sub <= -3; a_sub++)
				{
					
					square_matrix[a_sub + max_level][-4 + max_level] = 0;
					
					square_matrix[a_sub + max_level][4 + max_level] = 0;
					
				}
				
				square_matrix[-3 + max_level][-size_level + max_level] = 0;
					
				square_matrix[-3 + max_level][size_level + max_level] = 0;
				
				// c = -1, 1
				
				for (int a_sub = 4; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[-1 + max_level][a_sub + max_level] = 0;
					
					square_matrix[1 + max_level][a_sub + max_level] = 0;
					
					square_matrix[-1 + max_level][-a_sub + max_level] = 0;
					
					square_matrix[1 + max_level][-a_sub + max_level] = 0;
					
				}
				
				square_matrix[4 + max_level][-3 + max_level] = 0;
				
				square_matrix[4 + max_level][-4 + max_level] = 0;
				
				square_matrix[3 + max_level][-4 + max_level] = 0;
				
				square_matrix[3 + max_level][-size_level + max_level] = 0;
				
				
				square_matrix[5 + max_level][4 + max_level] = 0;
				
				square_matrix[4 + max_level][4 + max_level] = 0;
				
				square_matrix[4 + max_level][size_level + max_level] = 0;
				
				square_matrix[3 + max_level][size_level + max_level] = 0;
				
				
				
				
				square_matrix[max_level - size_level][max_level - size_level] = 2;
				

			}
			
			if (level == 8)
			{
				
				// vertical
				
				for (int a_sub = -4; a_sub <= 4; a_sub++)
				{
					
					square_matrix[max_level][max_level + a_sub] = 0;
					
					square_matrix[max_level - 4][max_level + a_sub] = 0;
					
				}
				
				// horizontal
				
				for (int a_sub = 0; a_sub <= 4; a_sub++)
				{
					
					square_matrix[max_level - a_sub][max_level - 4] = 0;
					
					square_matrix[max_level + a_sub][max_level + 4] = 0;
					
				}
				
				square_matrix[max_level + size_level][max_level + 4] = 0;
				
				square_matrix[max_level - size_level][max_level + 4] = 0;
				
				square_matrix[max_level - 4][max_level] = 10;
				
				square_matrix[max_level][max_level + 1] = 2;
				
			}
			
			if (level == 9)
			{
				
				// vertical
				
				for (int a_sub = -4; a_sub <= 4; a_sub++)
				{
					
					square_matrix[max_level][max_level + a_sub] = 0;
					
					square_matrix[max_level + 4][max_level + a_sub] = 0;
					
				}
				
				// horizontal
				
				for (int a_sub = 0; a_sub <= 4; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level - 4] = 0;
					
					square_matrix[max_level - a_sub][max_level + 4] = 0;
					
				}
				
				square_matrix[max_level + size_level][max_level + 4] = 0;
				
				square_matrix[max_level - size_level][max_level + 4] = 0;
				
				square_matrix[max_level + 4][max_level] = 10;
				
				square_matrix[max_level][max_level + 1] = 2;
				
			}
			
			if (level == 10)
			{
				
				// cross
				
				for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level][max_level + a_sub] = 0;
					
					square_matrix[max_level + a_sub][max_level] = 0;
					
				}
								
				square_matrix[max_level + 1][max_level + 1] = 0;
				square_matrix[max_level - 1][max_level + 1] = 0;
				square_matrix[max_level + 1][max_level - 1] = 0;
				square_matrix[max_level - 1][max_level - 1] = 0;
				
			}
			
			if (level == 11)
			{
				
				// cross
				
				for (int a_sub = 1; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level - a_sub][max_level + 1] = 0;
					
					square_matrix[max_level - a_sub][max_level + 2] = 0;
					
					square_matrix[max_level - a_sub][max_level + 4] = 0;
					
					square_matrix[max_level - a_sub][max_level - 1] = 0;
					
					square_matrix[max_level - a_sub][max_level - 3] = 0;
					
					square_matrix[max_level - a_sub][max_level - 5] = 0;
					
					
					square_matrix[max_level + a_sub][max_level + 1] = 0;					
					
					square_matrix[max_level + a_sub][max_level + 4] = 0;
					
					square_matrix[max_level + a_sub][max_level - 1] = 0;
					
					square_matrix[max_level + a_sub][max_level - 3] = 0;
					
					square_matrix[max_level + a_sub][max_level - 5] = 0;
					
					
					
					square_matrix[max_level + 1][max_level + a_sub] = 1;
					
					square_matrix[max_level + a_sub][max_level + 2] = 0;
					
					square_matrix[max_level + 1][max_level - a_sub] = 1;
							
				}
								
				square_matrix[max_level][max_level - 1] = 0;
				
				square_matrix[max_level + 2][max_level - 2] = 0;
				
				square_matrix[max_level][max_level - 3] = 0;
				
				square_matrix[max_level][max_level - 4] = 0;
				
				square_matrix[max_level][max_level - 5] = 0;
				
				square_matrix[max_level + 2][max_level + 5] = 0;
				
				square_matrix[max_level + 1][max_level + 2] = 0;
				
				square_matrix[max_level - 2][max_level + 3] = 0;
				
				
				
				
				square_matrix[max_level - 4][max_level + 2] = 1;
			
				square_matrix[max_level - 3][max_level + 2] = 1;
				
				square_matrix[max_level - 1][max_level + 2] = 1;
				
				square_matrix[max_level + 3][max_level + 2] = 1;
				
				
				
				square_matrix[max_level - 1][max_level + 1] = 1;
					
				square_matrix[max_level + 5][max_level + 1] = 1;
				
				
				
				square_matrix[max_level + 3][max_level - 5] = 3;
				
				square_matrix[max_level - 2][max_level - 3] = 3;
				
				square_matrix[max_level - 2][max_level + 1] = 3;
				
				square_matrix[max_level + 4][max_level + 1] = 3;
				
				square_matrix[max_level - 4][max_level + 4] = 3;
				
				
				
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			if (level == 12)
			{
				
				// cross
				
				for (int a_sub = 1; a_sub <= size_level; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level + 1] = 0;
					
					square_matrix[max_level + a_sub][max_level + 2] = 0;
					
					square_matrix[max_level + a_sub][max_level + 4] = 0;
					
					square_matrix[max_level + a_sub][max_level - 1] = 0;
					
					square_matrix[max_level + a_sub][max_level - 3] = 0;
					
					square_matrix[max_level + a_sub][max_level - 5] = 0;
					
					
					square_matrix[max_level - a_sub][max_level + 1] = 0;					
					
					square_matrix[max_level - a_sub][max_level + 4] = 0;
					
					square_matrix[max_level - a_sub][max_level - 1] = 0;
					
					square_matrix[max_level - a_sub][max_level - 3] = 0;
					
					square_matrix[max_level - a_sub][max_level - 5] = 0;
					
					
					
					square_matrix[max_level - 1][max_level + a_sub] = 1;
					
					square_matrix[max_level - a_sub][max_level + 2] = 0;
					
					square_matrix[max_level - 1][max_level - a_sub] = 1;
							
				}
								
				square_matrix[max_level][max_level - 1] = 0;
				
				square_matrix[max_level - 2][max_level - 2] = 0;
				
				square_matrix[max_level][max_level - 3] = 0;
				
				square_matrix[max_level][max_level - 4] = 0;
				
				square_matrix[max_level][max_level - 5] = 0;
				
				square_matrix[max_level - 2][max_level + 5] = 0;
				
				square_matrix[max_level - 1][max_level + 2] = 0;
				
				square_matrix[max_level + 2][max_level + 3] = 0;
				
				
				
				
				square_matrix[max_level + 4][max_level + 2] = 1;
			
				square_matrix[max_level + 3][max_level + 2] = 1;
				
				square_matrix[max_level + 1][max_level + 2] = 1;
				
				square_matrix[max_level - 3][max_level + 2] = 1;
				
				
				
				square_matrix[max_level + 1][max_level + 1] = 1;
					
				square_matrix[max_level - 5][max_level + 1] = 1;
				
				
				
				square_matrix[max_level - 4][max_level - 5] = 3;
				
				square_matrix[max_level + 2][max_level - 3] = 3;
				
				square_matrix[max_level + 2][max_level + 2] = 3;
				
				square_matrix[max_level - 2][max_level + 1] = 3;
				
				square_matrix[max_level + 4][max_level + 4] = 3;
				
				
				
				square_matrix[max_level + 1][max_level - 1] = 5;
				
				square_matrix[max_level + 3][max_level - 1] = 5;
				
				square_matrix[max_level + 5][max_level - 1] = 5;
				
				square_matrix[max_level - 4][max_level - 1] = 5;
				
				square_matrix[max_level - 2][max_level - 1] = 5;
				
				
				
				square_matrix[max_level - 4][max_level - 3] = 5;
				
				square_matrix[max_level + 5][max_level - 3] = 5;
				
				square_matrix[max_level + 3][max_level - 3] = 5;
				
				square_matrix[max_level + 1][max_level - 3] = 5;
				
				
				
				square_matrix[max_level + 1][max_level - 5] = 5;
				
				square_matrix[max_level + 4][max_level - 5] = 5;
				
				square_matrix[max_level - 5][max_level - 5] = 5;
				
				square_matrix[max_level - 2][max_level - 5] = 5;
				
				
				square_matrix[max_level - 2][max_level + 4] = 5;
				
				square_matrix[max_level - 5][max_level + 4] = 5;
				
				square_matrix[max_level + 3][max_level + 4] = 5;
				
			
			
				square_matrix[max_level + 2][max_level + 1] = 5;
				
				square_matrix[max_level + 5][max_level + 1] = 5;
				
				square_matrix[max_level - 3][max_level + 1] = 5;
				
				square_matrix[max_level - 4][max_level + 2] = 5;
				
				
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			if (level == 13)
			{
				
				square_matrix[max_level][max_level - 1] = 0;
				
				for (int a_sub = -5; a_sub <= 5; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level - 2] = 0;
					
					square_matrix[max_level + a_sub][max_level + 5] = 0;
					
				}
				
				for (int a_sub = 3; a_sub <= 5; a_sub++)
				{
					
					square_matrix[max_level - 4][max_level - a_sub] = 0;
					
					square_matrix[max_level - 2][max_level - a_sub] = 0;
					
					square_matrix[max_level][max_level - a_sub] = 0;
					
					square_matrix[max_level + 2][max_level - a_sub] = 0;
					
					square_matrix[max_level + 4][max_level - a_sub] = 0;
					
					square_matrix[max_level - a_sub][max_level] = 0;
					
					square_matrix[max_level + a_sub][max_level] = 0;
					
				}
				
				for (int a_sub = -1; a_sub <= 1; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level + 3] = 0;
					
				}
				
				for (int a_sub = 0; a_sub <= 3; a_sub++)
				{
					
					square_matrix[max_level - 2][max_level + a_sub] = 0;
					
					square_matrix[max_level + 2][max_level + a_sub] = 0;
					
					square_matrix[max_level - 4][max_level + a_sub + 1] = 0;
					
					square_matrix[max_level + 4][max_level + a_sub + 1] = 0;
					
				}
				
				for (int a_sub = -4; a_sub <= 4; a_sub = a_sub + 2)
				{
					
					square_matrix[max_level + a_sub][max_level - 5] = 3;
					
					square_matrix[max_level + a_sub][max_level - 3] = 3;
					
					square_matrix[max_level + a_sub][max_level] = 3;
					
					square_matrix[max_level + a_sub][max_level + 5] = 3;
					
				}
				
				square_matrix[max_level - 4][max_level + 2] = 3;
				
				square_matrix[max_level + 4][max_level + 2] = 3;
				
				square_matrix[max_level - 4][max_level + 4] = 3;
				
				square_matrix[max_level + 4][max_level + 4] = 3;
				
				
				
				square_matrix[max_level - 2][max_level + 3] = 3;
				
				square_matrix[max_level][max_level + 3] = 3;
				
				square_matrix[max_level + 2][max_level + 3] = 3;
				
				
				
				square_matrix[max_level - 4][max_level - 4] = 7;
				
				square_matrix[max_level - 2][max_level - 4] = 6;
				
				square_matrix[max_level][max_level - 4] = 5;
				
				square_matrix[max_level + 2][max_level - 4] = 6;
				
				square_matrix[max_level + 4][max_level - 4] = 7;
				
				
				square_matrix[max_level - 5][max_level - 2] = 7;
				
				square_matrix[max_level - 3][max_level - 2] = 6;
				
				square_matrix[max_level - 1][max_level - 2] = 5;
				
				square_matrix[max_level + 1][max_level - 2] = 5;
				
				square_matrix[max_level + 3][max_level - 2] = 6;
				
				square_matrix[max_level + 5][max_level - 2] = 7;
				
				
				
				square_matrix[max_level - 3][max_level] = 8;
				
				square_matrix[max_level + 3][max_level] = 8;
				
				
				
				square_matrix[max_level - 2][max_level + 1] = 7;
				
				square_matrix[max_level + 2][max_level + 1] = 7;
				
				square_matrix[max_level - 2][max_level + 2] = 7;
				
				square_matrix[max_level + 2][max_level + 2] = 7;
				
				square_matrix[max_level - 1][max_level + 3] = 8;
				
				square_matrix[max_level + 1][max_level + 3] = 8;
				
				
				
				square_matrix[max_level - 5][max_level + 5] = 6;
				
				square_matrix[max_level - 3][max_level + 5] = 7;
				
				square_matrix[max_level - 1][max_level + 5] = 8;
				
				square_matrix[max_level + 1][max_level + 5] = 8;
				
				square_matrix[max_level + 3][max_level + 5] = 7;
				
				square_matrix[max_level + 5][max_level + 5] = 6;
				
				
				
				square_matrix[max_level][max_level + 2] = 2;
				
				
			}
			
			if (level == 14)
			{
				
				for (int a_sub = -5; a_sub <= 5; a_sub++)
				{
					
					for (int b_sub = 1; b_sub <= 5; b_sub++)
					{
					
						square_matrix[max_level + a_sub][max_level - b_sub] = 0;
						
						square_matrix[max_level + a_sub][max_level + b_sub] = 0;
						
					}
					
					square_matrix[max_level + a_sub][max_level] = 1;
					
				}
				
				
				square_matrix[max_level][max_level + 1] = 0;
				
				
				for (int a_sub = 2; a_sub <= 5; a_sub++)
				{
					
					square_matrix[max_level - 3][max_level - a_sub] = 3;
					
					square_matrix[max_level - 1][max_level - a_sub] = 3;
					
					square_matrix[max_level + 1][max_level - a_sub] = 3;
					
					square_matrix[max_level + 3][max_level - a_sub] = 3;
					
					square_matrix[max_level - 3][max_level + a_sub] = 3;
					
					square_matrix[max_level + 3][max_level + a_sub] = 3;
					
				}
				
				
				for (int a_sub = -2; a_sub <= 2; a_sub++)
				{
					
					square_matrix[max_level + a_sub][max_level + 2] = 3;
					
				}
				
				
				
				square_matrix[max_level - 1][max_level + 5] = 3;
				
				square_matrix[max_level + 1][max_level + 5] = 3;
				
				square_matrix[max_level - 1][max_level + 4] = 3;
				
				square_matrix[max_level + 1][max_level + 4] = 3;
				
				
				
				square_matrix[max_level - 5][max_level + 5] = 3;
				
				square_matrix[max_level + 5][max_level + 5] = 3;
				
				square_matrix[max_level - 5][max_level + 1] = 3;
				
				square_matrix[max_level + 5][max_level + 1] = 3;
				
				square_matrix[max_level - 5][max_level - 2] = 3;
				
				square_matrix[max_level + 5][max_level - 2] = 3;
				
				
				
				square_matrix[max_level - 4][max_level + 3] = 3;
				
				square_matrix[max_level + 4][max_level + 3] = 3;
				
				square_matrix[max_level - 4][max_level - 4] = 3;
				
				square_matrix[max_level + 4][max_level - 4] = 3;
				
				
				
				square_matrix[max_level - 1][max_level - 1] = 3;
				
				square_matrix[max_level + 1][max_level - 1] = 3;
				
				
				
				square_matrix[max_level][max_level + 1] = 2;
				
				
			}
			
			if (level == 15)
			{
				
				for (int a_sub = 1; a_sub <= 5; a_sub++)
				{
					
					square_matrix[max_level - a_sub][max_level + 1] = 0;
					
					square_matrix[max_level + a_sub][max_level + 3] = 0;
					
					square_matrix[max_level][max_level - a_sub] = 0;
										
				}
				
				for (int a_sub = 0; a_sub <= 2; a_sub++)
				{
					
					square_matrix[max_level + 5][max_level - 5 + a_sub] = 0;
					
					square_matrix[max_level + 5][max_level - 1 + a_sub] = 0;
					
					square_matrix[max_level - 2][max_level + 3 + a_sub] = 0;
					
					square_matrix[max_level][max_level + 3 + a_sub] = 0;
					
					square_matrix[max_level - 5 + a_sub][max_level + 3] = 0;
					
					square_matrix[max_level - 5 + a_sub][max_level + 5] = 0;
										
				}
				
				square_matrix[max_level + 5][max_level + 5] = 0;
				
				
				
				
				square_matrix[max_level][max_level - 4] = 10;
			
				square_matrix[max_level][max_level + 3] = 10;
				
				square_matrix[max_level][max_level + 5] = 10;
				
				square_matrix[max_level - 5][max_level + 3] = 10;
				
				square_matrix[max_level - 3][max_level + 3] = 10;
				
				square_matrix[max_level - 5][max_level + 5] = 10;
				
				square_matrix[max_level - 3][max_level + 5] = 10;
				
				square_matrix[max_level + 2][max_level + 3] = 10;
				
				square_matrix[max_level + 4][max_level + 3] = 10;
				
				square_matrix[max_level - 2][max_level + 4] = 10;
				
				
				
				
				square_matrix[max_level][max_level - 5] = 3;

				square_matrix[max_level][max_level + 4] = 3;
				
				square_matrix[max_level - 4][max_level + 3] = 3;
				
				square_matrix[max_level - 2][max_level + 3] = 3;
				
				square_matrix[max_level - 4][max_level + 5] = 3;
				
				square_matrix[max_level - 2][max_level + 5] = 3;
				
				square_matrix[max_level + 1][max_level + 3] = 3;
				
				square_matrix[max_level + 3][max_level + 3] = 3;
				
				square_matrix[max_level + 5][max_level + 3] = 3;
				
				
				
				square_matrix[max_level - 5][max_level + 1] = 5;
				
				square_matrix[max_level - 4][max_level + 1] = 6;
				
				square_matrix[max_level - 3][max_level + 1] = 7;
				
				square_matrix[max_level - 2][max_level + 1] = 8;
				
				
				
				square_matrix[max_level - 1][max_level + 1] = 2;
				
			}
			
			if ((level >= level_threshold) && (level <= 21))
			{
				
				square_matrix[max_level - 1][max_level + 1] = 1;
				
				square_matrix[max_level][max_level + 1] = 1;
				
				square_matrix[max_level + 1][max_level + 1] = 1;
				
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			
			if ((level >= 22) && (level <= 25))
			{
				
				square_matrix[max_level - 1][max_level + 1] = 1;
				
				square_matrix[max_level][max_level + 1] = 1;
				
				square_matrix[max_level + 1][max_level + 1] = 1;
				
				square_matrix[max_level - 1][max_level] = 1;
				
				square_matrix[max_level + 1][max_level] = 1;
				
				square_matrix[max_level - 1][max_level - 1] = 1;
				
				square_matrix[max_level + 1][max_level - 1] = 1;
			
				
			}
			
			if (level == 26)
			{
				
				square_matrix[max_level + size_level/2][max_level] = 1;
				
				square_matrix[max_level + size_level/2 - 1][max_level] = 10;
				square_matrix[max_level + size_level/2 + 1][max_level] = 10;
				square_matrix[max_level + size_level/2][max_level + 1] = 10;
				square_matrix[max_level + size_level/2][max_level - 1] = 10;
				
				
				
				square_matrix[max_level - size_level/2][max_level] = 1;
				
				square_matrix[max_level - size_level/2 + 1][max_level] = 10;
				square_matrix[max_level - size_level/2 - 1][max_level] = 10;
				square_matrix[max_level - size_level/2][max_level + 1] = 10;
				square_matrix[max_level - size_level/2][max_level - 1] = 10;
				
				
				
				square_matrix[max_level][max_level + size_level/2] = 1;
								
				square_matrix[max_level][max_level + size_level/2 - 1] = 10;
				square_matrix[max_level][max_level + size_level/2 + 1] = 10;
				square_matrix[max_level + 1][max_level + size_level/2] = 10;
				square_matrix[max_level - 1][max_level + size_level/2] = 10;				
				
				
				
				square_matrix[max_level][max_level - size_level/2] = 1;
								
				square_matrix[max_level][max_level - size_level/2 + 1] = 10;
				square_matrix[max_level][max_level - size_level/2 - 1] = 10;
				square_matrix[max_level + 1][max_level - size_level/2] = 10;
				square_matrix[max_level - 1][max_level - size_level/2] = 10;	
				
			}
			
			if (level == 27)
			{

				for (int a_sub = -27; a_sub <= 27; a_sub += 6)
				{
					
					
					for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
					{
					
						square_matrix[max_level + a_sub][max_level + b_sub] = 1;
						
						square_matrix[max_level + b_sub][max_level + a_sub] = 1;
						
					}
					
				}
				
				for (int a_sub = -24; a_sub <= 24; a_sub += 6)
				{
					
					
					for (int b_sub = -24; b_sub <= 24; b_sub += 6)
					{
					
						square_matrix[max_level + a_sub][max_level + b_sub] = 5;
					
					}
					
				}
				
				square_matrix[max_level - 1][max_level + 1] = 1;
				
				square_matrix[max_level][max_level + 1] = 1;
				
				square_matrix[max_level + 1][max_level + 1] = 1;
				
				square_matrix[max_level - 1][max_level] = 1;
				
				square_matrix[max_level + 1][max_level] = 1;
				
				square_matrix[max_level - 1][max_level - 1] = 1;
				
				square_matrix[max_level + 1][max_level - 1] = 1;
				
				square_matrix[max_level + 3][max_level] = 0;
				
				square_matrix[max_level - 3][max_level] = 0;
				
				square_matrix[max_level][max_level + 3] = 0;
				
				square_matrix[max_level][max_level - 3] = 0;
				
				
				
				square_matrix[max_level + 27][max_level + 27] = 2;
				
				square_matrix[max_level - 27][max_level + 27] = 8;
				
				square_matrix[max_level + 27][max_level - 27] = 8;
				
				square_matrix[max_level - 27][max_level - 27] = 8;
				
				
				
				
				square_matrix[max_level + 26][max_level + 27] = 7;
				
				square_matrix[max_level + 27][max_level + 26] = 7;
				
				square_matrix[max_level - 26][max_level + 27] = 7;
				
				square_matrix[max_level - 27][max_level + 26] = 7;
				
				square_matrix[max_level + 26][max_level - 27] = 7;
				
				square_matrix[max_level + 27][max_level - 26] = 7;
				
				square_matrix[max_level - 26][max_level - 27] = 7;
				
				square_matrix[max_level - 27][max_level - 26] = 7;
				
									
			}
			
			if (level == 28)
			{
				
				for (int a_sub = 27; a_sub <= 28; a_sub++)
				{
					
					for (int b_sub = 27; b_sub <= 28; b_sub++)
					{
						
						square_matrix[max_level + a_sub][max_level + b_sub] = 6;
						square_matrix[max_level - a_sub][max_level + b_sub] = 6;
						square_matrix[max_level + a_sub][max_level - b_sub] = 6;
						square_matrix[max_level - a_sub][max_level - b_sub] = 6;
						
					}
					
				}
									
				square_matrix[max_level + 28][max_level + 28] = 2;
				
				square_matrix[max_level - 28][max_level - 28] = 4;
				
				for (int a_sub = -15; a_sub <= 15; a_sub += 6)
				{
					
					
					for (int b_sub = -16; b_sub <= 16; b_sub++)
					{
					
						square_matrix[max_level + a_sub][max_level + b_sub] = 1;
						
						square_matrix[max_level + b_sub][max_level + a_sub] = 1;
						
					}
					
				}
				
				
				
				for (int a_sub = -12; a_sub <= 12; a_sub += 6)
				{
					
					for (int b_sub = -12; b_sub <= 12; b_sub += 6)
					{
						
						square_matrix[max_level + a_sub][max_level + b_sub] = 5;
						
					}				
					
				}
				
				
			}
			
			if (level == 29)
			{
				
				for (int a_sub = 28; a_sub <= 29; a_sub++)
				{
					
					for (int b_sub = 28; b_sub <= 29; b_sub++)
					{
						
						square_matrix[max_level + a_sub][max_level + b_sub] = 7;
						square_matrix[max_level - a_sub][max_level + b_sub] = 7;
						square_matrix[max_level + a_sub][max_level - b_sub] = 7;
						square_matrix[max_level - a_sub][max_level - b_sub] = 7;
						
					}
					
				}
									
				square_matrix[max_level + 29][max_level + 29] = 2;

				
			}
			
			if (level == 30)
			{
				
				square_matrix[max_level][max_level + 1] = 1;
				
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			if (level == 31)
			{

				square_matrix[max_level][max_level + 1] = 1;
					
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			if (level == 32)
			{
					
				square_matrix[max_level][max_level + 2] = 2;
				
			}
			
			if (level == 33)
			{
				
				for (int a_sub = 0; a_sub <= 2; a_sub++)
				{
					
					for (int b_sub = 0; b_sub <= 2; b_sub++)
					{
					
						square_matrix[max_level + level - a_sub][max_level + level - b_sub] = 7;
						square_matrix[max_level - level + a_sub][max_level + level - b_sub] = 7;
						square_matrix[max_level + level - a_sub][max_level - level + b_sub] = 7;
						square_matrix[max_level - level + a_sub][max_level - level + b_sub] = 7;
						
					}
					
				}
					
				square_matrix[max_level + level][max_level + level] = 2;
				
			}
			
			if (level == 35)
			{
				
				square_matrix[max_level][max_level - 2] = 2;
				
			}
			
			if (!(level == 28))
			{
			
				square_matrix[max_level][max_level] = 4;
				
			}
						
			
			if (level <= 7)
			{
				
				square_matrix[max_level][max_level] = 10;
				
			}
			
			if (level <= 3)
			{
				
				square_matrix[max_level][max_level + 1] = 2;
				
			}
			
			if (level == 4)
			{
				
				square_matrix[max_level][max_level] = 0;
				
				square_matrix[max_level][max_level - 2] = 10;
				
				square_matrix[max_level][max_level - 3] = 2;
				
			}
			
			if ((level >= level_threshold) && false)
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
			
			if (level != 26)
			{
			
				for (int a_sub = -size_level - 2; a_sub <= size_level + 2; a_sub++)
				{
					
					for (int b_sub = -size_level - 2; b_sub <= size_level + 2; b_sub++)
					{
							
												
						// std::cout <<  square_matrix[a_sub + max_level][b_sub + max_level] << " ";
						
						if (square_matrix[a_sub + max_level][b_sub + max_level] < 10)
						{
							
							// std::cout <<  " ";
							
						}
							
					}
						
					// std::cout << "\n";
						
				}
				
			}
			
			// std::cout << "\n";
			
			up_movement = false;
			right_movement = false;
			down_movement = false;
			left_movement = false;
			
			turning = false;
			exchange = false;
			build = false;
			timeshift = false;
			
			timeshift = true;
			
			if (level >= 1)
			{
						
				if (testing)
				{
					
					right_movement = true;
					down_movement = true;
					left_movement = true;
					
					turning = true;
					exchange = true;
					build = true;
					timeshift = true;
					
					
				}
				
			}
			
			if (level >= 1)
			{
				
				up_movement = true;
				
			}
			
			if (level == 2)
			{
				
				up_movement = true;
				right_movement = true;
				
			}
			
			if (level == 3)
			{
				
				up_movement = true;
				left_movement = true;
	
			}
			
			if (level == 4)
			{
				
				down_movement = true;				
				
			}
			
			if (level == 5)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				
			}
			
			if (level == 6)
			{
				
				right_movement = false;
				
				left_movement = false;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				
			}
			
			if (level == 7)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			if (level == 8)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
			}
			
			if (level == 9)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
			}
		
			if (level == 10)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
				
			}
			
			if (level == 11)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
				
			}
			
			if (level == 12)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
				
			}
			
			
			if (level == 13)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				// exchange = true;
				
				build = true;
				
				
			}
			
			
			if (level == 14)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				// exchange = true;
				
				build = true;
				
				
			}
			
			
			if (level == 15)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
				
			}
			
			
			if ((level >= 16) && (level <= 22))
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
				
			}
			
			if (level == 23)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;

				build = true;
				
				
			}
			
			
			if ((level >= 24) && (level < 25))
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;

				build = true;
				
				
			}
			
			if (level == 25)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;

				build = true;
				
			}
			
			if (level == 26)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			
			if (level == 27)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				exchange = true;
				
				turning = true;
							
				build = true;
				
			}
			
			if (level == 28)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			if (level == 29)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			if (level == 30)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			
			if (level == 31)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
			}
			
			if (level == 32)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				exchange = true;
				
				build = true;
				
			}
			
			if (level == 33)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;
				
				build = true;
				
			}
			
			if (level == 34)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;				
				
				exchange = true;
				
				build = true;
				
			}
			
			if (level == 35)
			{
				
				right_movement = true;
				
				left_movement = true;
				
				down_movement = true;
				
				up_movement = true;
				
				turning = true;				
				
				exchange = true;
				
				build = true;
				
			}
			
			
			if (level > 50)
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
			
			
			compass_back_sprite.setOrigin(sf::Vector2f(12, 12));
			compass_back_sprite.setPosition(sf::Vector2f(0, -squarep));			
			compass_back_sprite.setRotation(0);
			
			compass_sprite.setOrigin(sf::Vector2f(12, 12));
			compass_sprite.setPosition(sf::Vector2f(0, -squarep));			
			compass_sprite.setRotation(0);
			
			arrow_sprite.setOrigin(sf::Vector2f(12, 12));
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
			
			for (int b_sub = 0; b_sub <= max_pow; b_sub++)
			{
			
				level_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
				level_sprite[b_sub].setRotation(0);
				
				dollar_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
				dollar_sprite[b_sub].setRotation(0);
				
			}
			
			for (int a_sub = 0; a_sub < number_max; a_sub++)
			{
				
				for (int b_sub = 0; b_sub <= max_pow; b_sub++)
				{
				
					number_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
					number_sprite[a_sub][b_sub].setRotation(0);
					
					dosh_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
					dosh_sprite[a_sub][b_sub].setRotation(0);
					
				}
				
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
			
			dark_backed = false;
			
			first_dark_back = false;
			
			mouse_pressed = false;
			
			
			// std::cout << level_pass << "\n";
			
			if (level_reset && false)
			{
				
				std::cout << "Level reset!" << "\n";
				
			}
			
			window.setView(view);
					
			while (!level_change)
			{
				
				
				if (delay_flipping)
				{
					
					delay_flip -= 2;
					
				}
				
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
					
					
					
					
					
					compass_back_sprite.setOrigin(sf::Vector2f(12, 12));
					compass_back_sprite.setPosition(sf::Vector2f(0, -squarep));			
				
					
					compass_sprite.setOrigin(sf::Vector2f(12, 12));
					compass_sprite.setPosition(sf::Vector2f(0, -squarep));	

					
					arrow_sprite.setOrigin(sf::Vector2f(12, 12));
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
					
					for (int b_sub = 0; b_sub <= max_pow; b_sub++)
					{
					
						level_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
						dollar_sprite[b_sub].setPosition(sf::Vector2f(0, -squarep));
						
					}

					for (int a_sub = 0; a_sub < number_max; a_sub++)
					{
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{
						
							number_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
							dosh_sprite[a_sub][b_sub].setPosition(sf::Vector2f(0, -squarep));
							
						}
						
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
							
							
							// dark_transp = 1;
						
								
							// qot_x = a_sub + local_x + c_sub*level_side;
							
							// qot_y = b_sub + local_y + d_sub*level_side;
							
							bitsquare_sprite.setPosition(pos_x, pos_y);
							
							if (square_matrix[pot_x + max_level][pot_y + max_level] == 0)
							{	
															
								bitsquare_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], max_transp));
	
							}
								
							if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
							{
								
								bitsquare_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], round(dark_transp*max_transp)));

							}
								

							if ((square_matrix[pot_x + max_level][pot_y + max_level] == 0) ||
								(square_matrix[pot_x + max_level][pot_y + max_level] == 3))
							{
							
								window.draw(bitsquare_sprite);
								
							}
							
							// squaree = Square_Draw(squaree, colours, 128, pos_x, pos_y, squarrel, squarrel);
										
							// window.draw(squaree);
							
							if ((square_matrix[pot_x + max_level][pot_y + max_level] > 0) &&
								(square_matrix[pot_x + max_level][pot_y + max_level] != 3))
							{			
								
								
								bitshadow_sprite.setPosition(pos_x, pos_y);
																	
								bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, blink));
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 2) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
									
								{
									
									bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, max_transp));
									
								}
								
								window.draw(bitshadow_sprite);
								
								
								
											
								bitmask_sprite.setPosition(pos_x, pos_y);
																	
								bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], blink));
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
									
								{
									
									bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], max_transp));
									
								}
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 2)
								{
									
									bitmask_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
									
								}
								
								// bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], 128));
												
								window.draw(bitmask_sprite);
							
							}
						
						}
					
					}
			
					window.draw(scanner_sprite);
					
					Color_Picker(2, colours, exit_colors);
					
					// squaree = Square_Draw(squaree, colours, max_transp, local_x*squarep, (local_x + 1)*squarep, squarrel, squarrel);
					
					// window.draw(squaree);
					
					compass_back_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
					
					window.draw(compass_back_sprite);
					
					window.draw(compass_sprite);
					
					
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
						
					
					if (up_movement)
					{
							
						window.draw(key_up_sprite);						
							
					}
						
					if (right_movement)
					{
							
						window.draw(key_right_sprite);
							
					}
						
					if (down_movement)
					{
												
						window.draw(key_down_sprite);
						
					}	
							
					if (left_movement)
					{
												
						window.draw(key_left_sprite);
							
					}
					
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
					
					
					
					crunchy_number = level;
					
					crunched = 0;
					
					while (abs(crunchy_number) > 0)
					{
					
						window.draw(number_sprite[abs(crunchy_number) % 10][crunched]);
						
						crunchy_number = crunchy_number/10;
						
						crunched++;
						
					}
					
					window.draw(level_sprite[crunched]);
					
					
					for (int b_sub = 0; b_sub <= max_pow; b_sub++)
					{

						dollar_sprite[b_sub].setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], blink));
						
					}				
					
					crunchy_number = dosh;
					
					crunched = 0;
					
					if (crunchy_number == 0)
					{
						
						window.draw(dosh_sprite[crunchy_number][crunched]);
						
						crunched++;
						
					}
					
					
					while (abs(crunchy_number) > 0)
					{
					
						window.draw(dosh_sprite[abs(crunchy_number) % 10][crunched]);
						
						crunchy_number = crunchy_number/10;
						
						crunched++;
												
					
					}
					
					if (dosh < 0)
					{
						
						window.draw(dosh_sprite[10][crunched]);
					
					}
								
					window.draw(dollar_sprite[crunched]);	
				
					
							
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
							
							blink = blink + blink_delta;
							
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
						
						if (blink > blink_min)
						{
							
							blink = blink - blink_delta;
							
							if (blink < blink_min)
							{
								
								 blink = blink_min;
								
							}
							
						}
						else
						{
							
							blink_on = true;
							
							blink = blink + blink_delta;
							
						}		
						
					}
					
					Background_Blinker(background_blink_on, background_blink, max_transp);
					
				
				}	
				
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					
					mouse_position = sf::Mouse::getPosition(window);
					
					mouse_pos_x = mouse_position.x;
					
					mouse_pos_y = mouse_position.y;
					
					mouse_pressed = true;
					
					// sf::Mouse::setPosition(sf::Vector2i(half_wind, half_wind), window);
					
				}			
							
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) ||
					(mouse_pressed && (mouse_pos_x > 25) && (mouse_pos_x < 75) &&
					(mouse_pos_y > 25) && (mouse_pos_y < 75)))
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
				
				
				
				timecop = false;
				
				
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::V) ||
					(mouse_pressed && (mouse_pos_x > 275) && (mouse_pos_x < 325) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					timeshift && !exhale && !action)
				{
					
					action = true;
					
					timecop = true;
					
					key_v_uplight = true;
					
					one_turn_uplight = true;
					
					dir_direct[0] = 0;
					dir_direct[1] = 0;					
					
					final_move[0] = dir_mult*dir_direct[0];
					final_move[1] = dir_mult*dir_direct[1];
					
					inhale_move_x = dir_direct[0];
					inhale_move_y = dir_direct[1];
					
				}
				
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
					(mouse_pressed && (mouse_pos_x > 150) && (mouse_pos_x < 200) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					exchange && !exhale && !action)
				{
					
					inhale = true;
					
				}
				
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::X) ||
					(mouse_pressed && (mouse_pos_x > 200) && (mouse_pos_x < 250) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					build && !inhale && !exhale && !action)
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
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level]) != 1))
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
						(abs(square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level]) != 1))
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
						(abs(square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level]) != 1))
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
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level]) != 1))
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
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level]) != 1))
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
	
				if (((sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ||
					(mouse_pressed && (mouse_pos_x > 475) && (mouse_pos_x < 525) &&
					(mouse_pos_y > 475) && (mouse_pos_y < 525))) ||
					(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) ||
					(mouse_pressed && (mouse_pos_x > 475) && (mouse_pos_x < 525) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) ||
					(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ||
					(mouse_pressed && (mouse_pos_x > 525) && (mouse_pos_x < 575) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) ||
					(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) ||
					(mouse_pressed && (mouse_pos_x > 425) && (mouse_pos_x < 475) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575)))) &&
					!action && !(level_reset || level_recet))
				{	
					
					dir_direct[0] = 0;
					dir_direct[1] = 0;
									
					if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ||
						(mouse_pressed && (mouse_pos_x > 475) && (mouse_pos_x < 525) &&
						(mouse_pos_y > 475) && (mouse_pos_y < 525))) && up_movement)
					{
						
						dir_direct[0] = dir_up[0];
						dir_direct[1] = dir_up[1];
						
						one_turn_uplight = true;
						
						key_up_uplight = true;

					}
				
					if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down) ||
					(mouse_pressed && (mouse_pos_x > 475) && (mouse_pos_x < 525) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) && down_movement)
					{
					
						dir_direct[0] = dir_down[0];
						dir_direct[1] = dir_down[1];
						
						one_turn_uplight = true;
						
						key_down_uplight = true;
						
					}
				
					if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ||
						(mouse_pressed && (mouse_pos_x > 525) && (mouse_pos_x < 575) &&
						(mouse_pos_y > 525) && (mouse_pos_y < 575))) && right_movement)
					{
					
						dir_direct[0] = dir_right[0];
						dir_direct[1] = dir_right[1];
						
						one_turn_uplight = true;
						
						key_right_uplight = true;
						
					}
				
					if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left) ||
						(mouse_pressed && (mouse_pos_x > 425) && (mouse_pos_x < 475) &&
						(mouse_pos_y > 525) && (mouse_pos_y < 575))) && left_movement)
					{
						
						dir_direct[0] = dir_left[0];
						dir_direct[1] = dir_left[1];
						
						one_turn_uplight = true;
						
						key_left_uplight = true;
						
					}
										
					position_declare = true;
					
					if (position_declare)
					{
						
						for (int a_sub = -size_level - 2; a_sub <= size_level + 2; a_sub++)
						{
							
							for (int b_sub = -size_level - 2; b_sub <= size_level + 2; b_sub++)
							{
									
														
								// std::cout <<  square_matrix[a_sub + max_level][b_sub + max_level] << " ";
								
								if (square_matrix[a_sub + max_level][b_sub + max_level] < 10)
								{
									
									// std::cout <<  " ";
									
								}
									
							}
								
							// std::cout << "\n";
								
						}
						
						// std::cout << "\n";
						
						// std::cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~]" << "\n";
						
						// std::cout << "[" << local_x << "," << local_y << "]:" << square_matrix[local_x + max_level][local_y + max_level] << "\n";
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] - level_side << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] + level_side << "," << local_y + dir_direct[1] << "]:" << square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] - level_side << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] << "\n";
						
						
						// std::cout << "[" << local_x + dir_direct[0] << "," << local_y + dir_direct[1] + level_side << "]:" << square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] << "\n";
						
						// std::cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~]" << "\n" << "\n";

						
					}
					
					
					if ((abs(local_x + dir_direct[0]) <= size_level) &&
						(abs(local_y + dir_direct[1]) <= size_level) &&
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level]) != 1) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + max_level] != 10))
					{
							
						moving = true;
						
						action = true;
						
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
						
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
							
							
					}
							
					if  ((((local_x + dir_direct[0]) > size_level) &&
						(abs(square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level]) != 1) &&
						(square_matrix[local_x + dir_direct[0] - level_side + max_level][local_y + dir_direct[1] + max_level] != 10)) &&
						!action)
					{
												
						moving = true;
						
						action = true;
						
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
						
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
						
						local_x = local_x - level_side;
						
						view.move(-level_side*squarep, 0);
						
						scanner_sprite.move(sf::Vector2f(-level_side*squarep, 0));
											
						
							
						compass_back_sprite.move(sf::Vector2f(-level_side*squarep, 0));
						
						compass_sprite.move(sf::Vector2f(-level_side*squarep, 0));
						
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
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{
							
							level_sprite[b_sub].move(sf::Vector2f(-level_side*squarep, 0));
							dollar_sprite[b_sub].move(sf::Vector2f(-level_side*squarep, 0));
							
						}

						for (int a_sub = 0; a_sub < number_max; a_sub++)
						{
							
							for (int b_sub = 0; b_sub <= max_pow; b_sub++)
							{
								
								number_sprite[a_sub][b_sub].move(sf::Vector2f(-level_side*squarep, 0));
								dosh_sprite[a_sub][b_sub].move(sf::Vector2f(-level_side*squarep, 0));
								
							}
								
						}
							
							
						scan_pos_x = scan_pos_x - level_side*squarep;
						
						
					}
					
					
					if ((((local_x + dir_direct[0]) < -size_level) &&
						(abs(square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level]) != 1) &&
						(square_matrix[local_x + dir_direct[0] + level_side + max_level][local_y + dir_direct[1] + max_level] != 10)) &&
						!action)
					{
						
						moving = true;
						
						action = true;
						
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
						
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
						
						local_x = local_x + level_side;
							
						view.move(level_side*squarep, 0);
						
						scanner_sprite.move(sf::Vector2f(level_side*squarep, 0));
						
						
						compass_back_sprite.move(sf::Vector2f(level_side*squarep, 0));
						
						compass_sprite.move(sf::Vector2f(level_side*squarep, 0));
						
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
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{
						
							level_sprite[b_sub].move(sf::Vector2f(level_side*squarep, 0));
							dollar_sprite[b_sub].move(sf::Vector2f(level_side*squarep, 0));
							
						}
							
						for (int a_sub = 0; a_sub < number_max; a_sub++)
						{
							
							for (int b_sub = 0; b_sub <= max_pow; b_sub++)
							{
							
								number_sprite[a_sub][b_sub].move(sf::Vector2f(level_side*squarep, 0));
								dosh_sprite[a_sub][b_sub].move(sf::Vector2f(level_side*squarep, 0));
								
							}
							
						}
							
							
						scan_pos_x = scan_pos_x + level_side*squarep;
						
						
						
					}
					
					
					
					if ((((local_y + dir_direct[1]) > size_level) &&
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level]) != 1) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] - level_side + max_level] != 10)) &&
						!action)
					{
						
						moving = true;
						
						action = true;
						
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
						
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
						
						
						local_y = local_y - level_side;
							
						view.move(0, -level_side*squarep);
						
						scanner_sprite.move(sf::Vector2f(0, -level_side*squarep));
						
						
						compass_back_sprite.move(sf::Vector2f(0, -level_side*squarep));
						
						compass_sprite.move(sf::Vector2f(0, -level_side*squarep));
													
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
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{
							
							level_sprite[b_sub].move(sf::Vector2f(0, -level_side*squarep));
							dollar_sprite[b_sub].move(sf::Vector2f(0, -level_side*squarep));
							
						}

						for (int a_sub = 0; a_sub < number_max; a_sub++)
						{
							
							for (int b_sub = 0; b_sub <= max_pow; b_sub++)
							{	
								
								number_sprite[a_sub][b_sub].move(sf::Vector2f(0, -level_side*squarep));
								dosh_sprite[a_sub][b_sub].move(sf::Vector2f(0, -level_side*squarep));
								
							}
								
						}
							
						
						scan_pos_y = scan_pos_y - level_side*squarep;
					
						
					}
					
					if ((((local_y + dir_direct[1]) < -size_level) &&
						(abs(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level]) != 1) &&
						(square_matrix[local_x + dir_direct[0] + max_level][local_y + dir_direct[1] + level_side + max_level] != 10)) &&
						!action)
					{
						
						moving = true;
						
						action = true;
						
						final_move[0] = dir_mult*dir_direct[0];
						final_move[1] = dir_mult*dir_direct[1];
						
						local_x = local_x + dir_direct[0];
						local_y = local_y + dir_direct[1];
						
						local_y = local_y + level_side;
							
						view.move(0, level_side*squarep);
						
						scanner_sprite.move(sf::Vector2f(0, level_side*squarep));
						
			
						
						
						compass_back_sprite.move(sf::Vector2f(0, level_side*squarep));
						
						compass_sprite.move(sf::Vector2f(0, level_side*squarep));
													
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
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{
							
							level_sprite[b_sub].move(sf::Vector2f(0, level_side*squarep));
							dollar_sprite[b_sub].move(sf::Vector2f(0, level_side*squarep));
							
						}

						for (int a_sub = 0; a_sub < number_max; a_sub++)
						{
							
							for (int b_sub = 0; b_sub <= max_pow; b_sub++)
							{
								
								number_sprite[a_sub][b_sub].move(sf::Vector2f(0, level_side*squarep));
								dosh_sprite[a_sub][b_sub].move(sf::Vector2f(0, level_side*squarep));
								
							}
									
						}
							
							
						scan_pos_y = scan_pos_y + level_side*squarep;
						
						
					}
					
					if ((dir_direct[0] == 0) && (dir_direct[1] == 0))
					{
						
						action = false;
						
						moving = false;
						
					}
					
					if (action && moving)
					{
					
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
						
						
							
						pacman = square_matrix[local_x + max_level][local_y + max_level];
						
						Color_Picker(pacman, karasu, exit_colors);
						
						square_matrix[local_x + max_level][local_y + max_level] = 0;
						
						if (pacman == 2)
						{
							
							dosh_increase = 100;
							
						}
						
						if (pacman == 3)
						{
							
							dosh_increase = -50;
							
						}
						
						if (pacman == 4)
						{
							
							dosh_increase = -150;
							
						}						
						
						if (pacman == 5)
						{
							
							dosh_increase = 1;
							
						}
						
						if (pacman == 6)
						{
							
							dosh_increase = 5;
							
						}
						
						if (pacman == 7)
						{
							
							dosh_increase = 25;
							
						}
						
						if (pacman == 8)
						{
							
							dosh_increase = 125;
							
						}

					}
					
					
					
					
				}
				
				
												
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
					(mouse_pressed && (mouse_pos_x > 25) && (mouse_pos_x < 75) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					!action && !(level_reset || level_recet) && turning)
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
				
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||
					(mouse_pressed && (mouse_pos_x > 75) && (mouse_pos_x < 125) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					!action && !(level_reset || level_recet) && turning)
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
				
				
				if ((level == 26) && !delay_flipping)
				{
					
					// square_matrix[max_level][max_level + 1] = 2;
					
					if ((square_matrix[max_level][max_level] == 4) &&
						(square_matrix[max_level + 1][max_level] == 10) &&
						(square_matrix[max_level - 1][max_level] == 10) &&
						(square_matrix[max_level][max_level + 1] == 10) &&
						(square_matrix[max_level][max_level - 1] == 10))
					{
						
						// square_matrix[max_level][max_level] = 2;
						
						delay_flip = 2;
						
						delay_flipping = true;
						
					}
					
				}			
				
				
				if (((level == 27) || (level == 28)) && !delay_flipping)
				{
					
					// square_matrix[max_level][max_level + 1] = 2;
					
					for (int a_sub = -24; a_sub <= 24; a_sub += 6)
					{
						
						
						for (int b_sub = -24; b_sub <= 24; b_sub += 6)
						{
						
							if (((square_matrix[max_level + a_sub][max_level + b_sub] == 5) ||
								(square_matrix[max_level + a_sub][max_level + b_sub] == 6) ||
								(square_matrix[max_level + a_sub][max_level + b_sub] == 7) ||
								(square_matrix[max_level + a_sub][max_level + b_sub] == 8)) &&
								(square_matrix[max_level + a_sub + 1][max_level + b_sub] == 10) &&
								(square_matrix[max_level + a_sub - 1][max_level + b_sub] == 10) &&
								(square_matrix[max_level + a_sub][max_level + b_sub + 1] == 10) &&
								(square_matrix[max_level + a_sub][max_level + b_sub - 1] == 10))
							{
								
								// square_matrix[max_level][max_level] = 2;
								
								delay_flip = 2;
								
								delay_flipping = true;
								
								coord_a_sub = a_sub;
								
								coord_b_sub = b_sub;
								
							}
							
						}
						
					}
					
				}	
				
				if (action && (level == 35))
				{
					
					for (int a_sub = -level; a_sub <= level; a_sub++)
					{
						
						for (int b_sub = -level; b_sub <= level; b_sub++)
						{
							
							temp_matrix[max_level + a_sub][max_level + b_sub] = square_matrix[max_level + a_sub][max_level + b_sub];
							
						}
						
					}		
					
										
					for (int a_sub = -level + 1; a_sub <= level - 1; a_sub++)
					{
						
						for (int b_sub = -level + 1; b_sub <= level - 1; b_sub++)
						{
																				
							if (square_matrix[max_level + a_sub][max_level + b_sub] == 2)
							{
								
								delta_flee_x = -local_x + a_sub;
								delta_flee_y = -local_y + b_sub;
								
								if (abs(delta_flee_x) <= abs(delta_flee_y))
								{
									
									if (delta_flee_x != 0)
									{
									
										if (square_matrix[max_level + a_sub + delta_flee_x/abs(delta_flee_x)][max_level + b_sub] == 0)
										{
										
											temp_matrix[max_level + a_sub + delta_flee_x/abs(delta_flee_x)][max_level + b_sub] = 2;
											
										}
										
									}
									else if (square_matrix[max_level + a_sub + 1][max_level + b_sub] == 0)
									{
									
										temp_matrix[max_level + a_sub + 1][max_level + b_sub] = 2;
										
									}
									
								}
								else
								{
									
									
									if (delta_flee_y != 0)
									{
									
										if (square_matrix[max_level + a_sub][max_level + b_sub + delta_flee_y/abs(delta_flee_y)] == 0)
										{
											
											temp_matrix[max_level + a_sub][max_level + b_sub + delta_flee_y/abs(delta_flee_y)] = 2;
											
										}
										
									}
									else if (square_matrix[max_level + a_sub][max_level + b_sub + 1] == 0)
									{
										
										temp_matrix[max_level + a_sub][max_level + b_sub + 1] = 2;
										
									}
									
								}
								
								temp_matrix[max_level + a_sub][max_level + b_sub] = 0;
								
							}
							
							
						
						}
						
					}	
					
					for (int a_sub = -level; a_sub <= level; a_sub++)
					{
						
						for (int b_sub = -level; b_sub <= level; b_sub++)
						{
							
							square_matrix[max_level + a_sub][max_level + b_sub] = temp_matrix[max_level + a_sub][max_level + b_sub];
							
						}
						
					}				
					
				}		
				
								
				if (action)
				{
					
					cumu_move[0] = 0;
					cumu_move[1] = 0;
					
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
									
								exit_filler.rotate(scale_rot/4);
									
								exit_filler.scale(scale_mult, scale_mult);
									
								pitmask_sprite.rotate(scale_rot/4);
									
								pitmask_sprite.scale(scale_mult, scale_mult);
									
							}
								
							if (level_back)
							{
									
								exit_filler.rotate(-scale_rot/4);
									
								exit_filler.scale(scale_mult, scale_mult);
									
								pitmask_sprite.rotate(-scale_rot/4);
									
								pitmask_sprite.scale(scale_mult, scale_mult);
									
							}
								
							if (dark_setback)
							{
									
								exit_filler.scale(scale_mult, scale_mult);
									
							}
							
							if (actions <= 21)
							{
								
								cumu_move[0] = cumu_move[0] + final_move[0];
								cumu_move[1] = cumu_move[1] + final_move[1];
								
								view.move(final_move[0], final_move[1]);
									
								scanner_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
								
								
								
								compass_back_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
						
								compass_sprite.move(sf::Vector2f(final_move[0], final_move[1]));
									
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
								
								for (int b_sub = 0; b_sub <= max_pow; b_sub++)
								{
								
									level_sprite[b_sub].move(sf::Vector2f(final_move[0], final_move[1]));
									dollar_sprite[b_sub].move(sf::Vector2f(final_move[0], final_move[1]));
									
								}

								for (int a_sub = 0; a_sub < number_max; a_sub++)
								{
									
									for (int b_sub = 0; b_sub <= max_pow; b_sub++)
									{
									
										number_sprite[a_sub][b_sub].move(sf::Vector2f(final_move[0], final_move[1]));
										dosh_sprite[a_sub][b_sub].move(sf::Vector2f(final_move[0], final_move[1]));
										
									}
									
								}
									
								scan_pos_x = scan_pos_x + final_move[0];							
								scan_pos_y = scan_pos_y + final_move[1];
							
							}
							else
							{
								
								cumu_move[0] = cumu_move[0] - final_move[0];
								cumu_move[1] = cumu_move[1] - final_move[1];
								
								view.move(-final_move[0], -final_move[1]);	
																
								scanner_sprite.move(sf::Vector2f(-final_move[0], -final_move[1]));	
								
								
								compass_back_sprite.move(-final_move[0], -final_move[1]);
						
								compass_sprite.move(-final_move[0], -final_move[1]);
									
								arrow_sprite.move(-final_move[0], -final_move[1]);								
															
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
								
								for (int b_sub = 0; b_sub <= max_pow; b_sub++)
								{
								
									level_sprite[b_sub].move(sf::Vector2f(-final_move[0], -final_move[1]));
									dollar_sprite[b_sub].move(sf::Vector2f(-final_move[0], -final_move[1]));
									
								}

								for (int a_sub = 0; a_sub < number_max; a_sub++)
								{
									
									for (int b_sub = 0; b_sub <= max_pow; b_sub++)
									{
									
										number_sprite[a_sub][b_sub].move(sf::Vector2f(-final_move[0], -final_move[1]));
										dosh_sprite[a_sub][b_sub].move(sf::Vector2f(-final_move[0], -final_move[1]));
										
									}
									
								}
								
									
								scan_pos_x = scan_pos_x - final_move[0];							
								scan_pos_y = scan_pos_y - final_move[1];
							
							}
							
						}
														
						if (turn_right || turn_left)
						{
							
						
							
							// std::cout << actions << " ~ " << "[" << kompass_x - qompass_x << ":" <<  kompass_y - qompass_y << "]" << "\n";
							
							if (actions <= 21)
							{
							
								view.rotate(final_rot);
								
								scanner_sprite.rotate(final_rot);
								
								compass_back_sprite.rotate(final_rot);			
									
								compass_sprite.rotate(final_rot);			
															
															
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
								
								for (int b_sub = 0; b_sub <= max_pow; b_sub++)
								{
								
									level_sprite[b_sub].rotate(final_rot);
									dollar_sprite[b_sub].rotate(final_rot);
									
								}

								for (int a_sub = 0; a_sub < number_max; a_sub++)
								{
									
									for (int b_sub = 0; b_sub <= max_pow; b_sub++)
									{
									
										number_sprite[a_sub][b_sub].rotate(final_rot);
										dosh_sprite[a_sub][b_sub].rotate(final_rot);
										
									}
									
								}
								
													
							}
							else
							{
							
								view.rotate(-final_rot);
								
								scanner_sprite.rotate(-final_rot);
															
								
								
								compass_back_sprite.rotate(-final_rot);			
								
								compass_sprite.rotate(-final_rot);			
													
																
								
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
								
								for (int b_sub = 0; b_sub <= max_pow; b_sub++)
								{
								
									level_sprite[b_sub].rotate(-final_rot);
									dollar_sprite[b_sub].rotate(-final_rot);
									
								}

								for (int a_sub = 0; a_sub < number_max; a_sub++)
								{
									
									for (int b_sub = 0; b_sub <= max_pow; b_sub++)
									{
									
										number_sprite[a_sub][b_sub].rotate(-final_rot);
										dosh_sprite[a_sub][b_sub].rotate(-final_rot);
										
									}
									
								}
																	
							}
													
							// std::cout << actions << " ~ " << "[" << compass_x << ":" << compass_y << "] [" << compass_x_d << ":" << compass_y_d << "]" << "\n";
														
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
								
								
								
								/// ///////////////////////////////////////////////////
								// ////////////////////////////////////////////////////
								/// ///////////////////////////////////////////////////
								
								
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
								
								dark_transp = dark_transp = exp(-sqrt(1.0*a_sub*a_sub + 1.0*b_sub*b_sub)/(dark_mult));
										
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 3) && moving)
								{
										
									dark_transp = exp(-sqrt(1.0*(a_sub + dir_direct[0] - 1*cumu_move[0]/squarep)*(a_sub + dir_direct[0] - 1*cumu_move[0]/squarep) + 1.0*(b_sub + dir_direct[1] - 1*cumu_move[1]/squarep)*(b_sub + dir_direct[1] - 1*cumu_move[1]/squarep))/(dark_mult));
										
								}
		
								
								// dark_transp = 1;
							
									
								// qot_x = a_sub + local_x + c_sub*level_side;
								
								// qot_y = b_sub + local_y + d_sub*level_side;
								
								if ((a_sub == 0) && (b_sub == 0) && timecop)
								{
								
									bitshine_sprite.setPosition(pos_x, pos_y);
																			
									bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
									
									window.draw(bitshine_sprite);
									
									
									
									// bitsquare_sprite.setPosition(pos_x, pos_y);
							
									// bitsquare_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], 0));
																			
									// window.draw(bitsquare_sprite);
									
								}
								
								
								bitsquare_sprite.setPosition(pos_x, pos_y);
								
								
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 0)
								{	
																
									bitsquare_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], max_transp));
		
								}
									
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
								{
									
									bitsquare_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], round(dark_transp*max_transp)));

								}
									

								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 0) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 3))
								{
								
									window.draw(bitsquare_sprite);
									
								}
								
								// squaree = Square_Draw(squaree, colours, 128, pos_x, pos_y, squarrel, squarrel);
											
								// window.draw(squaree);
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] > 0) &&
									(square_matrix[pot_x + max_level][pot_y + max_level] != 3))
								{			
									
									
									bitshadow_sprite.setPosition(pos_x, pos_y);
																		
									bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, blink));
									
									if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 2) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
										
									{
										
										bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, max_transp));
										
									}
									
									window.draw(bitshadow_sprite);
									
									
									
												
									bitmask_sprite.setPosition(pos_x, pos_y);
																		
									bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], blink));
									
									if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 10))
										
									{
										
										bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], max_transp));
										
									}
									
									if (square_matrix[pot_x + max_level][pot_y + max_level] == 2)
									{
										
										bitmask_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
										
									}
									
									// bitmask_sprite.setColor(sf::Color(colours[0], colours[1], colours[2], 128));
													
									window.draw(bitmask_sprite);
									
								}
								
								
								
								/// ///////////////////////////////////////////////////
								// ////////////////////////////////////////////////////
								/// ///////////////////////////////////////////////////
							
								
																
								
								if ((moving && (a_sub == 0) && (b_sub == 0)) &&
									!level_change && !level_back && !(dark_setback || dark_flicker))
								{
										
									bat_transp = 1.0*blink*toransupu/max_transp;
									
									if ((pacman == 2) || (pacman == 3) || (pacman == 10))
									{
										
										bat_transp = toransupu;
										
									}
										
									if ((pacman != 0) && (pacman != 3))
									{	
										
										bitshine_sprite.setPosition(pos_x, pos_y);
							
										bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
							
										window.draw(bitshine_sprite);
										
										
										bitsquare_sprite.setPosition(pos_x, pos_y);
							
										bitsquare_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], max_transp));
																			
										window.draw(bitsquare_sprite);
										
										
								
											
										bitomasuku_supuraito.setPosition(pos_x, pos_y);
										
										
																
										bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], blink));
										
										if ((pacman == 1) || (pacman == 10))
										{
										
											bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], max_transp));
											
										}
										
										// bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], 128));
											
										window.draw(bitomasuku_supuraito);
										
									}
											
								}
		
							}
						
						}
						
						if ((inhale || exhale || building) && !level_change && !level_back && !(dark_setback || dark_flicker))
						{
							
							Color_Picker(nullvoid, karasu, exit_colors);
														
							if ((pacman != 0) && (pacman != 3) && false)
							{
								
								bitsquare_sprite.setPosition(scan_pos_x + dir_direct[0]*squarep, scan_pos_y + dir_direct[1]*squarep);
							
								bitsquare_sprite.setColor(sf::Color(karasu[0], karasu[1], karasu[2], max_transp));
																			
								window.draw(bitsquare_sprite);
															
								
																
							}
							
																	
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
							
							dark_transp = exp(-1/dark_mult);
									
							bitshine_sprite.setPosition(scan_pos_x + dir_up[0]*squarep, scan_pos_y + dir_up[1]*squarep);
							
							bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
							
							window.draw(bitshine_sprite);
							
							
							bitsquare_sprite.setPosition(scan_pos_x + dir_up[0]*squarep, scan_pos_y + dir_up[1]*squarep);
							
							bitsquare_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], max_transp));
																			
							window.draw(bitsquare_sprite);
							
							
							
							if (((pacman == 0) || (pacman == 3)) && false)
							{				
							
						
							
								if (inhale)
								{
											
									sukuwarii = Square_Draw(sukuwarii, karasu, bat_transp, scan_pos_x + dir_direct[0]*squarep + inhale_move_x, scan_pos_y + dir_direct[1]*squarep + inhale_move_y, paruto*squarrel, paruto*squarrel);
					
									
								}
								
								if (exhale || building)
								{
		
									sukuwarii = Square_Draw(sukuwarii, color_black, bat_transp, scan_pos_x + inhale_move_x, scan_pos_y + inhale_move_y, paruto*squarrel, paruto*squarrel);
						
										
								}
									
								window.draw(sukuwarii);
								
							}
								
								
									
							if ((pacman != 0) && (pacman != 3))
							{
								
							
								if (inhale)
								{
											
									bitomasuku_supuraito.setPosition(scan_pos_x + dir_direct[0]*squarep + inhale_move_x, scan_pos_y + dir_direct[1]*squarep + inhale_move_y);
									
								}
								
								if (exhale || building)
								{
									
											
									bitomasuku_supuraito.setPosition(scan_pos_x + inhale_move_x, scan_pos_y + inhale_move_y);
									
								}
																
								bitomasuku_supuraito.setColor(sf::Color(karasu[0], karasu[1], karasu[2], bat_transp));
											
								window.draw(bitomasuku_supuraito);
										
							}
											
						}
						
						
						
						window.draw(scanner_sprite);
						
						Color_Picker(2, colours, exit_colors);
						
					
						compass_back_sprite.setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], max_transp));
					
						window.draw(compass_back_sprite);
						
						window.draw(compass_sprite);

						
						window.draw(arrow_sprite);

						


						if (moving && level_change && !(level_reset || level_recet))
						{
											
							Color_Picker(0, karasu, exit_colors);
							
							if (actions % 2 == 1)
							{
							
								Color_Picker(actions/2, karasu, exit_colors);
								
							}
										
							exit_filler = Square_Draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0, 0);
											
							if (actions % 2 != 1)
							{
								
								// exit_filler = Square_Draw(exit_filler, key_colour, max_transp, local_x*squarep, local_y*squarep, 0, 0);
									
							}
											
							window.draw(exit_filler);
							
							Color_Picker(2, karasu, exit_colors);
							
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
																
							pitmask_sprite.setColor(sf::Color(color_black[0], color_black[1], color_black[2], toransupu));
											
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
							
							intro_filler = Square_Draw(intro_filler, key_colour, toransupu, local_x*squarep, local_y*squarep, 0, 0);
							
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
							
						if (up_movement)
						{
							
							window.draw(key_up_sprite);						
							
						}
						
						if (right_movement)
						{
							
							window.draw(key_right_sprite);
							
						}
						
						if (down_movement)
						{
												
							window.draw(key_down_sprite);
							
						}	
							
						if (left_movement)
						{
												
							window.draw(key_left_sprite);
							
						}
						
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
						
												
						
						crunchy_number = level;
					
						crunched = 0;
						
						while (abs(crunchy_number) > 0)
						{
						
							window.draw(number_sprite[abs(crunchy_number) % 10][crunched]);
							
							crunchy_number = crunchy_number/10;
							
							crunched++;
							
						}
						
						window.draw(level_sprite[crunched]);
						
						
						for (int b_sub = 0; b_sub <= max_pow; b_sub++)
						{

							dollar_sprite[b_sub].setColor(sf::Color(key_colour[0], key_colour[1], key_colour[2], blink));
							
						}
						
						
						crunchy_number = dosh;
						
						crunched = 0;
						
						if (crunchy_number == 0)
						{
							
							window.draw(dosh_sprite[crunchy_number][crunched]);
							
							crunched++;
							
						}
						
						
						while (abs(crunchy_number) > 0)
						{
						
							window.draw(dosh_sprite[abs(crunchy_number) % 10][crunched]);
							
							crunchy_number = crunchy_number/10;
							
							crunched++;
													
						
						}
						
						if (dosh < 0)
						{
							
							window.draw(dosh_sprite[10][crunched]);
							
						}
									
						window.draw(dollar_sprite[crunched]);
							
						
						
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
								
								blink = blink + blink_delta;
								
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
							
							if (blink > blink_min)
							{
								
								blink = blink - blink_delta;
								
								if (blink < blink_min)
								{
									
									 blink = blink_min;
									
								}
								
							}
							else
							{
								
								blink_on = true;
								
								blink = blink + blink_delta;
								
							}		
							
						}
						
						Background_Blinker(background_blink_on, background_blink, max_transp);
													
					}
					
					position_declare = true;
					
					// std::cout << " ~ " << "[" << compass_x_c << ":" << compass_y_d << "] [" << compass_x_d << ":" << compass_y_d << "]" << "\n";
							
				}
				
				// std::cout << " ~ " << "[" << compass_x_c << ":" << compass_y_d << "] [" << compass_x_d << ":" << compass_y_d << "]" << "\n";
				
				
				if ((level == 26) && delay_flipping && (delay_flip == -2))
				{
					
					// square_matrix[max_level][max_level + 1] = 2;
					
					if ((square_matrix[max_level][max_level] == 4) &&
						(square_matrix[max_level + 1][max_level] == 10) &&
						(square_matrix[max_level - 1][max_level] == 10) &&
						(square_matrix[max_level][max_level + 1] == 10) &&
						(square_matrix[max_level][max_level - 1] == 10))
					{
						
						square_matrix[max_level][max_level] = 2;
						
						square_matrix[max_level + 1][max_level] = 8;
						square_matrix[max_level - 1][max_level] = 8;
						square_matrix[max_level][max_level + 1] = 8;
						square_matrix[max_level][max_level - 1] = 8;
						
						delay_flip = 0;
						
						delay_flipping = false;
						
					}
					
				}
				
				
				if (((level == 27) || (level == 28)) && delay_flipping && (delay_flip == -2))
				{
					
					// square_matrix[max_level][max_level + 1] = 2;
					
					
						
					if (((square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 5) ||
						(square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 6) ||
						(square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 7) ||
						(square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 8)) &&
						(square_matrix[max_level + coord_a_sub + 1][max_level + coord_b_sub] == 10) &&
						(square_matrix[max_level + coord_a_sub - 1][max_level + coord_b_sub] == 10) &&
						(square_matrix[max_level + coord_a_sub][max_level + coord_b_sub + 1] == 10) &&
						(square_matrix[max_level + coord_a_sub][max_level + coord_b_sub - 1] == 10))
					{
						
						square_matrix[max_level + coord_a_sub + 1][max_level + coord_b_sub] = 0;
						square_matrix[max_level + coord_a_sub - 1][max_level + coord_b_sub] = 0;
						square_matrix[max_level + coord_a_sub][max_level + coord_b_sub + 1] = 0;
						square_matrix[max_level + coord_a_sub][max_level + coord_b_sub - 1] = 0;
						
						delay_flip = 0;
						
						delay_flipping = false;
						
						
						
						if (square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 8)
						{
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] = 10;
							
						}
						
						
						if (square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 7)
						{
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] = 8;
							
						}
						
						
						if (square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 6)
						{
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] = 7;
							
						}
						
						
						
						
						if (square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] == 5)
						{
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub] = 6;
							
						}
						
						
						/// meganisuto
						
						Fiborand(fib_val, max_val, fractal);
						
						if (fib_val[0] < 0.25*max_val)
						{
							
							
							square_matrix[max_level + coord_a_sub + 3][max_level + coord_b_sub] = 8;
							
							
						}
						
						if ((fib_val[0] >= 0.25*max_val) &&
							(fib_val[0] < 0.5*max_val))
						{
							
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub + 3] = 8;
							
							
						}
						
						if ((fib_val[0] >= 0.5*max_val) &&
							(fib_val[0] < 0.75*max_val))
						{
							
							
							square_matrix[max_level + coord_a_sub - 3][max_level + coord_b_sub] = 8;
							
							
						}
						
						if (fib_val[0] >= 0.75*max_val)
						{
							
							
							square_matrix[max_level + coord_a_sub][max_level + coord_b_sub - 3] = 8;
							
							
						}
						
					}
					
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
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) ||
					(mouse_pressed && (mouse_pos_x > 350) && (mouse_pos_x < 400) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575)))
				{
						
					// level--;
					
					// level_change = true;
					
					level_reset = true;
					
					one_turn_uplight = true;
					
					two_turn_uplight = true;
					
					key_r_uplight = true;
					
					uplight_transp = -6;
					
					if (mouse_pressed)
					{
					
						sf::Mouse::setPosition(sf::Vector2i(375, 500), window);
						
					}
						
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
				
				mouse_pressed = false;
				
				timecop = false;
						
				
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
				
				dosh = dosh + dosh_increase;
				
				dosh_increase = 0;
				
			}
						
			level_pass++;
			
			if ((level >= level_max) && level_change)
			{
				
				level = 0;
				
			}
			
		}
		
		window.close();
					
		return(0);
		
	}
	
}  
