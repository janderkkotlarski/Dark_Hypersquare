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
  const std::vector <std::string> m_start_screen_filenames;
  const std::vector <std::string> m_square_sprite_filenames;
  const std::vector <std::string> m_player_sprite_filenames;
  const std::vector <std::string> m_interface_icon_filenames;
  const std::vector <std::string> m_number_icon_filenames;

  const std::string m_copy_folder_name;
  const std::string m_paste_folder_name;

  const QDir m_copy_folder;
  const QDir m_paste_folder;

  bool check_files_in_folder(const QDir& folder);

  void transfer_files_between_folders(const QDir& source_folder,
                                      const QDir& target_folder);
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

QDir get_base_folder();

QDir get_paste_folder();

QDir get_resource_folder();

QDir set_target_folder(const QDir& start_folder,
                       const std::string& folder_name);

QString folder_file(const QDir& folder,
                    const std::string& filename);

void transfer_file(const QDir& source_folder,
                   const QDir& target_folder,
                   const std::string& filename);

void transfer_files(const QDir& source_folder,
                    const QDir& target_folder,
                    const std::vector <std::string>& filenames);

bool check_file(const QDir& folder,
                const std::string& file_name);

bool check_files(const QDir& folder,
                 const std::vector <std::string>& filenames);

void checking_folder_path(const QDir& folder);

#endif // RESOURCES_H
