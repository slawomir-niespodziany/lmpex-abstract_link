cmake_minimum_required(VERSION 3.22)

add_library(abstract_link INTERFACE)

target_include_directories(abstract_link 
                           INTERFACE include)

target_link_libraries(abstract_link 
                      INTERFACE lmf)