#include <stdio.h>
void binaryC (int a)
{
  int arr[8];
  int i;
  for (i = 0; a > 0; i++)
    {
      arr[i] = a % 2;
      a = a / 2;
    }
  for (; i < 8; i++)
    arr[i] = 0;
  for (int i = 7; i > -1; i--)
    printf ("%d", arr[i]);

}

int main ()
{
  printf ("enter the ip address\n");
  int a, b, c, d;
  char e, f, g;
  scanf ("%d", &a);
  scanf ("%c", &e);
  scanf ("%d", &b);
  scanf ("%c", &e);
  scanf ("%d", &c);
  scanf ("%c", &e);
  scanf ("%d", &d);

  printf ("\n");
  binaryC (a);
  printf (".");
  binaryC (b);
  printf (".");
  binaryC (c);
  printf (".");
  binaryC (d);

  printf ("\n");

  return 0;
}