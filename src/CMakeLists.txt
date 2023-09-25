cmake_minimum_required(VERSION 3.0 FATAL_ERROR)


SET(Z_INSTALL_DIR "~/.zapp/bin")
SET(Z_PROJECT_NAME "hello")


project(${Z_PROJECT_NAME} VERSION 0.1.0)
add_executable(${PROJECT_NAME} "")
target_sources(
  ${PROJECT_NAME}
  PRIVATE
    main.c
)


configure_file (
    "${PROJECT_SOURCE_DIR}/include/version.h.in"
    "${PROJECT_BINARY_DIR}/include/version.h"
)


install(TARGETS ${PROJECT_NAME} DESTINATION ${Z_INSTALL_DIR})

