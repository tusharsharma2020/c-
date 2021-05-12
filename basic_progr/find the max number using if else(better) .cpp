/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int
main ()
{
  int a;
  int b;
  int c;
  cout << "enter a\n"<< "enter b\n"<<"enter c";
  cin >> a>>b>>c;
  
  if (a > b)
    {
      if (a > c)
	{
	  cout << "a is max";
	}
      else
	{
	  cout << "c is max";
	}
    }
  else
    {
      if (b > c)
	{
	  cout << "b is max";
	}
      else
	{
	  cout << "c is max";
	}

    }

  return 0;
}

