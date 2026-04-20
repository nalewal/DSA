#include<iostream>
using namespace std;
int
main ()
{
  int n, left = -1, right = -1;
  cin >> n;
  int arr[n];
  int cumsum[100] = { 0 };
  cin >> arr[0];
  cumsum[0] = arr[0];
  for (int i = 1; i < n; i++)
    {
      cin >> arr[i];
      cumsum[i] = cumsum[i - 1] + arr[i];
    }
  int crr = 0, max = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
	{
	  crr = 0;
	  crr = cumsum[j] - cumsum[i - 1];
	  if (crr > max)
	    {
	      max = crr;
	      left = i;
	      right = j;
	    }
	}
    }
  cout << max << endl;
  for (int k = left; k <= right; k++)
    cout << arr[k] << ",";
  return 0;
}
