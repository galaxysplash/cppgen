#include <exception>
#include <filesystem>
#include <iostream>

constexpr const char *const TEMPLATE_FOLDER_NAME = "templates";

std::filesystem::path get_app_path(const int argc,
                                   const char *const *const argv) {
  if (argc <= 0) {
    std::cerr << "No arguments given by OS!";
    std::terminate();
  }

  return std::filesystem::path{argv[0]};
}

int main(const int argc, const char *const *const argv) {
  const std::filesystem::path app_path = get_app_path(argc, argv);
  std::filesystem::path template_folder_path = app_path / TEMPLATE_FOLDER_NAME;

  if (/*TODO! check if path to template folder is valid*/ true) {
  }
}