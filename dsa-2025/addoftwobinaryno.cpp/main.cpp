/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int
reverse (int n)
{
  int ans = 0;
  while (n > 0)
    {
      int lastdigit = n % 10;
      ans = ans * 10 + lastdigit;
      n /= 10;
    }
  return ans;
}





int
addBinary (int a, int b)
{
  int ans = 0;
  int precarry = 0;
  while (a > 0 && b > 0)
    {
      if (a % 2 == 0 && b % 2 == 0)
	{
	  ans = ans * 10 + precarry;
	  precarry = 0;
	}
      else if (a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0)
	{
	  if (precarry == 1)
	    {
	      ans = ans * 10 + 0;
	      precarry = 1;
	    }
	  else
	    {
	      ans = ans * 10 + 1;
	      precarry = 0;
	    }
	}

      else
	{
	  ans = ans * 10 + precarry;
	  precarry = 1;

	}
      a /= 10;
      b /= 10;
    }


  while (a > 0)
    {
      if (precarry == 1)
	{
	  if (a % 2 == 1)
	    {
	      ans = ans * 10 + 0;
	      precarry = 1;
	    }
	  else
	    {
	      ans = ans * 10 + 1;
	      precarry = 0;
	    }
	}

      else
	{
	  ans = ans * 10 + (a % 2);
	  a /= 10;
	}
      while (b > 0)
	{
	  if (precarry == 1)
	    {
	      if (b % 2 == 1)
		{
		  ans = ans * 10 + 0;
		  precarry = 1;
		}
	      else
		{
		  ans = ans * 10 + 1;
		  precarry = 0;
		}
	    }

	  else
	    {
	      ans = ans * 10 + (b % 2);
	      b /= 10;
	    }

	  if (precarry == 1)
	    {
	      ans = ans * 10 + 1;
	      ans = reverse (ans);
	      return ans;
	    }
	}
    }

  int main ()
  {
    int a, b;
    cin >> a >> b;
    cout << addBinary (a, b) << endl;

    return 0;
  }
