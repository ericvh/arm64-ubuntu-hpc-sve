FROM ericvh/arm64-ubuntu-hpc-sve
MAINTAINER Eric Van Hensbergen <ericvh@gmail.com>
# if you don't have qemu-user-static installed these will fail
# if you don't have binfmt-support setup right, these will fail
# copy in armie, install and clean?
WORKDIR /tmp
RUN apt-get install -y environment-modules && apt-get clean
ADD ARMIEGENUB14-LB-01-r1p0-02rel1.tgz /tmp
RUN /tmp/ARM-Instruction-Emulator_1.2.1_AArch64_Ubuntu_14.04_aarch64/arm-instruction-emulator-1.2.1_Generic-AArch64_Ubuntu-14.04_aarch64-linux-deb.sh -a
RUN cp /tmp/ARM-Instruction-Emulator_1.2.1_AArch64_Ubuntu_14.04_aarch64/EULA.txt /etc/motd
RUN cp /tmp/ARM-Instruction-Emulator_1.2.1_AArch64_Ubuntu_14.04_aarch64/*.txt /opt/arm
ADD ARMCAGENUB14-LB-01-r1p0-02rel0.tgz /tmp
RUN /tmp/ARM-Code-Advisor-Beta_1.2_AArch64_Ubuntu_14.04_aarch64/arm-code-advisor-1.2_Generic-AArch64_Ubuntu-14.04_aarch64-linux-deb.sh -a 
RUN cp /tmp/ARM-Code-Advisor-Beta_1.2_AArch64_Ubuntu_14.04_aarch64/example_code.txt /root
ADD DSHC0GENUB16-EV-01-r1p0-04rel0.tgz /tmp
RUN chmod ugo+x /tmp/ARM-Compiler-for-HPC-eval_1.4_AArch64_Ubuntu_16.04_aarch64/arm-compiler-for-hpc-1.4_eval_Generic-AArch64_Ubuntu-16.04_aarch64-linux-deb.sh
RUN /tmp/ARM-Compiler-for-HPC-eval_1.4_AArch64_Ubuntu_16.04_aarch64/arm-compiler-for-hpc-1.4_eval_Generic-AArch64_Ubuntu-16.04_aarch64-linux-deb.sh -a
RUN rm -rf /tmp/*
ENV PATH /opt/arm/arm-hpc-compiler-1.4_Generic-AArch64_Ubuntu-16.04_aarch64-linux/bin:/opt/arm/arm-code-advisor-1.2_Generic-AArch64_Ubuntu-14.04_aarch64-linux/bin:/opt/arm/arm-instruction-emulator-1.2.1_Generic-AArch64_Ubuntu-14.04_aarch64-linux/bin:$PATH
WORKDIR /root
ADD bashrc /root/.bashrc
ADD example.c /root/example.c
ADD mandelbrot_exercise.tar.gz /root
VOLUME ["/home"]
ENTRYPOINT ["bash", "-i"]
