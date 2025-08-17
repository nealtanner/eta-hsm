load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "utils",
    srcs = [
        "EventBucket.cpp",
        "Timer.cpp",
        "TimeTracker.cpp",
    ],
    hdrs = [
        "EventBucket.hpp",
        "FakeClock.hpp",
        "TestLog.hpp",
        "Timer.hpp",
        "TimeTracker.hpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_quicknir_wise_enum//:wise_enum",
    ]
)
