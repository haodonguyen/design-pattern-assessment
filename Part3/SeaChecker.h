#ifndef SEA_CHECKER_H
#define SEA_CHECKER_H
#include "SeaCreature.h"

class SeaChecker {
public:
    virtual ~SeaChecker();
    virtual bool check(SeaCreature* creature) = 0;
};
#endif