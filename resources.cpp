#include "resources.h"

#include "QFile"

#include "dhs_functions.h"

resources::resources()
{
  const std::vector <std::string> start_screen_filenames
  { get_start_screen_filenames() };

  std::vector <std::string> square_sprite_filenames
  { get_square_sprite_filenames() };

  std::vector <std::string> player_sprite_filenames
  { get_player_sprite_filenames() };

  const std::vector <std::string> interface_icon_filenames
  { get_interface_icon_filenames() };

  const std::vector <std::string> number_icon_filenames
  { get_number_icon_filenames() };
}

void resources::run()
{

}

std::vector <std::string> get_start_screen_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Start_Screen_a.png");
  filenames.push_back("Start_Shadow_a.png");

  return filenames;
}

std::vector <std::string> get_square_sprite_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Bit_Mask_40e.png");
  filenames.push_back("Bit_Square_40e.png");
  filenames.push_back("Bit_Shadow_40--e.png");
  filenames.push_back("Bit_Shine_40e.png");

  return filenames;
}

std::vector <std::string> get_player_sprite_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Arrow_Mini.png");
  filenames.push_back("Compass_Back_Mini.png");
  filenames.push_back("Compass_Mini.png");
  filenames.push_back("A-M4Z2-D_Scanner.png");

  return filenames;
}

std::vector <std::string> get_interface_icon_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Key_Up_Icon.png");
  filenames.push_back("Key_Right_Icon.png");
  filenames.push_back("Key_Down_Icon.png");
  filenames.push_back("Key_Left_Icon.png");

  filenames.push_back("Key_D_Icon.png");
  filenames.push_back("Key_Turn_Right_Icon.png");
  filenames.push_back("Key_A_Icon.png");
  filenames.push_back("Key_Turn_Left_Icon.png");

  filenames.push_back("Key_W_Icon.png");
  filenames.push_back("Exchange_Icon.png");
  filenames.push_back("Key_R_Icon.png");
  filenames.push_back("Reset_Icon.png");

  filenames.push_back("Key_Esc_Icon.png");
  filenames.push_back("Key_S_Icon.png");

  return filenames;
}

std::vector <std::string> number_filenames_vector(const std::string& begin,
                                                  const std::string& end)
{
  assert(begin != "");
  assert(end != "");

  std::vector <std::string> number_filenames;

  for (int i{ 0 }; i < 10; ++i)
  { number_filenames.push_back(begin + std::to_string(i) + end); }

  return number_filenames;
}

std::vector <std::string> get_number_icon_filenames()
{
  const std::string number{ "Number_" };
  const std::string icon{ "_Icon.png" };

  std::vector <std::string> filenames
  { number_filenames_vector(number, icon) };

  filenames.push_back("Number_Minus_Icon.png");
  filenames.push_back("Number_Dollar_Icon.png");

  return filenames;
}

bool check_file(const std::string& file_name)
{
  const QDir current_folder
  { get_current_folder() };

  const QString test_name
  { current_folder.absolutePath() + QString::fromStdString("/" + file_name) };

  return QFile::exists(test_name);
}
