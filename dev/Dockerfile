# ARM64 Version of Ubuntu Base Image w/dev packages
#
# VERSION               0.0.3

FROM multiarch/ubuntu-core:arm64-xenial
MAINTAINER Eric Van Hensbergen <ericvh@gmail.com>

RUN apt-get update && apt-get upgrade -y && apt-get install -y autoconf libtool gettext autoconf-archive gnu-standards indent transfig ocaml libc++-dev sudo tmux git-core subversion llvm gdb binutils-multiarch binutils-multiarch clang software-properties-common python-software-properties time vim emacs && apt-get clean
