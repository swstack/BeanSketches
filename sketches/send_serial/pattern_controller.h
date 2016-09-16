#ifndef _INCLUDE_PATTERN_CONT
#define _INCLUDE_PATTERN_CONT

#define PATTERN_1
#define PATTERN_2
#define PATTERN_3

using namespace std;

class PatternController
{
private:
   int currentPattern;
public:
   void setPattern(int);
   void service();
};

#endif
