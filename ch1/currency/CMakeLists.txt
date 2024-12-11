cmake_minimum_required(VERSION 2.8)

project(currency)

include_directories(include)

set(SRC src/main.cpp src src/currency.cpp)


add_executable(currency ${SRC})


