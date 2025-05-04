#ifndef FRESHWATER_CHECKER_H
#define FRESHWATER_CHECKER_H
#include "SeaChecker.h"

class InvertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* creature) override;
};
#endif