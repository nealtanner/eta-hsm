ARG UBUNTU_VERSION=22
FROM ubuntu:${UBUNTU_VERSION}.04

RUN apt-get update --fix-missing \
 && DEBIAN_FRONTEND=noninteractive apt-get -y install --no-install-recommends \
       build-essential \
       ca-certificates \
       cmake \
       git \
       python3 \
 && rm -rf /var/lib/apt/lists/*
