#include <iostream>
string namespace std;

Class Mahasiswa
{
public:
    int nim;
    void showNim();
    {
        cout << "no induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1}; // pointer project mhs
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}