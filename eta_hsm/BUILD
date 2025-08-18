load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "eta_hsm",
    srcs = [
        "AutoLoggedStateMachine.cpp",
        "AutoLoggedStateMachine.hpp",
        "Hsm.cpp",
        "Hsm.hpp",
        "Hsm-inl.hpp",
    ],
    hdrs = [
        "AutoLoggedStateMachine.hpp",
        "Hsm.hpp",
        "Hsm-inl.hpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//eta_hsm/utils",
        "@com_github_quicknir_wise_enum//:wise_enum",
    ],
)
