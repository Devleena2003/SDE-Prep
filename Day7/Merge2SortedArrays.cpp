// with an extra space
// time complexity= O(n+m)+O(n+m)

// space complexity=O(n+m)
void merge(int arr1[], int arr2[], int n, int m)
{
    int arr3[n + m];
    int left = 0;
    int right = 0;
    int index = 0;
    while (left < n && right < m)
    {
        if (arr1[left] <= arr2[right])
        {
            arr3[index++] = arr1[left++];
        }
        else
        {
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }

    while (left < n)
    {
        arr3[index++] = arr1[left++];
    }

    // If left pointer reaches the end:
    while (right < m)
    {
        arr3[index++] = arr2[right++];
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr3[i] = arr1[i];

        else
            arr3[i] = arr2[i - n];
    }
}

// without an extra space

void merge(int arr1[], int arr2[], int n, int m)
{
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else
            break;
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}