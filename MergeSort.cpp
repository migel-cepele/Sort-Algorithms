#include <iostream>
#include <array>
#include <chrono>
using namespace std;
using namespace std::chrono;

void Merge(int arr[], int m, int d, int mes) {
    int n1 = mes - m + 1;
    int n2 = d - mes;

    

    int b1[n1], b2[n2];

    for (int i = 0; i < n1; i++){
        b1[i] = arr[m + i];

    }
    for (int j = 0; j < n2; j++){
        b2[j] = arr[mes + 1 + j];

    }
        
    int i = 0, j = 0, k = m;
    while (i < n1 and j < n2) {
        if(b1[i] <= b2[j]) {
            arr[k] = b1[i];
            k++;
            i++;
        } else {
            arr[k] = b2[j];
            k++;
            j++;
        }
    }
    while (i < n1) {
        arr[k] = b1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = b2[j];
        j++;
        k++;
    }
    
      
}
void MergeSort(int a[], int m, int d) {
    if (m < d) {
        int mes = m + (d - m)/2;
        MergeSort(a, m, mes);
        MergeSort(a, mes + 1, d);

        Merge(a, m, d, mes);
    }
    
     
}

int main() {
    


    int n;
    cout << "Vendos permasen e tabeles" << endl;
    cin >> n;
    int array[n];

    srand(time(0));  //sherben per te gjeneruar numra te ndryshem cdo here qe ekzekutohet
    //loop per te gjeneruar numra per array
    for (int i = 0; i < n; i++) {
        array[i] = rand()%n;
    }

    

    auto start = high_resolution_clock::now();  //matja e kohes

    MergeSort(array, 0, n - 1);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
  
    cout << "Koha e egzekutimit: "
         << duration.count() << " milisekonda" << endl;

    

    
    
}