#include <iostream>

using namespace std;

void quickSort(unsigned int arr[], unsigned int left, unsigned int right) {

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];



      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };



      /* recursion */

      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

}

int main()
{
    unsigned int t, i;
    cin >> t;
    unsigned int a[t];
    for (i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, t);
    for (i = 0; i < t; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
