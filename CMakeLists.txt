cmake_minimum_required(VERSION "3.0")
project("test")
add_library(Find find.c find.h) #Tu sie dodaje biblioteki jako kazdy c file
add_library(Sort sort.c sort.h) 
add_executable(test main.c) #Tutaj nazwa binarki i main.c
target_link_libraries(test PRIVATE Find PRIVATE Sort) # podłączenie bibliotek do binarki
