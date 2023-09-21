#! /bin/bash

set -euxo pipefail

docker run -t --rm \
       --volume $(realpath $(dirname $0)):/opt/eta-hsm \
       ransage/docker-build-cmake-git-python3 \
       bash -c "
set -euxo pipefail
mkdir /tmp/build
cd /tmp/build
cmake -S /opt/eta-hsm/cpp
ls _deps
make -j5
"
