#include "resources.h"

#include <iostream>

#include "QFile"

#include "dhs_functions.h"

resources::resources()
  : m_start_screen_filenames(get_start_screen_filenames()),
    m_square_sprite_filenames(get_square_sprite_filenames()),
    m_player_sprite_filenames(get_player_sprite_filenames()),
    m_interface_icon_filenames(get_interface_icon_filenames()),
    m_number_icon_filenames(get_number_icon_filenames()),
    m_copy_folder_name("Dark_Hypersquare/Resources"),
    m_paste_folder_name("Resources"),
    m_copy_folder(set_target_folder(get_base_folder(), m_copy_folder_name)),
    m_paste_folder(set_target_folder(get_current_folder(), m_paste_folder_name))
{
  check_files_in_folder(m_copy_folder);

  if (!check_files_in_folder(m_paste_folder))
  { transfer_files_between_folders(m_copy_folder, m_paste_folder); }

  check_files_in_folder(m_paste_folder);
}

void resources::run()
{

}

bool resources::check_files_in_folder(const QDir& folder)
{
  bool check
  { true };

  checking_folder_path(folder);

  if (!check_files(folder, m_start_screen_filenames))
  { check = false; }

  if (!check_files(folder, m_square_sprite_filenames))
  { check = false; }

  if (!check_files(folder, m_player_sprite_filenames))
  { check = false; }

  if (!check_files(folder, m_interface_icon_filenames))
  { check = false; }

  if (!check_files(folder, m_number_icon_filenames))
  { check = false; }

  return check;
}

void resources::transfer_files_between_folders(const QDir& source_folder,
                                    const QDir& target_folder)
{
  transfer_files(source_folder, target_folder, m_start_screen_filenames);
  transfer_files(source_folder, target_folder, m_square_sprite_filenames);
  transfer_files(source_folder, target_folder, m_player_sprite_filenames);
  transfer_files(source_folder, target_folder, m_interface_icon_filenames);
  transfer_files(source_folder, target_folder, m_number_icon_filenames);
}

std::vector <std::string> get_start_screen_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Start_Screen_a.png");
  filenames.push_back("Start_Shadow_a.png");

  assert(filenames.size() != 0);
  return filenames;
}

std::vector <std::string> get_square_sprite_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Bit_Mask_40e.png");
  filenames.push_back("Bit_Square_40e.png");
  filenames.push_back("Bit_Shadow_40--e.png");
  filenames.push_back("Bit_Shine_40e.png");

  assert(filenames.size() != 0);
  return filenames;
}

std::vector <std::string> get_player_sprite_filenames() noexcept
{
  std::vector <std::string> filenames;

  filenames.push_back("Arrow_Mini.png");
  filenames.push_back("Compass_Back_Mini.png");
  filenames.push_back("Compass_Mini.png");
  filenames.push_back("A-M4Z2-D_Scanner.png");

  assert(filenames.size() != 0);
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

  assert(filenames.size() != 0);
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

  assert(number_filenames.size() != 0);
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

  assert(filenames.size() != 0);
  return filenames;
}

QDir get_current_folder()
{ return QDir::current(); }

QDir get_base_folder()
{
  QDir current_folder
  { get_current_folder() };

  current_folder.cdUp();

  return current_folder;
}

QDir set_target_folder(const QDir& start_folder,
                       const std::string& folder_name)
{
  assert(folder_name != "");

  const QString final_folder_name
  { folder_file(start_folder, folder_name) };

  QDir final_folder
  { start_folder };

  if(!final_folder.exists(final_folder_name))
  { final_folder.mkpath(QString::fromStdString(folder_name)); }

  final_folder.cd(QString::fromStdString(folder_name));

  return final_folder;
}

QString folder_file(const QDir& folder,
                    const std::string& filename)
{ return folder.absolutePath() + QString::fromStdString("/" + filename); }

void transfer_file(const QDir& source_folder,
                   const QDir& target_folder,
                   const std::string& filename)
{
  QFile file(folder_file(source_folder, filename));

  file.copy(folder_file(target_folder, filename));
}

void transfer_files(const QDir& source_folder,
                    const QDir& target_folder,
                    const std::vector <std::string>& filenames)
{
  for (auto filename : filenames)
  { transfer_file(source_folder, target_folder, filename); }
}

bool check_file(const QDir& folder,
                const std::string& filename)
{
  bool check
  { true };

  if (filename == "")
  { check = false; }

  const QString test_name
  { folder_file(folder, filename) };

  if (!QFile::exists(test_name))
  {
    std::cout << "Cannot find \"" << filename << "\" in \"" << folder.absolutePath().toStdString() << "\".\n";
    check = false;
  }

  return check;
}

bool check_files(const QDir& folder,
                 const std::vector <std::string>& filenames)
{
  bool check
  { true };

  for (auto filename : filenames)
  {
    if(!check_file(folder, filename))
    { check = false; }
  }

  return check;
}

void checking_folder_path(const QDir& folder)
{ std::cout << "Checking \"" << folder.absolutePath().toStdString() << "\"\n"; }
