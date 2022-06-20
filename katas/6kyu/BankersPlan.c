// https://www.codewars.com/kata/56445c4755d0e45b8c00010a
// Kyu: 6
#define true  1
#define false 0

int fortune(int f0, double p, int c0, int n, double i)
{
  int current_year = 1;
  int expenses = f0;

  for (;current_year < n; current_year++) {
    expenses *= 1.0 + (p / 100);
    expenses -= c0;
    expenses *= 1.0 - (i / 100);
  }
  return (current_year == n && expenses >= 0 ? true : false);
}