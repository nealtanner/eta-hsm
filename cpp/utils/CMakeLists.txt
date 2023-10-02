
add_library(utils_lib
        EventBucket.cpp
        Timer.cpp
        TimeTracker.cpp
)
generate_export_header(utils_lib)
install(TARGETS utils_lib  EXPORT EtaHsmTargets
        DESTINATION lib)
install(
        FILES
        EventBucket.hpp
        FakeClock.hpp
        TestLog.hpp
        Timer.hpp
        TimeTracker.hpp
        DESTINATION include/eta_hsm/utils
)

add_subdirectory(tests)
