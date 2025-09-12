load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//eta_hsm/examples/controller/tests:__pkg__"])

cc_library(
    name = "example_control_hsm",
    hdrs = ["ExampleControl-hsm.hpp"],
)

cc_library(
    name = "example_control_inl",
    hdrs = ["ExampleControl-inl.hpp"],
    deps = [
        "//eta_hsm/utils",
    ],
)

cc_library(
    name = "example_control",
    srcs = ["ExampleControl.cpp"],
    hdrs = ["ExampleControl.hpp"],
    visibility = ["//eta_hsm/examples/controller/tests:__pkg__"],
    deps = [
        ":example_control_hsm",
        ":example_control_inl",
        "//eta_hsm",
        "//eta_hsm/utils",
        "@com_github_quicknir_wise_enum//:wise_enum",
    ],
)
