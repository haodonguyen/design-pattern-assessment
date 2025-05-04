#ifndef INVERTEBRATE_CREATURE_H
#define INVERTEBRATE_CREATURE_H
#include "SeaCreature.h"

class InvertebrateCreature : public SeaCreature {
private:
    std::string species;

public:
    InvertebrateCreature(const std::string& type, double size, bool hasEggs);
};
#endif