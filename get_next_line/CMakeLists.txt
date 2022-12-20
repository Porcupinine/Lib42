cmake_minimum_required(VERSION 3.23)
project(get_next_line C)

set(CMAKE_C_STANDARD 99)

#add_compile_options(-fsanitize=address)

add_executable(get_next_line main.c get_next_line.c get_next_line_utils.c)
#target_link_libraries(get_next_line -lasan)