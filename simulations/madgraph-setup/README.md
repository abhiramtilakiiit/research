# Setup Madgraph5 AMC with NLO deps

Credits to: [MadGraph5_aMC-NLO Docker Image](https://github.com/scailfin/MadGraph5_aMC-NLO)

## Software

The Docker image contains installations for:

- MadGraph5\_aMC@NLO v3.5.5
- Python 3.11
- HepMC3 v3.3.0
- LHAPDF v6.5.4
- FastJet v3.3.4
- PYTHIA v8.312
- HepTools - Ninja, Collier


## Setup Instructions 

- Install `docker` and `docker-buildx` tools. 
- Run `build.sh`

The build uses a very generic tagname `madgraph`, feel free to change it in the
build script.

## Usage

I usually start a docker instance in the background using the `start.sh` command.
Even the docker image name when running will be generic `madgraph`, feel free to
change the `--name` command.

Use `shell.sh` to drop to the terminal. The `files` directory is where the
outputs get saved.

If you want to run a script in madgraph:

```{.sh}
docker exec -it madgraph "mg5_aMC bhabha_scattering.mg5"
docker exec -it madgraph "bash script.sh"
```

