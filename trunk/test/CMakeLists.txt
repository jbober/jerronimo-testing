ENABLE_TESTING()
SET(TESTNAMES example example2)

foreach(testname ${TESTNAMES})
	add_executable(${testname}.test ${testname}.cpp)
	target_link_libraries(${testname}.test gmock gmock_main)
	add_test(${testname}.test ${testname}.test)
endforeach(testname)