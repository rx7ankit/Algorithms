

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define allg(x) (x).begin(), (x).end(), greater<>()
//-- -- -- -- -- -- -- -- -- -merge sort-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
// ---------------------------bubble sort ----------------------------------
void bubblesort(vector<int> &v)
{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            (v[j] > v[j + 1]) ? swap(v[j], v[j + 1]) : void();
        }
    }
}
void recursivebubblesort(vector<int> &v, int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        (v[i] > v[i + 1]) ? swap(v[i], v[i + 1]) : void();
    }
    recursivebubblesort(v, n - 1);
}
// ---------------------------insertion sort----------------------------
void recursiveinsertionsort(vector<int> &v, int n, int i)
{
    if (i == n)
    {
        return;
    }
    int j = i;
    while (j > 0 && v[j - 1] > v[j])
    {
        swap(v[j - 1], v[j]);
        j--;
    }
    recursiveinsertionsort(v, n, i + 1);
}
//  ------------------------quick sort -------------------------------------
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //=============================================
    vector<int> v = {8, 2, 9, 12, 45, 1, 3, 4, 2, 7};
    qs(v, 0, v.size() - 1);
    for (auto i : v)
    {
        cout << i << ' ';
    }
    return 0;
}