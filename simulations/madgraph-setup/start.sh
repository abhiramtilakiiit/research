#!/bin/bash

docker stop madgraph
docker run -d \
	--name madgraph \
	-v "$(realpath files)":/opt/shared \
	--entrypoint /bin/bash \
	-it madgraph
