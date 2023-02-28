#include <iostream>
using namespace std;
#include <array>




void InsertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {

        int v = array[i];
        int j = i - 1;
        while(j >= 0 and array[j] > v) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = v;
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
    

    InsertionSort(a, n);
    cout << "**********************************************************" << endl;
    cout << "Tabela e renditur eshte sipas InsertionSort: " << endl;

    for(int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }

    
}