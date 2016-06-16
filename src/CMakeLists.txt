rock_library(lib
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(lib_bin Main.cpp
    DEPS lib)

