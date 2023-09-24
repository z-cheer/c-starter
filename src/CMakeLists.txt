cmake_minimum_required(VERSION 3.0 FATAL_ERROR)


SET(Z_INSTALL_DIR "~/.zapp/bin")
SET(Z_PROJECT_NAME "hello")


project(${Z_PROJECT_NAME})
add_executable(${PROJECT_NAME} "")
target_sources(
  ${PROJECT_NAME}
  PRIVATE
    main.c
)


install(TARGETS ${PROJECT_NAME} DESTINATION ${Z_INSTALL_DIR})

