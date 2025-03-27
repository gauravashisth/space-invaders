cmake_minimum_required(VERSION 3.10)
project(space-invaders)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include Raylib headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Collect all .cpp files in src/ automatically
file(GLOB SOURCES "src/*.cpp")
# Add executable with all source files
add_executable(space-invaders ${SOURCES})

# Link Raylib static library
target_link_libraries(space-invaders ${CMAKE_SOURCE_DIR}/lib/libraylib.a)

# Add system dependencies for Raylib
if (APPLE)
    target_link_libraries(space-invaders "-framework OpenGL" "-framework Cocoa" "-framework IOKit" "-framework CoreVideo")
elseif (UNIX)
    target_link_libraries(space-invaders m pthread dl GL X11)
endif()
