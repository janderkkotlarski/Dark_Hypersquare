#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <chrono>
#include <thread>
#include <random>
#include <cassert>
#include <SFML/Graphics.hpp>

#include "dhs_functions.h"
#include "resources.h"
#include "hypermaze.h"
#include "start.h"
#include "game.h"

/// g++ -std=c++11 -o "%e" "%f" -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
///

int main()
{
  const std::string version{ "Dark Hypersquare V1.0" };

  std::cout << version << std::endl;

  // hypermaze maze(13, 0, 0);

  // maze.generate_concrete_maze();

  // maze.put_player();

  // maze.text_display_square_types();

  resources initializer;

  start start_screen;

  start_screen.run();

  game game_screen;

  game_screen.run();

  return 0;
}

int demo()
{  
  const std::string version{ "Dark Hypersquare V1.0" };
	
  const int max_level{ 100 };
  std::vector < std::vector <int>> square_matrix
  { init_square_matrix(max_level) };

  const int max_view{ 1 };

  int size_level{ 20 }, level_side, level_pass{ 0 };
	
  const int level_max{ 34 }, level_threshold{ 16 }, level_init{ 18 };
	
  const int delaz{ 10 };

  const std::chrono::milliseconds delay{ delaz };

  int delay_flip{ 0 }, coord_i{ 0 }, coord_j{ 0 };

  bool delay_flipping{ false };
		
  int crunchy_number{ 0 }, crunched{ 0 };
  const int max_pow{ 20 };
	
  int dosh{ 0 }, dosh_increase{ 0 };
	
  bool start_screen{ true }, testing{ false };
  bool level_change{ false }, level_back{ false }, level_reset{ false }, level_recet{ false };
	
  bool view_glitch{ false }, glitch_excempt{ false };
  bool up_movement{ false }, down_movement{ false }, right_movement{ false }, left_movement{ false };
	
  bool moving{ false }, turn_right{ false }, turn_left{ false };
  bool action{ false }, dark_setback{ false }, dark_flicker{ false };
	
  bool timecop{ false };

  bool inhale{ false }, exhale{ false };
  bool turning{ false }, exchange{ false };

  bool one_turn_uplight{ false }, two_turn_uplight{ false };
  bool key_up_uplight{ false }, key_right_uplight{ false}, key_down_uplight{ false }, key_left_uplight{ false };
  bool key_d_uplight{ false }, key_a_uplight{ false }, key_w_uplight{ false }, key_r_uplight{ false };

  float inhale_move_x{ 0.0f }, inhale_move_y{ 0.0f};
	
  int absorbed{ 0 }, assimilated{ 0 }, nullvoid{ 0 };
	
  const int transitions{ 20 };

  const float squarep{ 50.0f }, window_x{ 12.0f*squarep }, window_y{ 12.0f*squarep };
  const float squarrel{ 20.0f };

  const int max_transp{ 255 }, full_intensity{ 255 };

  int bat_transp;
	
  int toransupu{ max_transp };

  const sf::Color black{ 0, 0, 0, 255 };

  const sf::Color white{ 255, 255, 255, 255 };

  const sf::Color grey{ 127, 127, 127 };

  sf::Color key_colour{ black };

  sf::Color colours, karasu, kolours;

  int uplight_transp{ -12 };
	
  int pacman{ 0 };

  float dark_transp{ 0.0f };

  const float dark_mult{ 3.0f };	

  sf::Color exit_colors{full_intensity, 0, 0};
	
  int dir_up[2]{ 0, -1 }, dir_down[2]{ 0, 1 }, dir_right[2]{ 1, 0 }, dir_left[2]{ -1, 0 };
	
  int dir_move[2]{ 0, 0 }, dir_direct[2]{ 0, 0 };
	
  float dir_mult{ 2.5f }, final_move[2]{ 0.0f, 0.0f }, cumu_move[2]{ 0.0f, 0.0f };
	
  int rot_right{ -1 }, rot_left{ 1 };
	
  float rot_mult{ 4.5f }, paruto{ 1.0f }, scale_mult{ 1.17f }, scale_rot{ 18.0f };
	
  float final_rot{ 0.0f }, pos_x{ 0.0f }, pos_y{ 0.0f };
	
  float scan_pos_x{ 0.0f }, scan_pos_y{ -squarep };
	
  int local_x{ 0 }, local_y{ -1 }, pot_x{ 0 }, pot_y{ 0 };



  const int max_val{ 1000000000 }, fractal{ max_val - 2 };

  std::vector <int> fib_val{ fiboinit(max_val, fractal) };
	
  int blink{ max_transp }, background_blink{ 0 }, blink_min{ 32 }, blink_delta{ 4 };
	
  bool blink_on{ true }, background_blink_on{ false };
	
	sf::Vector2i mouse_position;
	
  int mouse_pos_x{ 0 }, mouse_pos_y{ 0 };
	
  int mouse_pressed{ false };
	
  float red_candy_frac{ 0.5f }, yellow_candy_frac{ 0.1f }, green_candy_frac{ 0.02f }, blue_candy_frac{ 0.005f };
	
  float wall_frac{ 0.4f }, dark_frac{ 0.1f }, exit_frac{ 0.03f };
	
  float candy_frac{ red_candy_frac + yellow_candy_frac + green_candy_frac + blue_candy_frac };
	
  bool wall_exist{ false }, pillars_exist{ false }, dark_exist{ false }, exit_exist{ false };
	
  bool wall_concrete{ false }, half_gone{ false }, zero_wall{ false };
	
  int clear_radius{ 4 };

  const std::string start_screen_file{ "Start_Screen_a.png" };
  const std::string start_shadow_file{ "Start_Shadow_a.png" };
	
  const std::string scanner_file{ "A-M4Z2-D_Scanner.png" };
	
  const std::string arrow_file{ "Arrow_Mini.png" };
  const std::string compass_back_file{ "Compass_Back_Mini.png" };
  const std::string compass_file{ "Compass_Mini.png" };
	
  const std::string bitmask_file{ "Bit_Mask_40e.png" };
  const std::string bitsquare_file{ "Bit_Square_40e.png" };
  const std::string bitshadow_file{ "Bit_Shadow_40--e.png" };
  const std::string bitshine_file{ "Bit_Shine_40e.png" };
	
  const std::string bitmask_key_up_file{ "Key_Up_Icon.png" };
  const std::string bitmask_key_right_file{ "Key_Right_Icon.png" };
  const std::string bitmask_key_down_file{ "Key_Down_Icon.png" };
  const std::string bitmask_key_left_file{ "Key_Left_Icon.png" };
	
  const std::string bitmask_key_d_file{ "Key_D_Icon.png" };
  const std::string bitmask_key_right_turn_file{ "Key_Turn_Right_Icon.png" };
  const std::string bitmask_key_a_file{ "Key_A_Icon.png" };
  const std::string bitmask_key_left_turn_file{ "Key_Turn_Left_Icon.png" };
	
  const std::string bitmask_key_w_file{ "Key_W_Icon.png" };
  const std::string bitmask_exchange_file{ "Exchange_Icon.png" };
  const std::string bitmask_key_r_file{ "Key_R_Icon.png" };
  const std::string bitmask_reset_file{ "Reset_Icon.png" };
	
  const std::string bitmask_key_esc_file{ "Key_Esc_Icon.png" };
  const std::string bitmask_key_s_file{ "Key_S_Icon.png" };
	
  const std::string bitmask_level_file{ "L3V3L_Icon.png" };

	
  const int number_max{ 11 };

  const std::string number{ "Number_" };
  const std::string icon{ "_Icon.png" };
  const std::string minus_file{ "Number_Minus_Icon.png" };

  const std::vector <std::string> bitmask_number_file
  { number_file_vector(number, icon, minus_file) };

  const std::string bitmask_dollar_file{ "Number_Dollar_Icon.png" };

  const sf::Vector2f full_windows{ window_x, window_y };

  const sf::Vector2f half_windows{ 0.5f*window_x, 0.5f*window_y };

  const sf::Vector2f full_square{ squarep, squarep};
  const sf::Vector2f left_square{ squarep, 0.0f };
  const sf::Vector2f up_square{ 0.0f, squarep };
  const sf::Vector2f no_square{ 0.0f, 0.0f };


	sf::Texture start_screen_tex;

  load_texture(start_screen_tex, start_screen_file);

  sf::Sprite start_screen_sprite;



  init_sprite(start_screen_sprite, start_screen_tex,
              half_windows, -up_square,
              white);

  // init_spritexture(start_screen_sprite, start_screen_tex, start_screen_file,
  //                  half_windows, -up_square, white);

	
	sf::Texture start_shadow_tex;	
  load_texture(start_shadow_tex, start_shadow_file);
	
	sf::Sprite start_shadow_sprite;
  init_sprite(start_shadow_sprite, start_shadow_tex,
              half_windows, -up_square,
              black);


	sf::Texture scanner_tex;
  load_texture(scanner_tex, scanner_file);
	
	sf::Sprite scanner_sprite;
  init_sprite(scanner_sprite, scanner_tex,
              half_windows, -up_square,
              white);

	sf::VertexArray squanner(sf::Quads, 4);
  init_vertex_array(squanner, window_x, window_y, white);


	sf::Texture compass_back_tex;  
  load_texture(compass_back_tex, compass_back_file);
			
	sf::Sprite compass_back_sprite;
  init_sprite(compass_back_sprite, compass_back_tex,
              half_sprite_dims(compass_back_sprite), -up_square);


	sf::Texture compass_tex;	
  load_texture(compass_tex, compass_file);
	
	sf::Sprite compass_sprite;  
  init_sprite(compass_sprite, compass_tex,
              half_sprite_dims(compass_sprite), -up_square);


	sf::Texture arrow_tex;	
  load_texture(arrow_tex, arrow_file);
	
	sf::Sprite arrow_sprite;
  init_sprite(arrow_sprite, arrow_tex,
              half_sprite_dims(arrow_sprite), -up_square);


	sf::Texture bitmask_tex;
  load_texture(bitmask_tex, bitmask_file);
	
	sf::Sprite bitmask_sprite;
  init_sprite(bitmask_sprite, bitmask_tex,
              0.5f*full_square, no_square);

  sf::Sprite bitomasuku_supuraito;
  init_sprite(bitomasuku_supuraito, bitmask_tex,
              0.5f*full_square, no_square);

  sf::Sprite pitmask_sprite;
  init_sprite(pitmask_sprite, bitmask_tex,
              0.5f*full_square, no_square);


	sf::Texture bitsquare_tex;
  load_texture(bitsquare_tex, bitsquare_file);

	sf::Sprite bitsquare_sprite;
  init_sprite(bitsquare_sprite, bitsquare_tex,
              0.5f*full_square, no_square);


  sf::Texture bitshadow_tex;
  load_texture(bitshadow_tex, bitshadow_file);

  sf::Sprite bitshadow_sprite;
  init_sprite(bitshadow_sprite, bitshadow_tex,
              0.5f*full_square, no_square);

	
  sf::Texture bitshine_tex;
  load_texture(bitshine_tex, bitshine_file);

  sf::Sprite bitshine_sprite;
  init_sprite(bitshine_sprite, bitshine_tex,
              0.5f*full_square, no_square);


	sf::Texture bitmask_key_up;
  load_texture(bitmask_key_up, bitmask_key_up_file);

	sf::Sprite key_up_sprite;
  init_sprite(key_up_sprite, bitmask_key_up,
              -3.5f*left_square + -3.5f*up_square, -up_square);

	
	sf::Texture bitmask_key_right;
  load_texture(bitmask_key_right, bitmask_key_right_file);

  sf::Sprite key_right_sprite;
  init_sprite(key_right_sprite, bitmask_key_right,
              -4.5f*left_square + -4.5f*up_square, -up_square);


	sf::Texture bitmask_key_down;
  load_texture(bitmask_key_down, bitmask_key_down_file);

	sf::Sprite key_down_sprite;
  init_sprite(key_down_sprite, bitmask_key_down,
              -3.5f*left_square + -4.5f*up_square, -up_square);


	sf::Texture bitmask_key_left;
  load_texture(bitmask_key_left, bitmask_key_left_file);

	sf::Sprite key_left_sprite;
  init_sprite(key_left_sprite, bitmask_key_left,
              -2.5f*left_square + -4.5f*up_square, -up_square);

	
	sf::Texture bitmask_key_d;
  load_texture(bitmask_key_d, bitmask_key_d_file);

	sf::Sprite key_d_sprite;
  init_sprite(key_d_sprite, bitmask_key_d,
              4.5f*left_square + -4.5f*up_square, -up_square);


	sf::Texture bitmask_key_right_turn;
  load_texture(bitmask_key_right_turn, bitmask_key_right_turn_file);

	sf::Sprite key_right_turn_sprite;
  init_sprite(key_right_turn_sprite, bitmask_key_right_turn,
              4.5f*left_square + -3.5f*up_square, -up_square);

	
	sf::Texture bitmask_key_a;
  load_texture(bitmask_key_a, bitmask_key_a_file);

	sf::Sprite key_a_sprite;
  init_sprite(key_a_sprite, bitmask_key_a,
              5.5f*left_square + -4.5f*up_square, -up_square);

	
	sf::Texture bitmask_key_left_turn;
  load_texture(bitmask_key_left_turn, bitmask_key_left_turn_file);
	
	sf::Sprite key_left_turn_sprite;
  init_sprite(key_left_turn_sprite, bitmask_key_left_turn,
              5.5f*left_square + -3.5f*up_square, -up_square);


	sf::Texture bitmask_key_w;
  load_texture(bitmask_key_w, bitmask_key_w_file);

	sf::Sprite key_w_sprite;
  init_sprite(key_w_sprite, bitmask_key_w,
              3.0f*left_square + -4.5f*up_square, -up_square);


	sf::Texture bitmask_exchange;
  load_texture(bitmask_exchange, bitmask_exchange_file);

	sf::Sprite exchange_sprite;
  init_sprite(exchange_sprite, bitmask_exchange,
              3.0f*left_square + -3.5f*up_square, -up_square);


	sf::Texture bitmask_key_r;
  load_texture(bitmask_key_r, bitmask_key_r_file);

	sf::Sprite key_r_sprite;
  init_sprite(key_r_sprite, bitmask_key_r,
              -1.0f*left_square + -4.5f*up_square, -up_square);

	
	sf::Texture bitmask_reset;
  load_texture(bitmask_reset, bitmask_reset_file);
	
	sf::Sprite reset_sprite;
  init_sprite(reset_sprite, bitmask_reset,
              -1.0f*left_square + -3.5f*up_square, -up_square);

	
	sf::Texture bitmask_key_esc;
  load_texture(bitmask_key_esc, bitmask_key_esc_file);

	sf::Sprite key_esc_sprite;
  init_sprite(key_esc_sprite, bitmask_key_esc,
              5.5f*left_square + 5.5f*up_square, -up_square);
	

	sf::Texture bitmask_key_s;
  load_texture(bitmask_key_s, bitmask_key_s_file);
	
	sf::Sprite key_s_sprite;
  init_sprite(key_s_sprite, bitmask_key_s,
              0.5f*left_square + -3.5f*up_square, -up_square);

	sf::Texture bitmask_level;	
  load_texture(bitmask_level, bitmask_level_file);

  const sf::Sprite sprite;
	
  std::vector <sf::Sprite> level_sprite;
	
  for (int i{ 0 }; i <= max_pow; ++i)
  {
    level_sprite.push_back(sprite);

    init_sprite(level_sprite[static_cast<unsigned>(i)], bitmask_level,
                -4.5f*left_square + 5.5f*up_square + sf::Vector2f((i + 1.0f)*18.0f,0.0f), -up_square);
  }

  std::vector <sf::Texture> bitmask_number;
	
  for (int i{ 0 }; i < number_max; ++i)
	{
    const sf::Texture bitmask;

    bitmask_number.push_back(bitmask);
    load_texture(bitmask_number[static_cast<unsigned>(i)], bitmask_number_file[static_cast<unsigned>(i)]);
	}
	
  std::vector <std::vector <sf::Sprite>> number_sprite;

  std::vector <std::vector <sf::Sprite>> dosh_sprite;
	
  for (int i{ 0 }; i < number_max; ++i)
  {
    std::vector <sf::Sprite> sprites;

    for (int j{ 0 }; j <= max_pow; ++j)
    { sprites.push_back(sprite); }

    for (int j{ 0 }; j <= max_pow; ++j)
		{
      number_sprite.push_back(sprites);

      init_sprite(number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)],
                  bitmask_number[static_cast<unsigned>(i)],
                  -4.5f*left_square + 5.5f*up_square + sf::Vector2f((j - 2.0f)*18.0f, 0.0f), -up_square);

      dosh_sprite.push_back(sprites);

      init_sprite(number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)],
                  bitmask_number[static_cast<unsigned>(i)],
                  -4.5f*left_square + -1.5f*up_square + sf::Vector2f((j - 2.0f)*18.0f, 0.0f), -up_square);
    }
  }
	
	sf::Texture bitmask_dollar;	
  load_texture(bitmask_dollar, bitmask_dollar_file);

  std::vector <sf::Sprite> dollar_sprite;
	
  for (int i{ 0 }; i <= max_pow; ++i)
	{
    dollar_sprite.push_back(sprite);

    init_sprite(dollar_sprite[static_cast<unsigned>(i)], bitmask_dollar,
                -4.5f*left_square + -1.5f*up_square + sf::Vector2f((i - 0.0f)*18.0f, 0.0f), -up_square);
  }
	
	sf::RectangleShape squaree(sf::Vector2f(2*squarrel, 2*squarrel));	
  color_picker(8, colours, exit_colors);
  squaree = square_draw(squaree, colours, blink, pos_x, pos_y, squarrel, squarrel);
	
	sf::RectangleShape sukuwarii(sf::Vector2f(2*squarrel, 2*squarrel));	
  color_picker(8, karasu, exit_colors);
  sukuwarii = square_draw(sukuwarii, karasu, blink, pos_x, pos_y, squarrel, squarrel);
	
  sf::RectangleShape squarei(sf::Vector2f(2.0f*squarrel, 2.0f*squarrel));
  color_picker(0, kolours, exit_colors);
  squarei = square_draw(squarei, kolours, max_transp, local_x*squarep, local_y*squarep - squarep, squarrel, squarrel);
	
  sf::RectangleShape infobox(sf::Vector2f(window_x, window_y - 0.5f*squarep));
  infobox.setOrigin(sf::Vector2f(0.5f*window_x, -0.5f*squarep));
  infobox = square_draw(infobox, black, 1*max_transp, 0.0f, -squarep, 0.0f, 0.0f);
	
	sf::RectangleShape exit_filler(sf::Vector2f(2*squarrel, 2*squarrel));	
  color_picker(0, karasu, exit_colors);
	exit_filler.setOrigin(squarrel, squarrel);	
  exit_filler = square_draw(exit_filler, karasu, max_transp, pos_x, pos_y, 0.0f, 0.0f);
	
	sf::RectangleShape intro_filler(sf::Vector2f(2*squarrel, 2*squarrel));	
  color_picker(0, karasu, exit_colors);
	intro_filler.setOrigin(squarrel, squarrel);	
  intro_filler = square_draw(intro_filler, karasu, max_transp, pos_x, pos_y, 0.0f, 0.0f);
  intro_filler.scale(18.0f, 18.0f);
	
  color_picker(2, key_colour, exit_colors);
	sf::Font font;
	if (!font.loadFromFile("Carlito-Regular.ttf"))
  { // error...	}
	
	sf::Text text;		
  text.setFont(font);
	text.setCharacterSize(18);		
  text.setFillColor(white);
  text.setOutlineColor(white);
  text.setPosition(50.0f, 350.0f);
	
  sf::RenderWindow window(sf::VideoMode(static_cast<unsigned int>(window_x), static_cast<unsigned int>(window_y)),
                          version, sf::Style::Default);
	
  sf::View view(-up_square, full_windows);
  view.setViewport(sf::FloatRect(0.0f, 0.0f, 1.0f, 1.0f));
	
  window.setView(view);
	
	int outro = 255;

  while (window.isOpen())
  {
    key_s_sprite.setColor(transparent_shader(key_colour, 0));
			
    start_shadow_sprite.setColor(sf::Color(0, 0, 0, background_blink/4));
		start_screen_sprite.setColor(sf::Color(0, 0, 0, max_transp));

    for (int j{ 1 }; j <= 255; j += 2)
    {
      window.clear(black);

      window.draw(start_shadow_sprite);
      window.draw(start_screen_sprite);
			
      window.draw(key_esc_sprite);
      window.draw(key_s_sprite);
			
			window.display();
			
      key_s_sprite.setColor(transparent_shader(key_colour, j));
			
      start_shadow_sprite.setColor(sf::Color(j, j, j, background_blink));
      start_screen_sprite.setColor(sf::Color(j, j, j, max_transp));
			
      color_picker(2, key_colour, exit_colors);

      key_colour = color_add(color_divide(key_colour, 2), grey);
					
      exit_multicolor(exit_colors);
			
      background_blinker(background_blink_on, background_blink, max_transp);
			
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
				
        sf::Mouse::setPosition(static_cast<sf::Vector2i>(half_windows), window);
				mouse_pressed = false;
				
        outro = j;
        j = 255;
			}

      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) ||
        (mouse_pressed && (mouse_pos_x > 25) && (mouse_pos_x < 75) &&
        (mouse_pos_y > 25) && (mouse_pos_y < 75)))
      {
        window.close();
        return(0);
      }
			
      std::this_thread::sleep_for(delay);
		}
		
		
    while (start_screen)
    {
      window.clear(black);
			
			window.draw(start_shadow_sprite);			
      window.draw(start_screen_sprite);
			
      window.draw(key_esc_sprite);
      window.draw(key_s_sprite);
			
			window.display();
			
      key_s_sprite.setColor(transparent_shader(key_colour, max_transp));
      start_shadow_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, background_blink));
			start_screen_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
			
      color_picker(2, key_colour, exit_colors);
					
      key_colour = color_add(color_divide(key_colour, 2), grey);
					
      exit_multicolor(exit_colors);
      background_blinker(background_blink_on, background_blink, max_transp);
			
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
        sf::Mouse::setPosition(static_cast<sf::Vector2i>(half_windows), window);
        mouse_pressed = false;
			}

      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) ||
        (mouse_pressed && (mouse_pos_x > 25) && (mouse_pos_x < 75) &&
        (mouse_pos_y > 25) && (mouse_pos_y < 75)))
      {
        window.close();
        return(0);
      }
			
      std::this_thread::sleep_for(delay);
    }
		
    for (int j{ outro }; j >= 0; j -= 2)
    {
      if (j < 0)
      { j = 0; }
			
      window.clear(black);
			
      window.draw(start_shadow_sprite);
      window.draw(start_screen_sprite);

      window.draw(key_esc_sprite);
      window.draw(key_s_sprite);
			
			window.display();
			
      key_s_sprite.setColor(transparent_shader(key_colour, j));
			
      start_shadow_sprite.setColor(sf::Color(j, j, j, background_blink));
      start_screen_sprite.setColor(sf::Color(j, j, j, max_transp));
			
      color_picker(2, key_colour, exit_colors);
					
      key_colour = color_add(color_divide(key_colour, 2), grey);
					
      exit_multicolor(exit_colors);
      background_blinker(background_blink_on, background_blink, max_transp);
			
      std::this_thread::sleep_for(delay);
		}

    for (int level = level_init; level <= level_max; level++)
    {
      level_change = false;
			
			if (level < level_threshold)
      { size_level = 5; }
			
			if (level >= level_threshold)
      { size_level = level; }
			
      level_side = 2*size_level + 1;
			
      for (int i{ -max_level }; i <= max_level; ++i)
      {
        for (int j{ -max_level }; j <= max_level; ++j)
        { square_matrix[i + max_level][j + max_level] = 1; }
      }

			if (level < level_threshold)
      {
        for (int i{ -size_level }; i <= size_level; ++i)
        {
          for (int j{ -size_level }; j <= size_level; ++j)
          {
            square_matrix[i + max_level][j + max_level] = 1;
						
						if (level <= 8)
            {
              square_matrix[i + max_level][j + max_level] = 10;
							
							if (testing)
              { square_matrix[i + max_level][j + max_level] = 6; }
            }
          }
        }
      }

			if (level >= level_threshold)
      {
        wall_frac = 0.3f + level/100.0f;
        dark_frac = 0.1f;
        exit_frac = 0.3f/level;
	
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

        dark_maze_prng(square_matrix, max_level, size_level, clear_radius,
								half_gone, pillars_exist, wall_exist, zero_wall, wall_concrete, exit_exist, dark_exist,
								fib_val, max_val, fractal, wall_frac, dark_frac, exit_frac,
                candy_frac, red_candy_frac, yellow_candy_frac, green_candy_frac);

				if (level == 26)
        { clear_maze_prng(square_matrix, max_level, size_level); }
				
				if (level == 27)
        { clear_maze_prng(square_matrix, max_level, size_level); }
				
				if (level == 28)
        { clear_maze_prng(square_matrix, max_level, size_level/2 + 2); }
				
				if (level == 29)
        { clear_maze_prng(square_matrix, max_level, size_level); }
				
				if (level == 30)
        { invis_walls_prng(square_matrix, max_level, size_level); }

				if (level == 31)
        { invis_walls_prng(square_matrix, max_level, size_level); }
				
				if (level == 32)
				{
					square_matrix[max_level][max_level + 1] = 1;
          invis_maze_prng(square_matrix, max_level, size_level);
				}
				
				if (level == 33)
        { invis_maze_prng(square_matrix, max_level, size_level); }
				
				if (level == 34)
        { invis_maze_prng(square_matrix, max_level, size_level); }
      }
			
			if (level == 1)
      {
        for (int i{ -size_level }; i <= size_level; ++i)
        { square_matrix[max_level][i + max_level] = 0; }
      }

			if ((level == 2) && !testing)
      {
				// up
        for (int i{ -size_level }; i <= 1; ++i)
        { square_matrix[max_level][i + max_level] = 0; }
				
				// right
        for (int i{ 0 }; i <= size_level; ++i)
        { square_matrix[i + max_level][-size_level + max_level] = 0; }
				
				// up
        for (int i{ 2 }; i <= size_level; ++i)
        { square_matrix[size_level + max_level][i + max_level] = 0; }
				
								
				// right
        for (int i{ -size_level }; i <= 0; ++i)
        { square_matrix[i + max_level][2 + max_level] = 0; }
			}
			
			if (level == 3)
      {
				// up
        for (int i{ -size_level }; i <= 1; ++i)
        { square_matrix[max_level][i + max_level] = 0; }
				
				// left
        for (int i{ -size_level }; i <= 0; ++i)
        { square_matrix[i + max_level][-size_level + max_level] = 0; }
				
				// up
        for (int i{ 2 }; i <= size_level; ++i)
        { square_matrix[-size_level + max_level][i + max_level] = 0; }

				// left
        for (int i{ 0 }; i <= size_level; ++i)
        { square_matrix[i + max_level][2 + max_level] = 0; }
			}
			
			if (level == 4)
      {
        for (int i { -size_level }; i <= size_level; ++i)
        { square_matrix[max_level][i + max_level] = 0; }
			}
			
			if (level == 5)
      {
				square_matrix[+ max_level][-1 + max_level] = 0;
				
        // left
        for (int i{ -2 }; i <= 0; ++i)
        { square_matrix[i + max_level][-2 + max_level] = 0; }
				
        //down
        for (int i{ -2 }; i <= 4; ++i)
        { square_matrix[-2 + max_level][i + max_level] = 0; }
				
        // right
        for (int i{ -2 }; i <= size_level; ++i)
        { square_matrix[i + max_level][4 + max_level] = 0; }
				
        square_matrix[size_level + max_level][2 + max_level] = 0;
        square_matrix[size_level + max_level][0 + max_level] = 0;
				square_matrix[size_level + max_level][-2 + max_level] = 0;				
        square_matrix[size_level + max_level][-4 + max_level] = 0;
				
        square_matrix[-size_level + max_level][4 + max_level] = 0;
        square_matrix[-size_level + max_level][2 + max_level] = 0;
        square_matrix[-size_level + max_level][0 + max_level] = 0;
				square_matrix[-size_level + max_level][-2 + max_level] = 0;

        for (int i{ 2 }; i <= 4; ++i)
        { square_matrix[-4 + max_level][i + max_level] = 0; }
				
        for (int i{ 0 }; i <= 2; ++i)
        { square_matrix[4 + max_level][i + max_level] = 0; }
				
        for (int i{ -2 }; i <= 0; ++i)
        { square_matrix[-4 + max_level][i + max_level] = 0; }
				
        for (int i{ -4 }; i <= -2; ++i)
        { square_matrix[4 + max_level][i + max_level] = 0; }
				
        // right
        for (int i{ -size_level }; i <= 2; ++i)
        { square_matrix[i + max_level][-4 + max_level] = 0; }
				
        //down
        for (int i{ -4 }; i <= 2; ++i)
        { square_matrix[2 + max_level][i + max_level] = 0; }
				
        square_matrix[1 + max_level][2 + max_level] = 0;
        square_matrix[max_level][2 + max_level] = 0;
        square_matrix[max_level][max_level + 1] = 2;
			}
			
			if (level == 6)
      {
				square_matrix[+ max_level][-1 + max_level] = 0;
				
        // left
        for (int i{ 0 }; i <= 2; ++i)
        { square_matrix[i + max_level][-2 + max_level] = 0; }
				
        //down
        for (int i{ -2 }; i <= 4; ++i)
        { square_matrix[2 + max_level][i + max_level] = 0; }
				
        // right
        for (int i{ -size_level }; i <= 2; ++i)
        { square_matrix[i + max_level][4 + max_level] = 0; }
				
        square_matrix[-size_level + max_level][2 + max_level] = 0;
        square_matrix[-size_level + max_level][0 + max_level] = 0;
        square_matrix[-size_level + max_level][-2 + max_level] = 0;
        square_matrix[-size_level + max_level][-4 + max_level] = 0;
				
        square_matrix[size_level + max_level][4 + max_level] = 0;
        square_matrix[size_level + max_level][2 + max_level] = 0;
        square_matrix[size_level + max_level][0 + max_level] = 0;
        square_matrix[size_level + max_level][-2 + max_level] = 0;
				
        for (int i{ 2 }; i <= 4; ++i)
        { square_matrix[4 + max_level][i + max_level] = 0; }
				
        for (int i{ 0 }; i <= 2; ++i)
        { square_matrix[-4 + max_level][i + max_level] = 0; }
				
        for (int i{ -2 }; i <= 0; ++i)
        { square_matrix[4 + max_level][i + max_level] = 0; }
				
        for (int i{ -4 }; i <= -2; ++i)
        { square_matrix[-4 + max_level][i + max_level] = 0; }
				
        // right
        for (int i{ -2 }; i <= size_level; ++i)
        { square_matrix[i + max_level][-4 + max_level] = 0; }
				
        //down
        for (int i{ -4 }; i <= 2; ++i)
        { square_matrix[-2 + max_level][i + max_level] = 0; }
				
        square_matrix[-1 + max_level][2 + max_level] = 0;
        square_matrix[max_level][2 + max_level] = 0;
        square_matrix[max_level][max_level + 1] = 2;
			}
			
			if (level == 7)
      {
        // y = -1, 1
        for (int i{ -1 }; i <= 1; ++i)
        {
          square_matrix[max_level + i][max_level - 1] = 0;
          square_matrix[max_level + i][max_level + 1] = 0;
				}
				
        // y = 0
        for (int i{ -size_level }; i <= size_level; ++i)
        { square_matrix[max_level + i][max_level] = 0; }
				
        // y = -2, 2
        for (int i{ 2 }; i <= size_level; ++i)
        {
          square_matrix[i + max_level][-2 + max_level] = 0;
          square_matrix[-i + max_level][-2 + max_level] = 0;
          square_matrix[i + max_level][2 + max_level] = 0;
          square_matrix[-i + max_level][2 + max_level] = 0;
				}
				
        square_matrix[max_level][-2 + max_level] = 0;
				square_matrix[max_level][2 + max_level] = 0;
				
        // y = -3, 3
        for (int i{ -2 }; i <= 2; ++i)
        {
          square_matrix[i + max_level][-3 + max_level] = 0;
          square_matrix[i + max_level][3 + max_level] = 0;
				}
								
        // y = -4, 4
        for (int i{ -size_level }; i <= -3; ++i)
        {
          square_matrix[i + max_level][-4 + max_level] = 0;
          square_matrix[i + max_level][4 + max_level] = 0;
				}
				
        square_matrix[-3 + max_level][-size_level + max_level] = 0;
				square_matrix[-3 + max_level][size_level + max_level] = 0;
				
        // c = -1, 1
        for (int i{ 4 }; i <= size_level; ++i)
        {
          square_matrix[-1 + max_level][i + max_level] = 0;
          square_matrix[1 + max_level][i + max_level] = 0;
          square_matrix[-1 + max_level][-i + max_level] = 0;
          square_matrix[1 + max_level][-i + max_level] = 0;
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
        for (int i{ -4 }; i <= 4; ++i)
        {
          square_matrix[max_level][max_level + i] = 0;
          square_matrix[max_level - 4][max_level + i] = 0;
				}
				
        // horizontal
        for (int i{ 0 }; i <= 4; ++i)
        {
          square_matrix[max_level - i][max_level - 4] = 0;
          square_matrix[max_level + i][max_level + 4] = 0;
				}
				
        square_matrix[max_level + size_level][max_level + 4] = 0;
        square_matrix[max_level - size_level][max_level + 4] = 0;
        square_matrix[max_level - 4][max_level] = 10;
        square_matrix[max_level][max_level + 1] = 2;
			}
			
			if (level == 9)
      {
        // vertical
        for (int i{ -4 }; i <= 4; ++i)
        {
          square_matrix[max_level][max_level + i] = 0;
          square_matrix[max_level + 4][max_level + i] = 0;
				}
				
        // horizontal
        for (int i{ 0 }; i <= 4; ++i)
        {
          square_matrix[max_level + i][max_level - 4] = 0;
          square_matrix[max_level - i][max_level + 4] = 0;
				}
				
        square_matrix[max_level + size_level][max_level + 4] = 0;
        square_matrix[max_level - size_level][max_level + 4] = 0;
        square_matrix[max_level + 4][max_level] = 10;
        square_matrix[max_level][max_level + 1] = 2;
			}
			
			if (level == 10)
      {
        // cross
        for (int i{ -size_level }; i <= size_level; ++i)
        {
          square_matrix[max_level][max_level + i] = 0;
          square_matrix[max_level + i][max_level] = 0;
				}
								
				square_matrix[max_level + 1][max_level + 1] = 0;
				square_matrix[max_level - 1][max_level + 1] = 0;
				square_matrix[max_level + 1][max_level - 1] = 0;
        square_matrix[max_level - 1][max_level - 1] = 0;
			}
			
			if (level == 11)
      {
        // cross
        for (int i{ 1 }; i <= size_level; ++i)
        {
          square_matrix[max_level - i][max_level + 1] = 0;
          square_matrix[max_level - i][max_level + 2] = 0;
          square_matrix[max_level - i][max_level + 4] = 0;
          square_matrix[max_level - i][max_level - 1] = 0;
          square_matrix[max_level - i][max_level - 3] = 0;
          square_matrix[max_level - i][max_level - 5] = 0;
					
          square_matrix[max_level + i][max_level + 1] = 0;
          square_matrix[max_level + i][max_level + 4] = 0;
          square_matrix[max_level + i][max_level - 1] = 0;
          square_matrix[max_level + i][max_level - 3] = 0;
          square_matrix[max_level + i][max_level - 5] = 0;
					
          square_matrix[max_level + 1][max_level + i] = 1;
          square_matrix[max_level + i][max_level + 2] = 0;
          square_matrix[max_level + 1][max_level - i] = 1;
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
        for (int i{ 1 }; i <= size_level; ++i)
        {
          square_matrix[max_level + i][max_level + 1] = 0;
          square_matrix[max_level + i][max_level + 2] = 0;
          square_matrix[max_level + i][max_level + 4] = 0;
          square_matrix[max_level + i][max_level - 1] = 0;
          square_matrix[max_level + i][max_level - 3] = 0;
          square_matrix[max_level + i][max_level - 5] = 0;
					
          square_matrix[max_level - i][max_level + 1] = 0;
          square_matrix[max_level - i][max_level + 4] = 0;
          square_matrix[max_level - i][max_level - 1] = 0;
          square_matrix[max_level - i][max_level - 3] = 0;
          square_matrix[max_level - i][max_level - 5] = 0;
					
          square_matrix[max_level - 1][max_level + i] = 1;
          square_matrix[max_level - i][max_level + 2] = 0;
          square_matrix[max_level - 1][max_level - i] = 1;
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
				
        for (int i{ -5 }; i <= 5; ++i)
        {
          square_matrix[max_level + i][max_level - 2] = 0;
          square_matrix[max_level + i][max_level + 5] = 0;
				}
				
        for (int i{ 3 }; i <= 5; ++i)
        {
          square_matrix[max_level - 4][max_level - i] = 0;
          square_matrix[max_level - 2][max_level - i] = 0;
          square_matrix[max_level][max_level - i] = 0;
          square_matrix[max_level + 2][max_level - i] = 0;
          square_matrix[max_level + 4][max_level - i] = 0;
          square_matrix[max_level - i][max_level] = 0;
          square_matrix[max_level + i][max_level] = 0;
				}
				
        for (int i{ -1 }; i <= 1; ++i)
        { square_matrix[max_level + i][max_level + 3] = 0; }
				
        for (int i{ 0 }; i <= 3; ++i)
        {
          square_matrix[max_level - 2][max_level + i] = 0;
          square_matrix[max_level + 2][max_level + i] = 0;
          square_matrix[max_level - 4][max_level + i + 1] = 0;
          square_matrix[max_level + 4][max_level + i + 1] = 0;
				}
				
        for (int i{ -4 }; i <= 4; i += 2)
        {
          square_matrix[max_level + i][max_level - 5] = 3;
          square_matrix[max_level + i][max_level - 3] = 3;
          square_matrix[max_level + i][max_level] = 3;
          square_matrix[max_level + i][max_level + 5] = 3;
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
        for (int i{ -5 }; i <= 5; ++i)
        {
          for (int j{ 1 }; j <= 5; ++j)
          {
            square_matrix[max_level + i][max_level - j] = 0;
            square_matrix[max_level + i][max_level + j] = 0;
					}
					
          square_matrix[max_level + i][max_level] = 1;
        }

        square_matrix[max_level][max_level + 1] = 0;
				
        for (int i{ 2 }; i <= 5; ++i)
        {
          square_matrix[max_level - 3][max_level - i] = 3;
          square_matrix[max_level - 1][max_level - i] = 3;
          square_matrix[max_level + 1][max_level - i] = 3;
          square_matrix[max_level + 3][max_level - i] = 3;
          square_matrix[max_level - 3][max_level + i] = 3;
          square_matrix[max_level + 3][max_level + i] = 3;
        }
				
        for (int i{ -2 }; i <= 2; ++i)
        { square_matrix[max_level + i][max_level + 2] = 3; }
				
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
        for (int i{ 1 }; i <= 5; ++i)
        {
          square_matrix[max_level - i][max_level + 1] = 0;
          square_matrix[max_level + i][max_level + 3] = 0;
          square_matrix[max_level][max_level - i] = 0;
				}
				
        for (int i{ 0 }; i <= 2; ++i)
        {
          square_matrix[max_level + 5][max_level - 5 + i] = 0;
          square_matrix[max_level + 5][max_level - 1 + i] = 0;
          square_matrix[max_level - 2][max_level + 3 + i] = 0;
          square_matrix[max_level][max_level + 3 + i] = 0;
          square_matrix[max_level - 5 + i][max_level + 3] = 0;
          square_matrix[max_level - 5 + i][max_level + 5] = 0;
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
        for (int i{ -27 }; i <= 27; i += 6)
        {
          for (int j{ -size_level }; j <= size_level; ++j)
          {
            square_matrix[max_level + i][max_level + j] = 1;
            square_matrix[max_level + j][max_level + i] = 1;
          }
				}
				
        for (int i{ -24 }; i <= 24; i += 6)
        {
          for (int j{ -24 }; j <= 24; j += 6)
          { square_matrix[max_level + i][max_level + j] = 5; }
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
        for (int i{ 27 }; i <= 28; ++i)
        {
          for (int j{ 27 }; j <= 28; ++j)
          {
            square_matrix[max_level + i][max_level + j] = 6;
            square_matrix[max_level - i][max_level + j] = 6;
            square_matrix[max_level + i][max_level - j] = 6;
            square_matrix[max_level - i][max_level - j] = 6;
          }
				}
									
        square_matrix[max_level + 28][max_level + 28] = 2;
				square_matrix[max_level - 28][max_level - 28] = 4;
				
        for (int i{ -15 }; i <= 15; i += 6)
        {
          for (int j{ -16 }; j <= 16; ++j)
          {
            square_matrix[max_level + i][max_level + j] = 1;
            square_matrix[max_level + j][max_level + i] = 1;
          }
        }
				
        for (int i{ -12 }; i <= 12; i += 6)
        {
          for (int j{ -12 }; j <= 12; j += 6)
          { square_matrix[max_level + i][max_level + j] = 5; }
        }
			}
			
			if (level == 29)
      {
        for (int i{ 28 }; i <= 29; ++i)
        {
          for (int j{ 28 }; j <= 29; ++j)
          {
            square_matrix[max_level + i][max_level + j] = 7;
            square_matrix[max_level - i][max_level + j] = 7;
            square_matrix[max_level + i][max_level - j] = 7;
            square_matrix[max_level - i][max_level - j] = 7;
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
      { square_matrix[max_level][max_level + 2] = 2; }
			
			if (level == 33)
      {
        for (int i{ 0 }; i <= 2; ++i)
        {
          for (int j{ 0 }; j <= 2; ++j)
          {
            square_matrix[max_level + level - i][max_level + level - j] = 7;
            square_matrix[max_level - level + i][max_level + level - j] = 7;
            square_matrix[max_level + level - i][max_level - level + j] = 7;
            square_matrix[max_level - level + i][max_level - level + j] = 7;
          }
				}
					
        square_matrix[max_level + level][max_level + level] = 2;
			}
			
			if (!(level == 28))
      { square_matrix[max_level][max_level] = 4; }
			
			if (level <= 7)
      { square_matrix[max_level][max_level] = 10; }
			
			if (level <= 3)
      { square_matrix[max_level][max_level + 1] = 2; }
			
			if (level == 4)
      {
        square_matrix[max_level][max_level] = 0;
        square_matrix[max_level][max_level - 2] = 10;
        square_matrix[max_level][max_level - 3] = 2;
			}
			
			if ((level >= level_threshold) && false)
      {
				square_matrix[max_level][1 + max_level] = 1;
				
        for (int i{ -1 }; i <= 1; i += 2)
        {
          for (int j{ -1 }; j <= 1; ++j)
          { square_matrix[i + max_level][j + max_level] = 1; }
        }
      }

			up_movement = false;
			right_movement = false;
			down_movement = false;
			left_movement = false;			
			turning = false;
			exchange = false;

      if (level >= 1 && testing)
      {
        right_movement = true;
        down_movement = true;
        left_movement = true;
        turning = true;
        exchange = true;
			}
			
      if (level == 1)
      { up_movement = true; }
			
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
        up_movement = true;
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
			}
			
			if (level == 8)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
        exchange = true;
			}
			
			if (level == 9)
      {
				right_movement = true;				
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
				exchange = true;

			}
		
			if (level == 10)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
        exchange = true;
			}
			
			if (level == 11)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
        exchange = true;
			}
			
			if (level == 12)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
        exchange = true;
      }
			
			if (level == 13)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
      }
			
			if (level == 14)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
      }
			
			if (level == 15)
      {
        right_movement = true;
        left_movement = true;
        down_movement = true;
        up_movement = true;
        turning = true;
        exchange = true;
      }
			
			if ((level >= 16) && (level <= 22))
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
				turning = true;				
        exchange = true;
			}
			
			if (level == 23)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
        turning = true;
			}			
			
      if (level == 24)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
				turning = true;				
        exchange = true;
			}
			
			if (level == 25)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
        turning = true;
			}
			
			if (level == 26)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
        up_movement = true;
        exchange = true;
        turning = true;
      }
			
			if (level == 27)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
				exchange = true;				
        turning = true;
			}
			
			if (level == 28)
			{				
				right_movement = true;				
				left_movement = true;				
        down_movement = true;
				up_movement = true;				
        turning = true;
			}
			
			if (level == 29)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
        turning = true;
			}
			
			if (level == 30)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;
        up_movement = true;
        turning = true;
			}
			
			
			if (level == 31)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
				turning = true;				
        exchange = true;
			}
			
			if (level == 32)
			{				
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
				turning = true;				
        exchange = true;
			}
			
			if (level == 33)
      {
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
        turning = true;
			}
			
			if (level == 34)
			{				
				right_movement = true;				
				left_movement = true;				
				down_movement = true;				
				up_movement = true;				
        turning = true;
				exchange = true;				
      }

			local_x = 0;
			local_y = -1;
			
      view.setCenter(0, -squarep);
      view.setRotation(0.0f);
			
      scanner_sprite.setPosition(-up_square);
      scanner_sprite.setRotation(0.0f);
			
			compass_back_sprite.setOrigin(sf::Vector2f(12, 12));
      compass_back_sprite.setPosition(-up_square);
      compass_back_sprite.setRotation(0.0f);
			
			compass_sprite.setOrigin(sf::Vector2f(12, 12));
      compass_sprite.setPosition(-up_square);
      compass_sprite.setRotation(0.0f);
			
			arrow_sprite.setOrigin(sf::Vector2f(12, 12));
      arrow_sprite.setPosition(-up_square);
      arrow_sprite.setRotation(0.0f);

      infobox.setPosition(-up_square);
      infobox.setRotation(0.0f);
			
      key_up_sprite.setPosition(-up_square);
      key_up_sprite.setRotation(0.0f);
			
      key_right_sprite.setPosition(-up_square);
      key_right_sprite.setRotation(0.0f);
			
      key_down_sprite.setPosition(-up_square);
      key_down_sprite.setRotation(0.0f);
			
      key_left_sprite.setPosition(-up_square);
      key_left_sprite.setRotation(0.0f);
			
      key_d_sprite.setPosition(-up_square);
      key_d_sprite.setRotation(0.0f);
			
      key_right_turn_sprite.setPosition(-up_square);
      key_right_turn_sprite.setRotation(0.0f);
			
      key_a_sprite.setPosition(-up_square);
      key_a_sprite.setRotation(0.0f);
			
      key_left_turn_sprite.setPosition(-up_square);
      key_left_turn_sprite.setRotation(0.0f);
			
      key_w_sprite.setPosition(-up_square);
      key_w_sprite.setRotation(0.0f);
			
      exchange_sprite.setPosition(-up_square);
      exchange_sprite.setRotation(0.0f);

      key_r_sprite.setPosition(-up_square);
      key_r_sprite.setRotation(0.0f);
			
      reset_sprite.setPosition(-up_square);
      reset_sprite.setRotation(0.0f);
			
      key_esc_sprite.setPosition(-up_square);
      key_esc_sprite.setRotation(0.0f);
			
      for (int j{ 0 }; j <= max_pow; ++j)
      {
        level_sprite[static_cast<unsigned>(j)].setPosition(-up_square);
        level_sprite[static_cast<unsigned>(j)].setRotation(0.0f);
				
        dollar_sprite[static_cast<unsigned>(j)].setPosition(-up_square);
        dollar_sprite[static_cast<unsigned>(j)].setRotation(0.0f);
			}
			
      for (int i{ 0 }; i < number_max; ++i)
      {
        for (int j{ 0 }; j <= max_pow; ++j)
        {
          number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setPosition(-up_square);
          number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setRotation(0.0f);
					
          dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setPosition(-up_square);
          dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setRotation(0.0f);
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
        key_r_uplight = false;
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

      mouse_pressed = false;

			window.setView(view);
					
			while (!level_change)
      {
				if (delay_flipping)
        { delay_flip -= 2; }
				
				if (inhale)
        {
          exhale = true;
          inhale = false;
				}
				
				if ((level == 1) && !glitch_excempt)
        { view_glitch = false; }
				
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
					
          scanner_sprite.setPosition(-up_square);
					
					compass_back_sprite.setOrigin(sf::Vector2f(12, 12));
          compass_back_sprite.setPosition(-up_square);
					
					compass_sprite.setOrigin(sf::Vector2f(12, 12));
          compass_sprite.setPosition(-up_square);

					arrow_sprite.setOrigin(sf::Vector2f(12, 12));
          arrow_sprite.setPosition(-up_square);
					
          infobox.setPosition(-up_square);

          key_up_sprite.setPosition(-up_square);
          key_right_sprite.setPosition(-up_square);
          key_down_sprite.setPosition(-up_square);
          key_left_sprite.setPosition(-up_square);
					
          key_d_sprite.setPosition(-up_square);
          key_right_turn_sprite.setPosition(-up_square);
					
          key_a_sprite.setPosition(-up_square);
          key_left_turn_sprite.setPosition(-up_square);
					
          key_w_sprite.setPosition(-up_square);
          exchange_sprite.setPosition(-up_square);

          key_r_sprite.setPosition(-up_square);
          reset_sprite.setPosition(-up_square);
					
          key_esc_sprite.setPosition(-up_square);
					
          for (int j{ 0 }; j <= max_pow; ++j)
          {
            level_sprite[static_cast<unsigned>(j)].setPosition(-up_square);
            dollar_sprite[static_cast<unsigned>(j)].setPosition(-up_square);
					}

          for (int i{ 0 }; i < number_max; ++i)
          {
            for (int j{ 0 }; j <= max_pow; ++j)
            {
              number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setPosition(-up_square);
              dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].setPosition(-up_square);
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
          window.clear(black);
					
          for (int i{ -max_view }; i <= max_view; ++i)
          {
            pot_x = local_x + i;
						pos_x = pot_x*squarep;
						
						if (pot_x > size_level)
            { pot_x = pot_x - level_side; }
						
						if (pot_x < -size_level)
            { pot_x = pot_x + level_side; }

            for (int j{ -max_view }; j <= max_view; ++j)
            {
              pot_y = local_y + j;
							pos_y = pot_y*squarep;
						
							if (pot_y > size_level)
              { pot_y = pot_y - level_side; }
							
							if (pot_y < -size_level)
              { pot_y = pot_y + level_side; }

              color_picker(square_matrix[pot_x + max_level][pot_y + max_level], colours, exit_colors);

							if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
              { dark_transp = exp(-sqrt(1.0f*i*i + 1.0f*j*j)/(dark_mult)); }
							
							bitsquare_sprite.setPosition(pos_x, pos_y);
							
							if (square_matrix[pot_x + max_level][pot_y + max_level] == 0)
              { bitsquare_sprite.setColor(black); }
								
							if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
              { bitsquare_sprite.setColor(transparent_shader(colours, round(dark_transp*max_transp))); }

							if ((square_matrix[pot_x + max_level][pot_y + max_level] == 0) ||
                  (square_matrix[pot_x + max_level][pot_y + max_level] == 3))
              { window.draw(bitsquare_sprite); }

							if ((square_matrix[pot_x + max_level][pot_y + max_level] > 0) &&
								(square_matrix[pot_x + max_level][pot_y + max_level] != 3))
              {
                bitshadow_sprite.setPosition(pos_x, pos_y);
								bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, blink));
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
                    (square_matrix[pot_x + max_level][pot_y + max_level] == 2) ||
                    (square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
                    (square_matrix[pot_x + max_level][pot_y + max_level] == 10))
                { bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, max_transp)); }
								
                window.draw(bitshadow_sprite);
											
                bitmask_sprite.setPosition(pos_x, pos_y);
                bitmask_sprite.setColor(transparent_shader(colours, blink));
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
                  (square_matrix[pot_x + max_level][pot_y + max_level] == 10))
                { bitmask_sprite.setColor(transparent_shader(colours, max_transp)); }
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 2)
                { bitmask_sprite.setColor(transparent_shader(key_colour, max_transp)); }

                window.draw(bitmask_sprite);
              }
						}
          }
			
					window.draw(scanner_sprite);
					
          color_picker(2, colours, exit_colors);
					
          compass_back_sprite.setColor(transparent_shader(key_colour, max_transp));
					
          window.draw(compass_back_sprite);
          window.draw(compass_sprite);
          window.draw(arrow_sprite);
					
					if (level_recet)
          {
            color_picker(0, karasu, exit_colors);
							
            intro_filler = square_draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, squarrel, squarrel);
							
						window.draw(intro_filler);
						
            action = true;
          }
					
          window.draw(infobox);
					
					if ((one_turn_uplight || two_turn_uplight) && (uplight_transp >= 0))
          {
            const sf::Color key_uplight{ transparent_shader(key_colour, uplight_transp) };

						if (key_up_uplight)
            { key_up_sprite.setColor(key_uplight); }
						
						if (key_right_uplight)
            { key_right_sprite.setColor(key_uplight); }
						
						if (key_down_uplight)
            { key_down_sprite.setColor(key_uplight); }
						
						if (key_left_uplight)
            { key_left_sprite.setColor(key_uplight); }
						
						if (key_down_uplight)
            { key_down_sprite.setColor(key_uplight); }
						
						if (key_d_uplight)
            { key_d_sprite.setColor(key_uplight); }
						
						if (key_a_uplight)
            { key_a_sprite.setColor(key_uplight); }
						
						if (key_w_uplight)
            { key_w_sprite.setColor(key_uplight); }

						if (key_r_uplight)
            { key_r_sprite.setColor(key_uplight); }
					}
					else
          {
            const sf::Color key_max{ transparent_shader(key_colour, max_transp) };

            key_up_sprite.setColor(key_max);
            key_right_sprite.setColor(key_max);
            key_down_sprite.setColor(key_max);
            key_left_sprite.setColor(key_max);
									
            key_d_sprite.setColor(key_max);
            key_a_sprite.setColor(key_max);
            key_w_sprite.setColor(key_max);
            key_r_sprite.setColor(key_max);
					}
					
          key_esc_sprite.setColor(transparent_shader(key_colour, max_transp));

					if (up_movement)
          { window.draw(key_up_sprite);	 }
						
					if (right_movement)
          { window.draw(key_right_sprite); }
						
					if (down_movement)
          { window.draw(key_down_sprite); }
							
					if (left_movement)
          { window.draw(key_left_sprite); }
					
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

					window.draw(key_r_sprite);
					window.draw(reset_sprite);					
					window.draw(key_esc_sprite);

          crunchy_number = level;
					crunched = 0;
					
					while (abs(crunchy_number) > 0)
          {
            window.draw(number_sprite[abs(crunchy_number) % 10][static_cast<unsigned>(crunched)]);
            crunchy_number = crunchy_number/10;
            ++crunched;
					}
					
          window.draw(level_sprite[static_cast<unsigned>(crunched)]);
					
          for (int j{ 0 }; j <= max_pow; ++j)
          { dollar_sprite[j].setColor(transparent_shader(key_colour, blink)); }
					
					crunchy_number = dosh;					
					crunched = 0;
					
					if (crunchy_number == 0)
          {
            window.draw(dosh_sprite[static_cast<unsigned>(crunchy_number)][static_cast<unsigned>(crunched)]);
            ++crunched;
          }
					
					while (abs(crunchy_number) > 0)
          {
            window.draw(dosh_sprite[abs(crunchy_number) % 10][static_cast<unsigned>(crunched)]);
            crunchy_number = crunchy_number/10;
            ++crunched;
					}
					
					if (dosh < 0)
          { window.draw(dosh_sprite[10][static_cast<unsigned>(crunched)]); }
								
          window.draw(dollar_sprite[static_cast<unsigned>(crunched)]);
          window.display();
					
          color_picker(level, kolours, exit_colors);
          color_picker(2, key_colour, exit_colors);
					
          key_colour = color_add(color_divide(key_colour, 2), grey);
					
          exit_multicolor(exit_colors);

					if (blink_on)
          {
						if (blink < max_transp)
            {
							blink = blink + blink_delta;
							
							if (blink > max_transp)
              { blink = max_transp; }
						}
						else
            { blink_on = false; }
					}
					
					if (!blink_on)
          {
						if (blink > blink_min)
            {
							blink = blink - blink_delta;
							
							if (blink < blink_min)
              { blink = blink_min; }
						}
						else
            {
              blink_on = true;
              blink = blink + blink_delta;
            }
					}
					
          background_blinker(background_blink_on, background_blink, max_transp);
				}	
				
				if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
          mouse_position = sf::Mouse::getPosition(window);
          mouse_pos_x = mouse_position.x;
          mouse_pos_y = mouse_position.y;
          mouse_pressed = true;
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

				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
					(mouse_pressed && (mouse_pos_x > 150) && (mouse_pos_x < 200) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575))) &&
					exchange && !exhale && !action)
        { inhale = true; }

        if (inhale && !exhale && !action && !(level_reset || level_recet))
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
					}
						
					if (inhale && action)
          {
            pacman = absorbed;
            one_turn_uplight = true;
            two_turn_uplight = true;
						key_w_uplight = true;
          }
					
					if (!action)
          { inhale = false; }

          color_picker(pacman, karasu, exit_colors);
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
					
          color_picker(pacman, karasu, exit_colors);
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

            const sf::Vector2f level_side_right_squares
            { static_cast<float>(level_side)*-left_square };
						
            scanner_sprite.move(level_side_right_squares);
            compass_back_sprite.move(level_side_right_squares);
            compass_sprite.move(level_side_right_squares);
            arrow_sprite.move(level_side_right_squares);
            infobox.move(level_side_right_squares);
							
            key_up_sprite.move(level_side_right_squares);
            key_right_sprite.move(level_side_right_squares);
            key_down_sprite.move(level_side_right_squares);
            key_left_sprite.move(level_side_right_squares);
							
            key_d_sprite.move(level_side_right_squares);
            key_right_turn_sprite.move(level_side_right_squares);
            key_a_sprite.move(level_side_right_squares);
            key_left_turn_sprite.move(level_side_right_squares);
							
            key_w_sprite.move(level_side_right_squares);
            exchange_sprite.move(level_side_right_squares);
            key_r_sprite.move(level_side_right_squares);
            reset_sprite.move(level_side_right_squares);
							
            key_esc_sprite.move(level_side_right_squares);
						
            for (int j{ 0 }; j <= max_pow; ++j)
            {
              level_sprite[static_cast<unsigned>(j)].move(level_side_right_squares);
              dollar_sprite[static_cast<unsigned>(j)].move(level_side_right_squares);
						}

            for (int i{ 0 }; i < number_max; ++i)
            {
              for (int j{ 0 }; j <= max_pow; ++j)
              {
                number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_right_squares);
                dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_right_squares);
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

            const sf::Vector2f level_side_left_squares
            { static_cast<float>(level_side)*left_square };

            scanner_sprite.move(level_side_left_squares);
            compass_back_sprite.move(level_side_left_squares);
            compass_sprite.move(level_side_left_squares);
            arrow_sprite.move(level_side_left_squares);
            infobox.move(level_side_left_squares);
							
            key_up_sprite.move(level_side_left_squares);
            key_right_sprite.move(level_side_left_squares);
            key_down_sprite.move(level_side_left_squares);
            key_left_sprite.move(level_side_left_squares);
							
            key_d_sprite.move(level_side_left_squares);
            key_right_turn_sprite.move(level_side_left_squares);
            key_a_sprite.move(level_side_left_squares);
            key_left_turn_sprite.move(level_side_left_squares);
						
            key_w_sprite.move(level_side_left_squares);
            exchange_sprite.move(level_side_left_squares);
            key_r_sprite.move(level_side_left_squares);
            reset_sprite.move(level_side_left_squares);
						
            key_esc_sprite.move(level_side_left_squares);
						
            for (int j{ 0 }; j <= max_pow; ++j)
            {
              level_sprite[static_cast<unsigned>(j)].move(level_side_left_squares);
              dollar_sprite[static_cast<unsigned>(j)].move(level_side_left_squares);
						}
							
            for (int i{ 0 }; i < number_max; ++i)
            {
              for (int j{ 0 }; j <= max_pow; ++j)
              {
                number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_left_squares);
                dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_left_squares);
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

            const sf::Vector2f level_side_down_squares
            { static_cast<float>(level_side)*-up_square };

            scanner_sprite.move(level_side_down_squares);
            compass_back_sprite.move(level_side_down_squares);
            compass_sprite.move(level_side_down_squares);
            arrow_sprite.move(level_side_down_squares);
            infobox.move(level_side_down_squares);
							
            key_up_sprite.move(level_side_down_squares);
            key_right_sprite.move(level_side_down_squares);
            key_down_sprite.move(level_side_down_squares);
            key_left_sprite.move(level_side_down_squares);
							
            key_d_sprite.move(level_side_down_squares);
            key_right_turn_sprite.move(level_side_down_squares);
            key_a_sprite.move(level_side_down_squares);
            key_left_turn_sprite.move(level_side_down_squares);
							
            key_w_sprite.move(level_side_down_squares);
            exchange_sprite.move(level_side_down_squares);
            key_r_sprite.move(level_side_down_squares);
            reset_sprite.move(level_side_down_squares);
							
            key_esc_sprite.move(level_side_down_squares);
						
            for (int j{ 0 }; j <= max_pow; ++j)
            {
              level_sprite[static_cast<unsigned>(j)].move(level_side_down_squares);
              dollar_sprite[static_cast<unsigned>(j)].move(level_side_down_squares);
						}

            for (int i{ 0 }; i < number_max; ++i)
            {
              for (int j{ 0 }; j <= max_pow; ++j)
              {
                number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_down_squares);
                dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_down_squares);
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

            const sf::Vector2f level_side_up_squares
            { static_cast<float>(level_side)*up_square };

            scanner_sprite.move(level_side_up_squares);
            compass_back_sprite.move(level_side_up_squares);
            compass_sprite.move(level_side_up_squares);
            arrow_sprite.move(level_side_up_squares);
            infobox.move(level_side_up_squares);
							
            key_up_sprite.move(level_side_up_squares);
            key_right_sprite.move(level_side_up_squares);
            key_down_sprite.move(level_side_up_squares);
            key_left_sprite.move(level_side_up_squares);
							
            key_d_sprite.move(level_side_up_squares);
            key_right_turn_sprite.move(level_side_up_squares);
            key_a_sprite.move(level_side_up_squares);
            key_left_turn_sprite.move(level_side_up_squares);
							
            key_w_sprite.move(level_side_up_squares);
            exchange_sprite.move(level_side_up_squares);
            key_r_sprite.move(level_side_up_squares);
            reset_sprite.move(level_side_up_squares);
							
            key_esc_sprite.move(level_side_up_squares);
						
            for (int j{ 0 }; j <= max_pow; ++j)
            {
              level_sprite[static_cast<unsigned>(j)].move(level_side_up_squares);
              dollar_sprite[static_cast<unsigned>(j)].move(level_side_up_squares);
						}

            for (int i{ 0 }; i < number_max; ++i)
            {
              for (int j{ 0 }; j <= max_pow; ++j)
              {
                number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_up_squares);
                dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(level_side_up_squares);
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
            color_picker(pacman, karasu, exit_colors);
						
						square_matrix[local_x + max_level][local_y + max_level] = 0;
						
						if (pacman == 2)
            { dosh_increase = 100; }
						
						if (pacman == 3)
            { dosh_increase = -50; }
						
						if (pacman == 4)
            { dosh_increase = -150; }
						
						if (pacman == 5)
            { dosh_increase = 1; }
						
						if (pacman == 6)
            { dosh_increase = 5; }
						
						if (pacman == 7)
            { dosh_increase = 25; }
						
						if (pacman == 8)
            { dosh_increase = 125; }
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
					
          for (int i{ 0 }; i <= 1; ++i)
          {
            dir_move[i] = dir_up[i];
            dir_up[i] = dir_left[i];
            dir_left[i] = dir_down[i];
            dir_down[i] = dir_right[i];
            dir_right[i] = dir_move[i];
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
					
          for (int i{ 0 }; i <= 1; ++i)
          {
            dir_move[i] = dir_up[i];
            dir_up[i] = dir_right[i];
            dir_right[i] = dir_down[i];
            dir_down[i] = dir_left[i];
            dir_left[i] = dir_move[i];
					}
					
          final_rot = rot_mult*rot_left;
				}
				
				
				if (one_turn_uplight)
        {
					uplight_transp = -12;		
					
					if (!two_turn_uplight)
          { uplight_transp = -6; }
        }
				
				if ((level == 26) && !delay_flipping)
        {
					if ((square_matrix[max_level][max_level] == 4) &&
						(square_matrix[max_level + 1][max_level] == 10) &&
						(square_matrix[max_level - 1][max_level] == 10) &&
						(square_matrix[max_level][max_level + 1] == 10) &&
						(square_matrix[max_level][max_level - 1] == 10))
          {
            delay_flip = 2;
            delay_flipping = true;
          }
        }
				
				if (((level == 27) || (level == 28)) && !delay_flipping)
        {
          for (int i{ -24 }; i <= 24; i += 6)
          {
            for (int j{ -24 }; j <= 24; j += 6)
            {
              if (((square_matrix[max_level + i][max_level + j] == 5) ||
                   (square_matrix[max_level + i][max_level + j] == 6) ||
                   (square_matrix[max_level + i][max_level + j] == 7) ||
                   (square_matrix[max_level + i][max_level + j] == 8)) &&
                   (square_matrix[max_level + i + 1][max_level + j] == 10) &&
                   (square_matrix[max_level + i - 1][max_level + j] == 10) &&
                   (square_matrix[max_level + i][max_level + j + 1] == 10) &&
                   (square_matrix[max_level + i][max_level + j - 1] == 10))
              {
                delay_flip = 2;
								delay_flipping = true;
								
                coord_i = i;
                coord_j = j;
              }
            }
          }
        }
								
				if (action)
        {
					cumu_move[0] = 0;
					cumu_move[1] = 0;
					
          if (exhale)
          { paruto = 0.08f; }
				
					for (int actions = 1; actions <= transitions; actions++)
          {
						std::this_thread::sleep_for(delay);
						
            if (level_reset || exhale)
            {
							if (toransupu < 255)
              { toransupu += 12; }
							
							if (toransupu > 255)
              { toransupu = 255; }
						}
						
            if (!level_reset && !exhale)
            {
							if (toransupu > 0)
              { toransupu -= 12; }
							
							if (toransupu < 0)
              { toransupu = 0; }
						}
						
						if (one_turn_uplight && !two_turn_uplight)
            { uplight_transp += 12; }
						
						if (two_turn_uplight)
            { uplight_transp += 6; }
						
						if (uplight_transp > 255)
            { uplight_transp = 255; }
						
						if (!level_change && !level_back)
            {
              paruto -= 0.04f;
							
              if (exhale)
              { paruto += 0.08f; }
						
              sukuwarii.setSize(sf::Vector2f(2*paruto*squarrel, 2*paruto*squarrel));
              bitomasuku_supuraito.setScale(sf::Vector2f(paruto, paruto));
						}
						
						if (inhale)
            {
              inhale_move_x = inhale_move_x - final_move[0];
              inhale_move_y = inhale_move_y - final_move[1];
						}
						
            if ((exhale) && (actions > 2))
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
              { exit_filler.scale(scale_mult, scale_mult); }
							
							if (actions <= 21)
              {
								cumu_move[0] = cumu_move[0] + final_move[0];
								cumu_move[1] = cumu_move[1] + final_move[1];
								
                view.move(final_move[0], final_move[1]);

                const sf::Vector2f final_moves{ final_move[0], final_move[1]};

                scanner_sprite.move(final_moves);
                compass_back_sprite.move(final_moves);
                compass_sprite.move(final_moves);
                arrow_sprite.move(final_moves);
                infobox.move(final_moves);
								
                key_up_sprite.move(final_moves);
                key_right_sprite.move(final_moves);
                key_down_sprite.move(final_moves);
                key_left_sprite.move(final_moves);
								
                key_d_sprite.move(final_moves);
                key_right_turn_sprite.move(final_moves);
                key_a_sprite.move(final_moves);
                key_left_turn_sprite.move(final_moves);
								
                key_w_sprite.move(final_moves);
                exchange_sprite.move(final_moves);
                key_r_sprite.move(final_moves);
                reset_sprite.move(final_moves);
								
                key_esc_sprite.move(final_moves);
								
                for (int j{ 0 }; j <= max_pow; ++j)
                {
                  level_sprite[static_cast<unsigned>(j)].move(final_moves);
                  dollar_sprite[static_cast<unsigned>(j)].move(final_moves);
								}

                for (int i{ 0 }; i < number_max; ++i)
                {
                  for (int j{ 0 }; j <= max_pow; ++j)
                  {
                    number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(final_moves);
                    dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(final_moves);
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

                const sf::Vector2f minus_final_moves{ -final_move[0], -final_move[1]};

                scanner_sprite.move(minus_final_moves);
                compass_back_sprite.move(-final_move[0], -final_move[1]);
                compass_sprite.move(-final_move[0], -final_move[1]);
                arrow_sprite.move(-final_move[0], -final_move[1]);
                infobox.move(minus_final_moves);
								
                key_up_sprite.move(minus_final_moves);
                key_right_sprite.move(minus_final_moves);
                key_down_sprite.move(minus_final_moves);
                key_left_sprite.move(minus_final_moves);
								
                key_d_sprite.move(minus_final_moves);
                key_right_turn_sprite.move(minus_final_moves);
                key_a_sprite.move(minus_final_moves);
                key_left_turn_sprite.move(minus_final_moves);
								
                key_w_sprite.move(minus_final_moves);
                exchange_sprite.move(minus_final_moves);
                key_r_sprite.move(minus_final_moves);
                reset_sprite.move(minus_final_moves);
								
                key_esc_sprite.move(minus_final_moves);
								
                for (int j{ 0 }; j <= max_pow; ++j)
                {
                  level_sprite[static_cast<unsigned>(j)].move(minus_final_moves);
                  dollar_sprite[static_cast<unsigned>(j)].move(minus_final_moves);
								}

                for (int i{ 0 }; i < number_max; ++i)
                {
                  for (int j{ 0 }; j <= max_pow; ++j)
                  {
                    number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(minus_final_moves);
                    dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].move(minus_final_moves);
                  }
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
                key_r_sprite.rotate(final_rot);
								reset_sprite.rotate(final_rot);
								
								key_esc_sprite.rotate(final_rot);
								
                for (int j{ 0 }; j <= max_pow; ++j)
                {
                  level_sprite[static_cast<unsigned>(j)].rotate(final_rot);
                  dollar_sprite[static_cast<unsigned>(j)].rotate(final_rot);
								}

                for (int i{ 0 }; i < number_max; ++i)
                {
                  for (int j{ 0 }; j <= max_pow; ++j)
                  {
                    number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].rotate(final_rot);
                    dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].rotate(final_rot);
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
								key_r_sprite.rotate(-final_rot);
								reset_sprite.rotate(-final_rot);
								
								key_esc_sprite.rotate(-final_rot);
								
                for (int j{ 0 }; j <= max_pow; ++j)
                {
                  level_sprite[static_cast<unsigned>(j)].rotate(-final_rot);
                  dollar_sprite[static_cast<unsigned>(j)].rotate(-final_rot);
								}

                for (int i{ 0 }; i < number_max; ++i)
                {
                  for (int j{ 0 }; j <= max_pow; ++j)
                  {
                    number_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].rotate(-final_rot);
                    dosh_sprite[static_cast<unsigned>(i)][static_cast<unsigned>(j)].rotate(-final_rot);
                  }
                }
              }
						}
						
            window.setView(view);
            window.clear(black);

            for (int i{ -max_view }; i <= max_view; ++i)
            {
              pot_x = local_x + i;
							pos_x = pot_x*squarep;
							
							if (pot_x > size_level)
              { pot_x = pot_x - level_side; }
							
							if (pot_x < -size_level)
              { pot_x = pot_x + level_side; }

              for (int j{ -max_view }; j <= max_view; ++j)
              {
                pot_y = local_y + j;
								pos_y = pot_y*squarep;
							
								if (pot_y > size_level)
                { pot_y = pot_y - level_side; }
								
								if (pot_y < -size_level)
                { pot_y = pot_y + level_side; }
								
                color_picker(square_matrix[pot_x + max_level][pot_y + max_level], colours, exit_colors);
                dark_transp += exp(-sqrt(1.0*i*i + 1.0*j*j)/(dark_mult));
										
								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 3) && moving)
                { dark_transp = exp(-sqrt(1.0f*(i + dir_direct[0] - 1.0f*cumu_move[0]/squarep)*(i + dir_direct[0]
                                    - 1.0f*cumu_move[0]/squarep) + 1.0f*(j + dir_direct[1]
                                    - 1.0f*cumu_move[1]/squarep)*(j + dir_direct[1] - 1.0f*cumu_move[1]/squarep))/(dark_mult));
                }
								
                if ((i == 0) && (j == 0) && timecop)
                {
                  bitshine_sprite.setPosition(pos_x, pos_y);
                  bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
                  window.draw(bitshine_sprite);
                }

                bitsquare_sprite.setPosition(pos_x, pos_y);
								
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 0)
                { bitsquare_sprite.setColor(black); }
									
								if (square_matrix[pot_x + max_level][pot_y + max_level] == 3)
                { bitsquare_sprite.setColor(transparent_shader(colours, round(dark_transp*max_transp))); }

								if ((square_matrix[pot_x + max_level][pot_y + max_level] == 0) ||
									(square_matrix[pot_x + max_level][pot_y + max_level] == 3))
                { window.draw(bitsquare_sprite); }

								
								if ((square_matrix[pot_x + max_level][pot_y + max_level] > 0) &&
									(square_matrix[pot_x + max_level][pot_y + max_level] != 3))
                {
                  bitshadow_sprite.setPosition(pos_x, pos_y);
									bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, blink));
									
									if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 2) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
                    (square_matrix[pot_x + max_level][pot_y + max_level] == 10))
                  { bitshadow_sprite.setColor(sf::Color(background_blink, background_blink, background_blink, max_transp)); }
									
                  window.draw(bitshadow_sprite);

                  bitmask_sprite.setPosition(pos_x, pos_y);
                  bitmask_sprite.setColor(transparent_shader(colours, blink));
									
									if ((square_matrix[pot_x + max_level][pot_y + max_level] == 1) ||
										(square_matrix[pot_x + max_level][pot_y + max_level] == 4) ||
                    (square_matrix[pot_x + max_level][pot_y + max_level] == 10))
                  { bitmask_sprite.setColor(transparent_shader(colours, max_transp)); }
									
									if (square_matrix[pot_x + max_level][pot_y + max_level] == 2)
                  { bitmask_sprite.setColor(transparent_shader(key_colour, max_transp)); }

                  window.draw(bitmask_sprite);
                }
								
                if ((moving && (i == 0) && (j == 0)) &&
									!level_change && !level_back && !(dark_setback || dark_flicker))
                {
                  bat_transp = blink*toransupu/max_transp;
									
									if ((pacman == 2) || (pacman == 3) || (pacman == 10))
                  { bat_transp = toransupu; }
										
									if ((pacman != 0) && (pacman != 3))
                  {
                    bitshine_sprite.setPosition(pos_x, pos_y);
                    bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
                    window.draw(bitshine_sprite);
										
                    bitsquare_sprite.setPosition(pos_x, pos_y);
                    bitsquare_sprite.setColor(black);
                    window.draw(bitsquare_sprite);
											
                    bitomasuku_supuraito.setPosition(pos_x, pos_y);
                    bitomasuku_supuraito.setColor(transparent_shader(karasu, blink));
										
										if ((pacman == 1) || (pacman == 10))
                    { bitomasuku_supuraito.setColor(transparent_shader(karasu, max_transp)); }

                    window.draw(bitomasuku_supuraito);
                  }
                }
              }
						}
						
            if ((inhale || exhale) && !level_change && !level_back && !(dark_setback || dark_flicker))
            {
              color_picker(nullvoid, karasu, exit_colors);
														
							if ((pacman != 0) && (pacman != 3) && false)
              {
                bitsquare_sprite.setPosition(scan_pos_x + dir_direct[0]*squarep, scan_pos_y + dir_direct[1]*squarep);
                bitsquare_sprite.setColor(transparent_shader(karasu, max_transp));
                window.draw(bitsquare_sprite);
              }
																	
              bat_transp = blink*toransupu/max_transp;
							
              color_picker(pacman, karasu, exit_colors);

							if ((pacman <= 4) || (pacman == 10))
              { bat_transp = toransupu; }
							
              dark_transp = exp(-1.0f/dark_mult);
									
              bitshine_sprite.setPosition(scan_pos_x + dir_up[0]*squarep, scan_pos_y + dir_up[1]*squarep);
              bitshine_sprite.setColor(sf::Color(full_intensity, full_intensity, full_intensity, max_transp));
              window.draw(bitshine_sprite);
							
              bitsquare_sprite.setPosition(scan_pos_x + dir_up[0]*squarep, scan_pos_y + dir_up[1]*squarep);
              bitsquare_sprite.setColor(black);
              window.draw(bitsquare_sprite);

							if ((pacman != 0) && (pacman != 3))
              {
								if (inhale)
                {
                  bitomasuku_supuraito.setPosition(scan_pos_x + dir_direct[0]*squarep + inhale_move_x,
                                                   scan_pos_y + dir_direct[1]*squarep + inhale_move_y);
								}
								
                if (exhale)
                { bitomasuku_supuraito.setPosition(scan_pos_x + inhale_move_x, scan_pos_y + inhale_move_y); }
																
                bitomasuku_supuraito.setColor(transparent_shader(karasu, bat_transp));
                window.draw(bitomasuku_supuraito);
              }
            }
						
						window.draw(scanner_sprite);
						
            color_picker(2, colours, exit_colors);
					
            compass_back_sprite.setColor(transparent_shader(key_colour, max_transp));
            window.draw(compass_back_sprite);
            window.draw(compass_sprite);
						window.draw(arrow_sprite);

						if (moving && level_change && !(level_reset || level_recet))
            {
              color_picker(0, karasu, exit_colors);
							
							if (actions % 2 == 1)
              { color_picker(actions/2, karasu, exit_colors); }
										
              exit_filler = square_draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
							window.draw(exit_filler);
							
              color_picker(2, karasu, exit_colors);
							
              pitmask_sprite.setPosition(local_x*squarep, local_y*squarep);
              pitmask_sprite.setColor(transparent_shader(karasu, toransupu));
              window.draw(pitmask_sprite);
            }
						
						if (moving && level_back && !(level_reset || level_recet))
            {
              color_picker(4, karasu, exit_colors);
							
							if (actions % 2 == 1)
              { color_picker(9, karasu, exit_colors); }

              exit_filler = square_draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
              window.draw(exit_filler);
										
              pitmask_sprite.setPosition(local_x*squarep, local_y*squarep);
              pitmask_sprite.setColor(black);
              window.draw(pitmask_sprite);
						}
						
						if (dark_setback && !(level_reset || level_recet))
            {
              color_picker(0, karasu, exit_colors);
							
							if (actions % 2 == 1)
              { color_picker(5, karasu, exit_colors); }
										
              exit_filler = square_draw(exit_filler, karasu, max_transp, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
              window.draw(exit_filler);
						}
						
						if (view_glitch && !(level_reset || level_recet))
            {
              color_picker(2, karasu, exit_colors);
							
              intro_filler = square_draw(intro_filler, key_colour, toransupu, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
							
							if (actions % 2 == 1)
              {
                color_picker(actions/2, karasu, exit_colors);
                intro_filler = square_draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
							}
											
              window.draw(intro_filler);
						}
						
						if (level_reset || level_recet)
            {
              color_picker(0, karasu, exit_colors);
							
							if ((actions % 2 == 1) && dark_flicker)
              { color_picker(5, karasu, exit_colors); }
							
              intro_filler = square_draw(intro_filler, karasu, toransupu, local_x*squarep, local_y*squarep, 0.0f, 0.0f);
              window.draw(intro_filler);
            }
												
						window.draw(infobox);
											
						if (one_turn_uplight || two_turn_uplight)
            {
              const sf::Color key_uplight{ transparent_shader(key_colour, uplight_transp) };

							if (key_up_uplight)
              { key_up_sprite.setColor(key_uplight); }
							
							if (key_right_uplight)
              { key_right_sprite.setColor(key_uplight); }
							
							if (key_down_uplight)
              { key_down_sprite.setColor(key_uplight); }
							
							if (key_left_uplight)
              { key_left_sprite.setColor(key_uplight); }
							
							if (key_down_uplight)
              { key_down_sprite.setColor(key_uplight); }
							
							if (key_d_uplight)
              { key_d_sprite.setColor(key_uplight); }
							
							if (key_a_uplight)
              { key_a_sprite.setColor(key_uplight); }
							
							if (key_w_uplight)
              { key_w_sprite.setColor(key_uplight); }

							if (key_r_uplight)
              { key_r_sprite.setColor(key_uplight); }

						}
						else
            {
              const sf::Color key_max{ transparent_shader(key_colour, max_transp) };

              key_up_sprite.setColor(key_max);
              key_right_sprite.setColor(key_max);
              key_down_sprite.setColor(key_max);
              key_left_sprite.setColor(key_max);
									
              key_d_sprite.setColor(key_max);
              key_a_sprite.setColor(key_max);
              key_w_sprite.setColor(key_max);
              key_r_sprite.setColor(key_max);
						}
						
            key_esc_sprite.setColor(transparent_shader(key_colour, max_transp));
							
						if (up_movement)
            { window.draw(key_up_sprite); }
						
						if (right_movement)
            { window.draw(key_right_sprite); }
						
						if (down_movement)
            { window.draw(key_down_sprite); }
							
						if (left_movement)
            { window.draw(key_left_sprite); }
						
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

						window.draw(key_r_sprite);
            window.draw(reset_sprite);
            window.draw(key_esc_sprite);
						
            crunchy_number = level;
						crunched = 0;
						
						while (abs(crunchy_number) > 0)
            {
              window.draw(number_sprite[abs(crunchy_number) % 10][static_cast<unsigned>(crunched)]);
              crunchy_number = crunchy_number/10;
              ++crunched;
						}
						
            window.draw(level_sprite[static_cast<unsigned>(crunched)]);
												
            for (int j{ 0 }; j <= max_pow; ++j)
            { dollar_sprite[j].setColor(transparent_shader(key_colour, blink)); }

            crunchy_number = dosh;
						crunched = 0;
						
						if (crunchy_number == 0)
            {
              window.draw(dosh_sprite[static_cast<unsigned>(crunchy_number)][static_cast<unsigned>(crunched)]);
              ++crunched;
            }
						
						while (abs(crunchy_number) > 0)
            {
              window.draw(dosh_sprite[abs(crunchy_number) % 10][static_cast<unsigned>(crunched)]);
              crunchy_number = crunchy_number/10;
              ++crunched;
						}
						
						if (dosh < 0)
            { window.draw(dosh_sprite[10][static_cast<unsigned>(crunched)]); }
									
            window.draw(dollar_sprite[static_cast<unsigned>(crunched)]);

            window.display();

            color_picker(level, kolours, exit_colors);
            color_picker(2, key_colour, exit_colors);
						
            key_colour = color_add(color_divide(key_colour, 2), grey);

            exit_multicolor(exit_colors);
												
						if (blink_on)
            {
							if (blink < max_transp)
              {
                blink += blink_delta;
								
								if (blink > max_transp)
                { blink = max_transp; }
							}
							else
              { blink_on = false; }
						}
						
						if (!blink_on)
            {
							if (blink > blink_min)
              {
                blink -= blink_delta;
								
								if (blink < blink_min)
                { blink = blink_min; }
							}
							else
              {
                blink_on = true;
                blink += blink_delta;
              }
						}
						
            background_blinker(background_blink_on, background_blink, max_transp);
          }
        }
				
				if ((level == 26) && delay_flipping && (delay_flip == -2))
        {
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
          if (((square_matrix[max_level + coord_i][max_level + coord_j] == 5) ||
            (square_matrix[max_level + coord_i][max_level + coord_j] == 6) ||
            (square_matrix[max_level + coord_i][max_level + coord_j] == 7) ||
            (square_matrix[max_level + coord_i][max_level + coord_j] == 8)) &&
            (square_matrix[max_level + coord_i + 1][max_level + coord_j] == 10) &&
            (square_matrix[max_level + coord_i - 1][max_level + coord_j] == 10) &&
            (square_matrix[max_level + coord_i][max_level + coord_j + 1] == 10) &&
            (square_matrix[max_level + coord_i][max_level + coord_j - 1] == 10))
          {
            square_matrix[max_level + coord_i + 1][max_level + coord_j] = 0;
            square_matrix[max_level + coord_i - 1][max_level + coord_j] = 0;
            square_matrix[max_level + coord_i][max_level + coord_j + 1] = 0;
            square_matrix[max_level + coord_i][max_level + coord_j - 1] = 0;
						
            delay_flip = 0;
            delay_flipping = false;
						
            if (square_matrix[max_level + coord_i][max_level + coord_j] == 8)
            { square_matrix[max_level + coord_i][max_level + coord_j] = 10; }
						
            if (square_matrix[max_level + coord_i][max_level + coord_j] == 7)
            { square_matrix[max_level + coord_i][max_level + coord_j] = 8; }
						
            if (square_matrix[max_level + coord_i][max_level + coord_j] == 6)
            { square_matrix[max_level + coord_i][max_level + coord_j] = 7; }

            if (square_matrix[max_level + coord_i][max_level + coord_j] == 5)
            { square_matrix[max_level + coord_i][max_level + coord_j] = 6; }
						
            fiborand(fib_val, max_val, fractal);
						
						if (fib_val[0] < 0.25*max_val)
            { square_matrix[max_level + coord_i + 3][max_level + coord_j] = 8; }
						
						if ((fib_val[0] >= 0.25*max_val) &&
							(fib_val[0] < 0.5*max_val))
            { square_matrix[max_level + coord_i][max_level + coord_j + 3] = 8; }
						
						if ((fib_val[0] >= 0.5*max_val) &&
							(fib_val[0] < 0.75*max_val))
            { square_matrix[max_level + coord_i - 3][max_level + coord_j] = 8; }
						
						if (fib_val[0] >= 0.75*max_val)
            { square_matrix[max_level + coord_i][max_level + coord_j - 3] = 8; }
          }
				}

        view_glitch = false;
				level_recet = false;
				
				if (level_reset)
        {
          --level;
          level_recet = true;
          level_change = true;
          glitch_excempt = true;
				}
				
				level_reset = false;
				
				if (level_back)
        {
          --level;
          --level;
          level_change = true;
          glitch_excempt = true;
				}
				
				level_back = false;
				
				if (two_turn_uplight && !one_turn_uplight)
        { two_turn_uplight = false; }
				
				one_turn_uplight = false;
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) ||
					(mouse_pressed && (mouse_pos_x > 350) && (mouse_pos_x < 400) &&
					(mouse_pos_y > 525) && (mouse_pos_y < 575)))
        {
					level_reset = true;
					
          one_turn_uplight = true;
          two_turn_uplight = true;
					key_r_uplight = true;
					
					uplight_transp = -6;
					
					if (mouse_pressed)
          { sf::Mouse::setPosition(sf::Vector2i(375, 500), window); }
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
					key_r_uplight = false;			
				}

        const sf::Color key_max{ transparent_shader(key_colour, max_transp) };
				
        key_up_sprite.setColor(key_max);
        key_right_sprite.setColor(key_max);
        key_down_sprite.setColor(key_max);
        key_left_sprite.setColor(key_max);
						
        key_d_sprite.setColor(key_max);
        key_a_sprite.setColor(key_max);
        key_w_sprite.setColor(key_max);
        key_r_sprite.setColor(key_max);
						
        key_esc_sprite.setColor(key_max);
				
				moving = false;

				turn_right = false;
				turn_left = false;
				
        action = false;
				exhale = false;

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
        exit_filler.setRotation(0.0f);
				
				pitmask_sprite.setScale(1, 1);
        pitmask_sprite.setRotation(0.0f);
				
        std::this_thread::sleep_for(delay);
				
        dosh = dosh + dosh_increase;
        dosh_increase = 0;
			}
						
      ++level_pass;
			
			if ((level >= level_max) && level_change)
      { level = 0; }
		}
		
    window.close();

    return(0);
    }
  }
}
