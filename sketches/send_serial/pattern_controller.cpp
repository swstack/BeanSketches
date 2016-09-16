#include "pattern_controller.h"
#include "Bean.h"

void PatternController::setPattern(int pattern)
{
    this->currentPattern = pattern;
}

void PatternController::service()
{
  switch (this->currentPattern) {
    case PATTERN_1:
      Bean.setLed(100, 0, 0);
      break;
    case PATTERN_2:
      Bean.setLed(0, 100, 0);
      break;
    case PATTERN_3:
      Bean.setLed(0, 0, 100);
      break;
    default:
      break;
  }
}
