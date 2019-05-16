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

void check_vector_of_strings(const std::vector <std::string>& vector_of_strings) noexcept;

std::vector <std::string> get_start_screen_filenames() noexcept;

std::vector <std::string> get_square_sprite_filenames() noexcept;

std::vector <std::string> get_player_sprite_filenames() noexcept;

std::vector <std::string> get_interface_icon_filenames() noexcept;

std::vector <std::string> number_filenames_vector(const std::string& begin,
                                                  const std::string& end);

std::vector <std::string> get_number_icon_filenames();

QDir get_current_folder();

QDir get_resource_folder();

void check_file(const QDir& folder,
                const std::string& file_name);

void check_files(const QDir& folder,
                 const std::vector <std::string>& filenames);

void cout_folder_path(const QDir& folder);

#endif // RESOURCES_H
