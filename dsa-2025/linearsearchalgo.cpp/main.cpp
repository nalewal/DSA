#include <iostream>
using namespace std;

int
main ()
{
  
    // cout<<"Hello World!";
  int n, key;
  
cin >> n;
  
int a[n];
  
for (int i = 0; i < n; i++)
    {
      
cin >> a[i];
    
} 
    // ask for the element we want to search '
    cout << "enter the key you want to search" << endl;
  
cin >> key;
  
int i = 0;
  
    // find out the index of that element by traversing the array
    // linear search algo
    for (; i < n; i++)
    {
      
if (a[i] == key)
	{
	  
cout << key << "found at index " << i << endl;
	  
break;
	
}
    
}
  
if (i == n)
    {
      
cout << key << "does't exist in array" << endl;
    
 
 
}
  
return 0;

}


