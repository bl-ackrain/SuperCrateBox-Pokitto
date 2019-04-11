#include "SuperCrateBox/SuperCrateBox.h"
#include "Pokitto.h"

Pokitto::Core pb;

int main () {
    pb.begin();
    pb.setFrameRate(30);

    pb.display.loadRGBPalette(palettePico);
    pb.display.setFont(font3x5);
    pb.display.setInvisibleColor(14);//pink
#ifdef POK_SIM
    pb.setFrameRate(25);
    pb.wait(300);
#endif // POK_SIM
    _init();
    while (pb.isRunning()) {
        if (pb.update())
        {
            _gameloop();
        }
    }
    return 0;
}

