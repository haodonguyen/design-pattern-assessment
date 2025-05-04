#ifndef VERTEBRATE_CHECKER_H
#define VERTEBRATE_CHECKER_H
#include "SeaChecker.h"

class InvertebrateChecker : public SeaChecker {
public:
    bool check(SeaCreature* creature) override;
};
#endif