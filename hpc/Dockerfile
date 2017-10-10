FROM ericvh/arm64-ubuntu-dev
MAINTAINER Eric Van Hensbergen <ericvh@gmail.com>
# if you don't have qemu-user-static installed these will fail
# if you don't have binfmt-support setup right, these will fail
RUN apt-get install -y libopenmpi-dev openmpi-bin openmpi-common gfortran pciutils pkg-config gfortran libatlas-dev hpcc tau papi-tools libpapi-dev valgrind sysstat openssh-server systemtap-common ltrace strace
RUN apt-get clean
