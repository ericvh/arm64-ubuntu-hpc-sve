FROM ericvh/arm64-ubuntu-hpc
MAINTAINER Eric Van Hensbergen <ericvh@gmail.com>
# if you don't have qemu-user-static installed these will fail
# if you don't have binfmt-support setup right, these will fail
RUN apt-get install -y bison flex texi2html python-pkgconfig wget && RUN apt-get clean
WORKDIR /usr/local/src
# binutils
RUN wget http://ftp.gnu.org/gnu/binutils/binutils-2.29.tar.gz && tar xzf binutils-2.29.tar.gz && cd binutils-2.29 && ./configure && make -j && make install && cd .. && rm -rf binutils-*
# gcc
RUN git clone --depth 1 -b linaro-dev/sve git://gcc.gnu.org/git/gcc.git && cd gcc && ./contrib/download_prerequisites && mkdir objdir && cd objdir && ../configure --disable-werror --enable-languages=c,c++,fortran,go && make -j && make install && cd ../.. && rm -rf gcc
WORKDIR /root
ADD bashrc /root/.bashrc
VOLUME ["/home"]
ENTRYPOINT ["bash", "-i"]
