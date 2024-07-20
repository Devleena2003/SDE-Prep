void heapify(vector<int> &arr, int N, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] < arr[smallest])
    {
        smallest = left;
    }
    if (right < N && arr[right] < arr[smallest])
    {
        smallest = right;
    }
    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, N, smallest);
    }
}
void convertMinToMaxHeap(vector<int> &arr, int N)
{
    for (int i = (N / 2 - 1); i >= 0; i--)
    {
        heapify(arr, N, i);
    }
}