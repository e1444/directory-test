# CMakeList.txt : CMake project for directory test, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeTarget "directory test.cpp" "directory test.h" "HandleJson.cpp" "HandleJson.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

# link nlohmann json
find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(CMakeTarget PRIVATE nlohmann_json::nlohmann_json)