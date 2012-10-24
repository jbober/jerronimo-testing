#SET(TESTNAMES example example2)

#foreach(testname ${TESTNAMES})
	#add_executable(${testname}.test ${testname}.cpp)
	#target_link_libraries(${testname}.test gmock gmock_main)
	#add_test(${testname}.test ${testname}.test)
#endforeach(testname)

SET (CMAKE_MODULE_LINKER_FLAGS /FORCE:UNRESOLVED)

SET(BUILD_SHARED_LIBS OFF)

ENABLE_TESTING()
INCLUDE_DIRECTORIES(..)
INCLUDE_DIRECTORIES(../src)
add_executable(example_test example.cpp)
#SET_TARGET_PROPERTIES(example_test PROPERTIES LINK_FLAGS /FORCE:UNRESOLVED)
target_link_libraries(example_test unresolved_symbol sqlite_poligon sqlite gmock gmock_main)

add_test(example_test example_test)
