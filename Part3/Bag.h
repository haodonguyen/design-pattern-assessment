#ifndef BAG_H
#define BAG_H
#include <vector>
#include "SeaCreature.h"

class Bag {
private:
    std::vector<SeaCreature*> creatures;

public:
    ~Bag();
    void addCreature(SeaCreature* creature);
    const std::vector<SeaCreature*>& getCreatures() const;
};
#endif