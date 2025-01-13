#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int size = 1; size < n; size *= 2) {
        for (int left = 0; left < n - 1; left += 2 * size) {
            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);

            int n1 = mid - left + 1;
            int n2 = right - mid;
            int leftArr[n1], rightArr[n2];

            for (int i = 0; i < n1; i++)
                leftArr[i] = arr[left + i];
            for (int i = 0; i < n2; i++)
                rightArr[i] = arr[mid + 1 + i];

            int i = 0, j = 0, k = left;
            while (i < n1 && j < n2) {
                if (leftArr[i] <= rightArr[j]) {
                    arr[k] = leftArr[i];
                    i++;
                } else {
                    arr[k] = rightArr[j];
                    j++;
                }
                k++;
            }
            while (i < n1) {
                arr[k] = leftArr[i];
                i++;
                k++;
            }
            while (j < n2) {
                arr[k] = rightArr[j];
                j++;
                k++;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
