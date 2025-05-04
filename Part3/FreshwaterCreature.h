#ifndef FRESHWATER_CREATURE_H
#define FRESHWATER_CREATURE_H
#include "SeaCreature.h"

class FreshWaterCreature : public SeaCreature {
private:
    std::string species;

public:
    FreshWaterCreature(const std::string& type, double size, bool hasEggs);
};
#endif 