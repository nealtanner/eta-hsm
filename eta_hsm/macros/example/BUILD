load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "update_control_hsm_hsm",
    hdrs = ["UpdateControlHsm-hsm.hpp"],
)

cc_library(
    name = "update_control_hsm_inl",
    hdrs = ["UpdateControlHsm-inl.hpp"],
    deps = [
        "//eta_hsm/utils",
    ],
)

cc_library(
    name = "update_control_hsm",
    srcs = ["UpdateControlHsm.cpp"],
    hdrs = ["UpdateControlHsm.hpp"],
    visibility = ["//eta_hsm/macros/tests:__pkg__"],
    deps = [
        ":update_control_hsm_hsm",
        ":update_control_hsm_inl",
        "//eta_hsm",
        "//eta_hsm/macros",
        "//eta_hsm/utils",
    ],
)
