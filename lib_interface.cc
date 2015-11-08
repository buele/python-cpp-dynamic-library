#include "SampleClass.h"

extern "C" int sum(int a, int b)
{
  SampleClass * sampleClass = new SampleClass();
  int result = sampleClass->sum(a,b);
  delete sampleClass;
  return result;

}
