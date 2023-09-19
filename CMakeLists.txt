
	cmake_minimum_required(VERSION 3.10)
	set(CMAKE_CXX_STANDARD 17)
	set(CMAKE_CXX_STANDARD_REQUIRED ON)
	
	project(TTT VERSION 1.0)
	#add_library(Tls STATIC /home/mel/Documents/cbox/TTT/lib/_Tools.cpp) 
	#target_include_directories(Tls PUBLIC /home/mel/Documents/cbox/TTT/lib/)
	
	#file(GLOB_RECURSE SRC_FILES src/*.cpp)
	#add_executable(TTT main.cpp SRC_FILES)
	add_executable(TTT main.cpp)
	#target_include_directories(TTT PUBLIC ${CMAKE_CURENT_SOURCE_DIR}/include)
	target_include_directories(TTT PUBLIC /home/mel/Documents/cbox/TTT/include)

	#target_link_libraries(TTT public Tls)
