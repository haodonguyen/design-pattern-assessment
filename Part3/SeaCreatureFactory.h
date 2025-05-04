#ifndef SEA_CREATURE_FACTORY_H
#define SEA_CREATURE_FACTORY_H
#include "SeaCreature.h"
#include <string>
using namespace std;

class SeaCreatureFactory {
public:
    static SeaCreature* createCreature(string type, string species, double size, bool hasEggs);
};

#endif