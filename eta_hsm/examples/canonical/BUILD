load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "canonical",
    srcs = ["Canonical.cpp"],
    hdrs = ["Canonical.hpp"],
    visibility = ["//eta_hsm/examples/canonical/tests:__pkg__"],
    deps = [
        "//eta_hsm",
        "@googletest//:gtest_main",
    ],
)
