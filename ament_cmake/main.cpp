int main(int argc, char ** argv)
{
  // Should be caught by bugprone-sizeof-expression
  return sizeof(1);
}
