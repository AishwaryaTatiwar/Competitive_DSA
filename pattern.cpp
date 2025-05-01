/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  // for(int i=0;i<n;i++){
  //     for(int j=5;j>i;j--){
  //         cout<<"*";
  //     }
  //     cout<<endl;
  // }
  // for(int i=0;i<n;i++){
  //     for(int j=0;j<n;j++){
  //         if(j<n-i-1){
  //             cout<<" ";
  //         }else{
  //             cout<<"*";
  //         }
  //     }
  //     cout<<endl;
  // }
  // for(int i=0;i<n;i++){
  //     for(int j=0;j<=i;j++){
  //         cout<<i+1;
  //     }
  //     cout<<endl;
  // }
  // int count=1;
  // for(int i=0;i<n;i++){
  //     for(int j=0;j<=i;j++){
  //         cout<<count;
  //         count++;
  //     }cout<<endl;
  // }
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= i; j++)
	{
	  cout << "*";
	}
      int space = 2 * n - 2 * (i + 1);
      for (int j = 0; j < space; j++)
	{
	  cout << " ";
	}
      for (int j = 0; j <= i; j++)
	{
	  cout << "*";
	}
      cout << endl;
    }
  for (int i = n; i > 0; i--)
    {
      for (int j = 0; j < i; j++)
	{
	  cout << "*";
	}
      int space = 2 * n - 2 * i;
      for (int j = 0; j < space; j++)
	{
	  cout << " ";
	}
      for (int j = 0; j < i; j++)
	{
	  cout << "*";
	}
      cout << endl;
    }
  return 0;
}
