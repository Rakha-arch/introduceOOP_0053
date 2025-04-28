#include <iostream>
using namespace std;

class mobil{
    public:
    string nama_mobil;
    string tipe_mobil;
    private:
    int harga_mobil;
    public:
    void input_data(){
        cout << "masukan nama mobil:";
        cin >> nama_mobil;
        cout << "masukan tipe mobil:";
        cin >> tipe_mobil;
        cout << "masukan harga mobil:";
        cin >> harga_mobil;
    }
    void output_data(){
        cout << "harga mobil =" << harga_mobil << endl;
    }
};


int main(){
    mobil rakha;
    rakha.input_data();
    cout << "nama mobil = " << rakha.nama_mobil << endl;
    cout << "tipe mobil = " << rakha.tipe_mobil << endl;
    rakha.output_data();
}