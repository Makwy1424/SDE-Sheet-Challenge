#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int count[3] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[k++] = i;
        }
    }
}