# Install script for directory: /home/clarence/git/mavlink-gbp-release

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/ros/kinetic")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mavlink" TYPE FILE FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/config.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mavlink" TYPE DIRECTORY FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/include/" FILES_MATCHING REGEX "/[^/]*\\.h[^/]*$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavlink" TYPE DIRECTORY FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/src/" FILES_MATCHING REGEX "/[^/]*\\.c[^/]*$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/clarence/git/mavlink-gbp-release/share/mavlink" FILES_MATCHING REGEX "/[^/]*\\.c[^/]*$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cmake")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavlink/cmake" TYPE FILE FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/mavlink-config.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "pkgconfig")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/mavlink.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "license")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavlink" TYPE FILE FILES "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/COPYING.txt")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "catkin")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavlink" TYPE FILE FILES "/home/clarence/git/mavlink-gbp-release/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/clarence/git/mavlink-gbp-release/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
