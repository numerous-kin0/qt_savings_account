cmake_minimum_required(VERSION 3.14)

project(Question1Assess3 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Question1Assess3
  main.cpp
  transaction.h
  transaction.cpp
  deposit.h
  deposit.cpp
  withdrawal.h
  withdrawal.cpp
  balanceenquiry.h
  balanceenquiry.cpp
  savingsaccount.h
  savingsaccount.cpp
)
target_link_libraries(Question1Assess3 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Question1Assess3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
