#include <iostream>
using namespace std;

int
main ()
{
  
    // cout<<"Hello World!";
  int n, m;
  
cin >> n >> m;
  
int a[m][n];
  
for (int i = 0; i < m; i++)
    {
      
for (int j = 0; j < n; j++)
	{
	  
cin >> a[i][j];
    
} 
} 
    // wave print code
    for (int col = 0; col < n; col++)
    {
      
if (col % 2 == 0)
	{
	  
	    // even col top down
	    for (int row = 0; row < m; row++)
	    {
	      
cout << a[row][col] << " ";
	
} 
}
      
      else
	{
	  
	    // bottom up direction
	    for (int row = m - 1; row >= 0; row--)
	    {
	      
cout << a[row][col] << " ";
    
} 
} 
} 
return 0;

}


