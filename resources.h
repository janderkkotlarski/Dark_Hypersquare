#ifndef RESOURCES_H
#define RESOURCES_H

#include <string>
#include <vector>

#include "QDir"

class resources
{
public:
  resources();

  void run();
private:
};

QDir get_current_folder()
{ return QDir::current(); }

std::vector <std::string> get_start_screen_filenames() noexcept;

std::vector <std::string> get_square_sprite_filenames() noexcept;

std::vector <std::string> get_player_sprite_filenames() noexcept;

std::vector <std::string> get_interface_icon_filenames() noexcept;

std::vector <std::string> number_filenames_vector(const std::string& begin,
                                                  const std::string& end);

std::vector <std::string> get_number_icon_filenames();

bool check_file(const std::string& file_name);

#endif // RESOURCES_H
