cmake_minimum_required(VERSION 3.12)
project(ComputerVision)

set(CMAKE_CXX_STANDARD 14)

add_executable(ComputerVision
        main.cpp)

IF (WIN32)
    MESSAGE(STATUS "Now is windows")
    set(OpenCV_DIR "D:\\opencv4\\build\\install")
ELSEIF (APPLE)
    MESSAGE(STATUS "Now is Apple systens.")
#    set(OpenCV_DIR /Users/apple/Desktop/richard/opencv4/build)
    set(OpenCV_DIR /Users/richard/opencv4/build)
ELSEIF (UNIX)
    MESSAGE(STATUS "Now is UNIX-like OS's.")
ENDIF ()

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

set(OpenCV_LIBS
        opencv_core
        opencv_imgproc
        opencv_highgui
        opencv_imgcodecs)

target_link_libraries(ComputerVision ${OpenCV_LIBS})