#include<iostream>
using namespace std;
int
main ()
{
  int n, left = -1, right = -1;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int max = 0, crr = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
	{
	  crr = 0;
	  for (int k = i; k <= j; k++)
	    {
	      crr += arr[k];
	    }
	  if (crr > max)
	    {
	      max = crr;
	      left = i;
	      right = j;
	    }
	}
    }
  cout << "maximum is" << max << endl;
  for (int k = left; k <= right; k++)
    cout << arr[k] << ",";
}
