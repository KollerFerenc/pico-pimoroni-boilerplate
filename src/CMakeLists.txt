add_executable(${PROJECT_NAME}
    main.cpp
)

# Include required libraries
# include(...)

target_link_libraries(${PROJECT_NAME}
    pico_stdlib
)

if(${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    message(STATUS ${CMAKE_BUILD_TYPE})
    add_definitions(-DDEBUG)
endif()

# create map/bin/hex file etc.
pico_add_extra_outputs(${PROJECT_NAME})

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)
