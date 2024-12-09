# Introduction

This is are documented efforts to running really basic simulations in common
software like pythia and madgraph and usage of some basic analysis tools. 

Look at `madgraph-setup`, I will be assuming a similar setup.
To run the setup:

- Use docker scp to copy the files over to the container (assumed running)
```{.sh}
cd ..         // from current dir of README.md
docker cp introduction madgraph:/home/moby
```
Use `shell.sh` to drop into the docker shell. 
Then follow the respective steps for each:

## Pythia8

If you are not using above docker image you can, download 
[Pythia8](https://pythia.org/download/pythia83/pythia8312.tgz), extract it and compile it.

To setup use the Makefile to compile all the samples.
Please pass in the custom variable `PYTHIA_DIR` if your installation doesn't use above
docker-setup.
Just run `make` in the directory to generate the files.

The pythia library location should also be added in `LD_LIBRARY_PATH` varible,
before executing, if you are not using the dockerized setup.
Recommended way to run is `./executable > output.txt`.

## ROOT

Root is also provided as a part of the dockerized image. But there is platform
packages available in the [website](https://root.cern/install/all_releases/).
The installation steps involve downloading and extracting the tar, and then
sourcing the suitable `thisroot` script found in the bin directory.

The Makefile already contains the additional libraries and flags required to run
the root file. To open the output root file in rootAnalsyer, type `root
output_file.root`


