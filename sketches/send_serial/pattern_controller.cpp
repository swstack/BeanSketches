#include "pattern_controller.h"
#include "Bean.h"

void PatternController::setPattern(int pattern)
{
    this->currentPattern = pattern;
}

void PatternController::service()
{
  Bean.setLed(255, 0, 0);
}
