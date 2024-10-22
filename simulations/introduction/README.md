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

Setup use the Makefile to compile all the examples.
Just run `make` in the directory to generate the files.

Recommended way to run is `./executable > output.txt`

### Simulating a Proton

Simulating a proton collision requires us to have a `SoftQCD:all` and `HardQCD:all`
modes to be enabled because this is a hardon collision.

