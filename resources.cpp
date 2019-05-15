#include "resources.h"

#include <string>
#include <vector>

#include "dhs_functions.h"

resources::resources()
{
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
}

void resources::run()
{

}
