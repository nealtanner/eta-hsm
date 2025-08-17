load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "eta_hsm",
    srcs = [
        "Hsm.cpp",
        "Hsm.hpp",
        "Hsm-inl.hpp",
        "AutoLoggedStateMachine.cpp",
        "AutoLoggedStateMachine.hpp",
    ],
    hdrs = [
        "Hsm.hpp",
        "Hsm-inl.hpp",
        "AutoLoggedStateMachine.hpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//eta_hsm/utils",
        "@com_github_quicknir_wise_enum//:wise_enum",
    ]
)
