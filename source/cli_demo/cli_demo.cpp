#include <iostream>

int main(int argc, char *argv[])
{
  void*          ptr = 0;
  long long      i   = 0x12345678;
  unsigned char* c   = (unsigned char*)&i;

  printf("Compilation date\t: %s, %s\n", __TIME__, __DATE__);
  printf("Bytes of pointer type\t: %d\n", sizeof(ptr));
  printf("\nTest for Big endian and Little endian\n");
  printf("64bit number\t: 0x%08X\n", i);
  printf("Byte sequence\t: 0x%02X%02X%02X%02X\n",
    c[0], c[1], c[2], c[3]);

  return 0;
}
