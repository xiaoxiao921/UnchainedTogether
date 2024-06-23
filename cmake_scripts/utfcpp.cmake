include(FetchContent)

FetchContent_Declare(
	utfcpp
	GIT_REPOSITORY https://github.com/nemtrif/utfcpp.git
	GIT_TAG 6be08bbea14ffa0a5c594257fb6285a054395cd7
)
FetchContent_GetProperties(utfcpp)
if(NOT utfcpp_POPULATED)
    FetchContent_Populate(utfcpp)

    set(UTF8_TESTS OFF CACHE BOOL "" FORCE)
    set(UTF8_SAMPLES OFF CACHE BOOL "" FORCE)

    add_subdirectory(${utfcpp_SOURCE_DIR} ${utfcpp_BINARY_DIR})
endif()
