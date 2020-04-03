# CMakeList.txt : CMake project for Train20200403, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.15)

project ("Train1")

# Add source to this project's executable.
add_executable (${PROJECT_NAME} 
 "src/main.cpp" 
 "src/dataKeeper.cpp"
 "src/processor.cpp" 
 "src/Box.cpp"
)


target_include_directories( ${PROJECT_NAME}  
	PRIVATE 
		"${PROJECT_SOURCE_DIR}/include"
		"${PROJECT_SOURCE_DIR}/include"
		"${PROJECT_SOURCE_DIR}/include"
)

# TODO: Add tests and install targets if needed.
