#ifndef VERTEBRATE_CREATURE_H
#define VERTEBRATE_CREATURE_H
#include "SeaCreature.h"

class VertebrateCreature : public SeaCreature {
private:
    std::string species;

public:
    VertebrateCreature(const std::string& type, double size, bool hasEggs);
};
#endif