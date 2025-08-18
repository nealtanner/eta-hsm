load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

package(default_visibility = ["//eta_hsm/examples/cd_player/tests:__pkg__"])

cc_library(
    name = "cd_player_hsm",
    hdrs = ["CdPlayer-hsm.hpp"],
)

cc_library(
    name = "cd_player_inl",
    hdrs = ["CdPlayer-inl.hpp"],
    deps = [
        "//eta_hsm/utils",
    ],
)

cc_library(
    name = "cd_player",
    srcs = ["CDPlayer.cpp"],
    hdrs = ["CDPlayer.hpp"],
    visibility = ["//eta_hsm/examples/cd_player/tests:__pkg__"],
    deps = [
        ":cd_player_hsm",
        ":cd_player_inl",
        "//eta_hsm",
        "//eta_hsm/utils",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    visibility = ["//visibility:public"],
    deps = [
        ":cd_player",
    ],
)
