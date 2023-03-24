#include <iostream>

using namespace std;

void print_arr(int* a, int n);
void incert_sort(int* a, int n);

int main()
{
    int n = 20;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 1000;
    cout << "start:" << endl;
    print_arr(a, n);
    cout << "next:" << endl;
    incert_sort(a, n);
    print_arr(a, n);
    delete[]a;
}

void print_arr(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void incert_sort(int* a, int n) {
    for (int i = 0, j = 0; i < n; i++) {
        j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j - 1], a[j]);
            j--;
        }
        //print_arr(a, n);
    }
}