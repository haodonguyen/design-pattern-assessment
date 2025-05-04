#ifndef SEA_CREATURE_H
#define SEA_CREATURE_H
#include <string>
using namespace std;
class SeaCreature {
protected:
    string type;
    string species;
    double size;
    bool hasEggs;

public:
    SeaCreature(string type,string species, double size, bool hasEggs);
    virtual ~SeaCreature() = default;
    string getType() const;
    string getSpecies() const;
    double getSize() const;
    bool isCarryingEggs() const;
};
#endif