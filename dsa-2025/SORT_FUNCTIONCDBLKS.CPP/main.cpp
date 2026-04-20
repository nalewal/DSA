#include <iostream>
#include<algorithm>
using namespace std;

// define a comparator function
  bool compare (int a, int b)
{
  
cout << "comparing " << a << "and" << b << endl;
  
return a < b;

}


int
main ()
{
  
    // cout<<"Hello World!";
  int n;
  
cin >> n;
  
int arr[n];
  
for (int i = 0; i < n; i++)
    
cin >> arr[i];
  
    // aply sort function
    sort (arr, arr + n, compare);
  
for (int i = 0; i < n; i++)
    
cout << arr[i];
  
return 0;

}


