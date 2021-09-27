// CPP program to count occurrences of an
// element in an unsorted array
#include<iostream>
using namespace std;

int frequency(int a[], int n, int x)
{
	int count = 0;
	for (int i=0; i < n; i++)
	if (a[i] == x)
		count++;
	return count;
}

// Driver program
int main() {
  int size;
  cout<<"enter the size of an array"<<endl;
    cin>>size;
  
	int a[size];
  cout<<"enter the elements in to an array "<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>a[i];
  }
  cout<<"enter the element"<<endl;
	int x ;
  cin>>x;
	int n = sizeof(a)/sizeof(a[0]);
	cout << frequency(a, n, x);
	return 0;
}
