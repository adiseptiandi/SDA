#include <iostream>
using namespace std;

int angka[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
int j = sizeof(angka)/sizeof(*angka);
int key, sem, no=1, low=0, up=j-1, med;
bool stat = false;

//fungsi sorting sebelum binary search
void bubbleSort(){
    for (int i = 0; i < j; i++){
        for (int h = 0; h < j-1; h++){
            if (angka[h] > angka[h+1]){
                sem = angka[h];
                angka[h] = angka[h+1];
                angka[h+1] = sem;
            }
        }
    }
}

//fungsi binary search
void binarySearch(){
    bool stat = false;//mengembalikan nilai stat ke false
    cout << "Penggunaan binary search dengan output TIDAK sesuai soal." << endl;
    cout << "Masukan data yang dicari : ";
    cin >> key;

    bubbleSort();//pemanggilan fungsi bubblesort
    while (low <= up){
        med = (low + up)/2;
        if (angka[med] == key){
            stat = true;
            break;
        } else {
            if (key > angka[med]){
                low = med + 1;
            } else {
                up = med - 1;
            }
        }
    }

    if (stat){
        cout << "Angka " << key << " ada di index ke-";
        for (int a = 0; a < j; a++){
            if (angka[a] == key){
                cout << a;
                if (a != j -1 && angka[a + 1] == key){
                    cout << " dan ";
                } else {
                    cout << endl;
                }
            }
        }
    } else {
        cout << "Angka " << key << " tidak ada dalam array"<< endl;
    }
}

//fungsi linear search
void linearSearch(){
    cout << "Penggunaan linear search dengan output sesuai soal." << endl;
    cout << "Masukan data yang dicari : ";
    cin >> key;

    cout << "Angka "<< key ;
    for (int h = 0; h < j; h++){
        if (key == angka[h]){
            if (stat){
                cout << " dan " << h+1;
                break;
            }
            cout << " ada di index ke-" << h+1;
            stat = true;
        }
    }

    if (stat == false){
    cout << " tidak ada dalam array" << endl;
    }
}


int main() {
    
    //untuk mendapatkan output Test Case sesuai soal
    linearSearch();
    cout << endl << endl;

    //untuk penggunaan binary search (dengan catatan output Test Case TIDAK sesuai soal)
    binarySearch();
}