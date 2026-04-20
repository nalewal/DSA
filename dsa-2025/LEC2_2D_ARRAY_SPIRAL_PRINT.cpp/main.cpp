/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void
spiral_print (int a[][1000], int m, int n)
{
  int sr = 0, sc = 0, er = m - 1, ec = n - 1;
  while (sr <= er && sc <= ec)
    {
      // print 1st row
      for (int i = sc; i <= ec; i++)
	{
	  cout << a[sr][i] << " ";
	}
      sr++;
      // print last column
      for (int i = sr; i <= er; i++)
	{
	  cout <<a[i][ec] << " ";
	}
      ec--;
      // print last row
      for (int i = ec; i >= sc; i--)
	{
	  cout << a[er][i] << " ";
	}
      er--;
      // print 1st column
      for (int i = er; i >= sr; i--)
	{
	  cout << a[i][sc] << " ";
	}
      sc++;
    }
}

int
main ()
{
  // cout<<"Hello World!";
  int n, m;

  cin >> m >> n;

  int a[1000][1000];

  for (int i = 0; i < m; i++)
    {

      for (int j = 0; j < n; j++)
	{

	  cin >> a[i][j];

	}
    }
  spiral_print (a, m, n);

// print final array
// for(int i=0;i<)



  return 0;
}
