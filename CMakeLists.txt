cmake_minimum_required(VERSION 3.17)
project(c_big_brother_is_watching_you)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(c_big_brother_is_watching_you
        main.cpp
        QT_FaceRecognizer.cpp
        QT_FaceRecognizer.h)

find_package(OpenCV)

include_directories(/usr/local/Cellar/cmake/3.20.4)

add_executable(c_big_brother_is_watching_you main.cpp)
target_link_libraries(c_big_brother_is_watching_you /usr/local/Cellar/cmake/3.20.4)