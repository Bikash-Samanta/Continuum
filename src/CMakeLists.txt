file(GLOB_RECURSE CONTINUUM_SOURCES "*.cpp")

add_library(continuum ${CONTINUUM_SOURCES})

target_include_directories(continuum
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include

    PRIVATE
        ${PROJECT_SOURCE_DIR}/include/continuum
)

target_compile_options(continuum PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -maes
    -mpclmul
    -msse4.1
    -Wno-ignored-attributes
)

target_link_libraries(continuum
    PUBLIC
        dsa
)