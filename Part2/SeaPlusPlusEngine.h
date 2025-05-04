#ifndef SEA_PLUS_PLUS_ENGINE_H
#define SEA_PLUS_PLUS_ENGINE_H
#include "SeaChecker.h"
#include "BagChecker.h"
#include "SeaCreature.h"

class SeaPlusPlusEngine {
private:
    SeaChecker* vertebrateChecker;
    SeaChecker* invertebrateChecker;
    BagChecker* bagChecker;

public:
    SeaPlusPlusEngine();
    ~SeaPlusPlusEngine();
    bool evaluateCreature(SeaCreature* creature);
    bool processBag(Bag* bag);
};
#endif