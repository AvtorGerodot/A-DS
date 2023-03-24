#include <iostream>

using namespace std;

void print_arr(int* a, int n);
void merge_sort(int* a, int n);

int main()
{
    int n = 20;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 1000;
    cout << "start:" << endl;
    print_arr(a, n);
    cout << "next:" << endl;
    merge_sort(a, n);
    print_arr(a, n);
    delete[]a;
}

void print_arr(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void merge_sort(int* a, int n) {
    cout << "OK";
}