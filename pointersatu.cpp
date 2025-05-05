#incule <iostream>
using namespace std:

Class mahasiswa {
    public:
    int nim;
    void ShowNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main(){
    
    Mahasiswa mhs; // Object mhs
    mhs.nim = 5;
    mhs showNim(); // Memeber Access Operator

    mahasiswa &refMhs = mhs; //pointer Reference refMhs
    refMhs.nim = 2; // Member Access Operator
    mhs.showNim();

    Mahasiswa *pMhs = &Mhs; //pointer Dereference pMhs
    pMhs->nim = 3; // Arrow Operator
    pMhs->showNim();
    return 0;
}