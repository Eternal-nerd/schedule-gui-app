cmake_minimum_required(VERSION 3.5)
project(schedule-gui-app)

# set standard:
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SDL 
find_package(SDL2 REQUIRED)

# include SDL dirs
include_directories(${SDL2_INCLUDE_DIRS})

# add source files:
set(SOURCES
	src/main.cpp
)

# add headers
set(HEADERS
)

# add executable
add_executable(schedule-gui-app ${SOURCES} ${HEADERS})

# link libs
target_link_libraries(schedule-gui-app ${SDL2_LIBRARIES})

# Specify the output directory for the binary
set_target_properties(schedule-gui-app PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# command to run in root dir:
add_custom_target(run
	COMMAND schedule-gui-app
	DEPENDS schedule-gui-app
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
	COMMENT "Running schedule-gui-app program"
)

