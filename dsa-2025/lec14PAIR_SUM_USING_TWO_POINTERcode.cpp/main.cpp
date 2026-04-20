#include<iostream>
using namespace std;
int
main ()
{
  int n, key, crrsum = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> key;
  int i = 0;
  int j = n - 1;
  while (i < j)
    {
      int crrsum = arr[i] + arr[j];
      if (crrsum > key)
	{
	  j--;
	}
      else if (crrsum < key)
	{
	  i++;
	}
      else
	{
	  cout << arr[i] << "and" << arr[j] << endl;
	  i++;
	  j--;
	}

    }
  return 0;
}
