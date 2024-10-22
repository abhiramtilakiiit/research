docker build -t madgraph \
    --build-arg BUILDER_IMAGE=python:3.11-slim-bookworm \
    --build-arg HEPMC3_VERSION=3.3.0 \
    --build-arg FASTJET_VERSION=3.3.4 \
    --build-arg LHAPDF_VERSION=6.5.4 \
    --build-arg PYTHIA_VERSION=8312 \
    --build-arg MG_VERSION=3.5.5 \
    --build-arg ROOT_VERSION=6.32.04 \
    .
