#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void
doUnion (int a[], int b[], int n, int m)
{
  int size = n + m;
  int un = 0;
  int inttersection = 0;
  int arr[size];
  int j = 0;
  for (int i = 0; i < n; i++)
    {
      arr[j++] = a[i];
    }
  for (int i = 0; i < m; i++)
    {
      arr[j++] = b[i];
    }


  // for(int j=0;j<size;j++){
  //     cout<<arr[j]<<" ";
  // }
  sort (arr, arr + size);
  for (int i = 0; i < size; i++)
    {
      if (arr[i] == arr[i + 1])
	{
	  inttersection++;
	}
      else
	{
	  un++;
	}
    }
  cout << un << " " << inttersection;
  //code here
  // return 3;
}

int
main ()
{
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];

    }
  for (int i = 0; i < m; i++)
    {
      cin >> b[i];
    }
  doUnion (a, b, n, m);
  return 0;

}
