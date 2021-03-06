#ifndef TANKGAMEMAIN_H
#define TANKGAMEMAIN_H
#include "tankGameStructure.h"
#include "helpPage.h"
#include "minimalGame.h"
#include "classicMode.h"

#define VERSION_MAJOR 0
#define VERSION_MINOR 4
#define VERSION_REVISION 0
#define VERBUILD ""
#define VERSION "ALPHA"
#define BUILD 1297

class tankgamemain
{
    public:
        void getVariable1(int audio);
        void menuInfo();
        void mainMenu();
        void play();
        void settings();
        void info();
        void playerSettings();
        void debugMode();
        void antiDebugMode();
    protected:

    private:
        void quit();
};

#endif // TANKGAMEMAIN_H
