file(GLOB ASM_SOURCES "${CMAKE_CURRENT_LIST_DIR}/test_*.s" "${CMAKE_CURRENT_LIST_DIR}/rcs_bl_*.s")

add_library(tests STATIC
		${ASM_SOURCES}
)
target_include_directories(tests PUBLIC ${CMAKE_CURRENT_LIST_DIR})
