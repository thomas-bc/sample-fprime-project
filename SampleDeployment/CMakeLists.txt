#####
# 'SampleDeployment' Deployment:
#
# This sets up the build for the 'SampleDeployment' Application, including custom
# components. In addition, it imports FPrime.cmake, which includes the core F Prime components.
#
#####

###
# Components and Topology
###
add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/SampleComponent/")
add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/Top/")

set(SOURCE_FILES "${CMAKE_CURRENT_LIST_DIR}/Main.cpp")
set(MOD_DEPS ${FPRIME_CURRENT_MODULE}/Top)

register_fprime_deployment()
