cmake_minimum_required(VERSION 3.31)
project(Cpp_learning)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(
            -Wall          # Enable most warnings
            -Wextra        # Enable extra warnings
            -Wpedantic     # Enforce strict ISO compliance
            -Werror        # Treat all warnings as errors
    )
endif()

# Centralised warnings / sanitiser flags
include(cmake/compile_options.cmake)

# Add every exercise sub-dir automatically
file(GLOB EX_DIRS CONFIGURE_DEPENDS "exercises/*")
foreach(dir ${EX_DIRS})
    if (EXISTS "${dir}/CMakeLists.txt")
        add_subdirectory(${dir})
    endif()
endforeach()