file(GLOB_RECURSE CONTINUUM_SOURCES "*.cpp")

add_library(Continuum ${CONTINUUM_SOURCES})

target_include_directories(Continuum
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include

    PRIVATE
        ${PROJECT_SOURCE_DIR}/include/continuum
)

target_compile_options(Continuum PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -maes
    -mpclmul
    -msse4.1
    -Wno-ignored-attributes
)