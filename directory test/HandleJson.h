#pragma once

#include <filesystem> // used to check if files exists or not
#include <fstream> // used to read/write files
#include <nlohmann/json.hpp> // json
using json = nlohmann::json;

/**
* @brief Class containing functions for handling jsons
*/
class HandleJson
{
public:
	/**
	* @brief Find a json at file_path
	*
	* @param file_path path to look for json
	*
	* @returns json object read from the file path iff the path is valid, null object otherwise
	*/
	static json readJson(const std::string& file_path);

	/**
	* @brief Writes a json to a filepath
	*
	* @param file_path path to write json
	* @param j json to write
	*/
	static void writeJson(const std::string& file_path, const json& j);
};