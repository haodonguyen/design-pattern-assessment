#ifndef APP_H
#define APP_H
#include "SeaPlusPlusEngine.h"
#include "Bag.h"

class App {
private:
    SeaPlusPlusEngine engine;
    Bag* bag;

public:
    App();
    void run();
    void checkBag();
};
#endif