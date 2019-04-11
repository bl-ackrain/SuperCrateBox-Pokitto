#include "SuperCrateBox.h"
#include <PicoBoy.h>

///////////////////////////////////////////// SETUP
void setup() {
  pb.begin();
  pb.setFrameRate(25);
  pb.display.setFont(font3x5);
  _init();
}

///////////////////////////////////////////// LOOP
void loop() {
  if (pb.update()) {
    _gameloop();
  }
}
