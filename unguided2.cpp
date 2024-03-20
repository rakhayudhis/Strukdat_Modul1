#include <iostream>
using namespace std;

struct DataLaptop {
    string merek;
    string warna;
    int tahunProduksi;

    void tampilkanInfo() {
        cout << "Merek: " << merek << endl;
        cout << "Warna: " << warna << endl;
        cout << "Tahun Produksi: " << tahunProduksi << endl;
    }
};

int main() {
    DataLaptop laptop1;
    laptop1.merek = "Asus";
    laptop1.warna = "Hitam";
    laptop1.tahunProduksi = 2021;
    laptop1.tampilkanInfo();

    return 0;
}


// #include <iostream>
// using namespace std;

// class DataLaptop {
// public:
//     string merek;
//     string warna;
//     int tahunProduksi;

//     void tampilkanInfo() {
//         cout << "Merek: " << merek << endl;
//         cout << "Warna: " << warna << endl;
//         cout << "Tahun Produksi: " << tahunProduksi << endl;
//     }
// };



// int main() {
//     DataLaptop laptop1;
//     laptop1.merek = "Asus";
//     laptop1.warna = "Hitam";
//     laptop1.tahunProduksi = 2021;
//     laptop1.tampilkanInfo();

//     return 0;
// }
