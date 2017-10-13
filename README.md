This repositories contain Dockerfiles building up an Ubuntu HPC development environment for arm64 and arm64+sve.

In order to actually be able to run SVE, you will need to obtain the ARM instruction emulator (ARMie) and include it in the armie directory prior to docker build.

More information on Arm SVE available here:
   https://developer.arm.com/products/software-development-tools/hpc/sve
