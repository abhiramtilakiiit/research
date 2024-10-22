#include "Pythia8/Pythia.h"
#include <iostream>

int
main() {
    int n = 3;

    Pythia8::Pythia pythia;

    // proton pgp is 2212
    pythia.readString("Beams: idA = 2212");
    pythia.readString("Beams: idB = 2212");
    pythia.readString("SoftQCD:all = on");
    pythia.readString("HardQCD:all = on");
    pythia.init();

    for (int i = 0; i < n; i++) {
        if (!pythia.next())
            continue;

        int n_particles = pythia.event.size();
        std::cout << "\n\nEvent: " << i;
        std::cout << "Event size (number of particlse): " << n_particles
                  << std::endl;

        // print information about each of the particle produced
        for (int j = 0; j < n_particles; j++) {
            int id = pythia.event[j].id();
            double m = pythia.event[j].m();

            double px = pythia.event[j].px();
            double py = pythia.event[j].py();
            double pz = pythia.event[j].pz();

            double p_abs = sqrt(pow(px, 2) + pow(py, 2) + pow(pz, 2));
            std::cout << "\tid: " << id << "\tmass: " << m
                      << "\tmomentum: " << p_abs << std::endl;
        }
    }

    return 0;
}
