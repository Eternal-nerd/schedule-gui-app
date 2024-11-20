cmake_minimum_required(VERSION 3.5)
project(schedule-gui-app)

# set standard:
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SDL3 
find_package(SDL3 REQUIRED CONFIG REQUIRED COMPONENTS SDL3-shared)
# SDL3_image
find_package(SDL3_image REQUIRED CONFIG REQUIRED COMPONENTS SDL3_image-shared)

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
target_link_libraries(schedule-gui-app PRIVATE SDL3::SDL3 SDL3_image::SDL3_image)

# Specify the output directory for the binary
set_target_properties(schedule-gui-app PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# command to run in root dir:
add_custom_target(run
	COMMAND schedule-gui-app
	DEPENDS schedule-gui-app
	WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
	COMMENT "Running schedule-gui-app program"
)

