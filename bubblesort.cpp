#include <iostream>
using namespace std;
#include <array>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void BubbleSort(int array[], int n) {
    for (int i = 0; i < n-1; i++) {

        for(int j = 0; j < n - 1 - i; j++) {

            if (array[j] > array[j+1]) {

                swap(&array[j], &array[j+1]);
            }
        }
    }


}

int main() {
    int n;
    cout << "vendosni permasen e te dhenave: " << endl;
    cin >> n;
    int a[n];
    cout << "Vendosni elementet e tabeles: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    cout << "tabela fillestare: " << endl;

    for(int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    } 
    cout << endl;   
    

    BubbleSort(a, n);
    cout << "**********************************************************" << endl;
    cout << "Tabela e renditur eshte sipas BubbleSort: " << endl;

    for(int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }

    
}