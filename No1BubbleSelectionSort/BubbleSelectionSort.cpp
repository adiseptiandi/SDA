//Nama: Adi Septiandi
// NIM : 220401010197
// Kelas : IT204
// Program Studi : S1 - PJJ Informatika

#include <iostream>
#include <string>

using namespace std;

//Struct untuk data
struct Data {
    string Nama;
    string Alamat;
};

//Fuction Buublesort
void bubbleSort(Data listData[], int j){
    for (int i = 0; i < j; i++){
        for (int h = 0; h < j-1; h++){
            if (listData[h].Nama > listData[h+1].Nama){
                Data temp = listData[h];
                listData[h] = listData[h+1];
                listData[h+1] = temp;
            }
        }
    }
}

//Fuction Selectionsort
void selectionSort(Data listData[], int j){
    for (int a = 0; a < j - 1; a++){
        Data temp = listData[a];
        int pos = a;
        for (int b = a + 1; b < j; b++){
            if (listData[b].Nama < listData[pos].Nama){
                pos = b;
            }
        }
        listData[a] = listData[pos];
        listData[pos] = temp;
    }
}

//Fuction untuk menampilkan
void print(Data listData[], int j){
    cout << "| Nama\t\t| Alamat\t\t|\n"; 
    cout << "-----------------------------------------\n";
    for (int i = 0; i < j; i++) {
        cout << "| " << listData[i].Nama << "\t\t| " << listData[i].Alamat << "\t\t|\n";
    }
}



int main() {

    //Memasukkan data
    Data listData[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"},
    };

    //ukuran array data
    int j = sizeof(listData)/sizeof(*listData);

    //Sebelum diurutkan
    cout << "Data sebelum diurutkan :"<< endl;
    print(listData, j);
    
    //mengurutkan menggunakan Fuction Bubblesort
    bubbleSort(listData, j);
    
    cout << endl;
    cout << "Data setelah diurutkan menggunakan metode Bubblesort :"<< endl;
    print(listData, j);

    //mengurutkan menggunakan Fuction Selectionsort
    selectionSort(listData, j);

    cout << endl;
    cout << "Data setelah diurutkan menggunakan metode Selectionsort :"<< endl;
    print(listData, j);

    return 0;
}
