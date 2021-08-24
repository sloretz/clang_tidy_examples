#include <string>

int foo()
{
  // caught by bugprone-sizeof-expression
  return sizeof(2);
}

int bar()
{
  // caught by bugprone-sizeof-container
  std::string s;
  return sizeof(s);
}
