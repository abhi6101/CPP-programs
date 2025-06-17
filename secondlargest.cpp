#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  int first = -1 , second = -1;

  for (int  i = 0; i < n; i++)
  {
    if(arr[i] > first )
    {
      second =  first;
      first = arr[i] ;

    }
    else if (arr[i] > second && arr[i] != first )
    {
      second = arr[i];
    }
  }
 if (second == -1) {
        cout << "No second largest element (all elements same or only one unique)." << endl;
    } else {
        cout << "Second largest element is: " << second << endl;
    }
  

    return 0;
}
