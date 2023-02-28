#include <iostream>
using namespace std;
#include <array>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int array[], int n) {
    
    for(int i = 0; i < n - 1; i++) {

        int min = i;
        for(int j = i + 1; j < n; j++) 
        if (array[j] <= array[min]) {
            min = j;
        }
  
        swap(&array[min], &array[i]);
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
    

    SelectionSort(a, n);
    cout << "**********************************************************" << endl;
    cout << "Tabela e renditur eshte: " << endl;

    for(int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }    
    
    
}