#include "HandleJson.h"

json HandleJson::readJson(const std::string& file_path)
{
    json j = json::object(); // create dummy object in case the file doesn't exist

    if (std::filesystem::exists(file_path)) { // if the file exists, read it in
        std::ifstream in(file_path);
        j << in;
    }

    return j;
}

void HandleJson::writeJson(const std::string& file_path, const json& j)
{
    std::ofstream o(file_path); // save item
    o << std::setw(4) << j;

    return;
}