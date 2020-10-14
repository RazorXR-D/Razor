#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
{
    int numhari;
    string gurusirkuit = "haha";
    string hari;
        cout << "|----------------------------------------------------------------|"<<endl;
        cout << "|        Jadwal Kuliah Universitas Bakrie Afriansyah             |" <<endl;
        cout << "|----------------------------------------------------------------|"<<endl;
        cout << "|Program ini di buat karena saya males login untuk melihat jadwal|"<<endl;
        cout << "|----------------------------------------------------------------|"<<endl;
        cout << "Input Hari = ";cin >> hari;
        cout << "\n\n\n";
            if(hari == "senin")
            {
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = TIF101 - Sirkuit Elektronik (TIF11)            |"<<endl;
                cout << "|Waktu  = 10:10 - 12:40                                  |"<<endl;
                cout << "|Nama Guru = Irwan Prasetya Gunawan, Ph.D                |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = UNI104 - Bahasa Inggris 1 (POL13)              |"<<endl;
                cout << "|Waktu  = 13:00 - 15:30                                  |"<<endl;
                cout << "|Nama Guru = Yani Awalia Indah, S.Pd, M.Pd               |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;


            }else if(hari == "selasa")
            {
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = FTK101 - Algoritma dan Pemrograman (TIF11)     |"<<endl;
                cout << "|Waktu  = 08:30 - 11:50                                  |"<<endl;
                cout << "|Nama Guru = Yusuf Lestanto                              |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = FTK111 - Kalkulus I (TIF11)                    |"<<endl;
                cout << "|Waktu  = 13:00 - 15:30                                  |"<<endl;
                cout << "|Nama Guru = Safrilah, ST., M.Sc.                        |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
                
            
            }else if(hari == "rabu")
            {
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = TIF107 - Pengantar Teknologi Informasi (TIF11) |"<<endl;
                cout << "|Waktu  = 07:30 - 10:00                                  |"<<endl;
                cout << "|Nama Guru = Yusuf Lestanto                              |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = FTK111 - Kalkulus I (TIF11)                    |"<<endl;
                cout << "|Waktu  = 10:40 - 13:10                                  |"<<endl;
                cout << "|Nama Guru = Mirsa Diah Novianti                         |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
                
            }else if(hari == "kamis")
            {
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|     |( o > o)|        Libur               |( o > o)|   |"<<endl;
                cout << "|     |( o > o)|        Kuliah              |( o > o)|   |"<<endl;
                cout << "|     |( o > o)|        Chill               |( o > o)|   |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
            }else if(hari == "jumat"){
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|Matkul = UNI102 - Agama (AKT39)                         |"<<endl;
                cout << "|Waktu  = 11:40 - 13:15                                  |"<<endl;
                cout << "|Nama Guru = Hondi Panjaitan                             |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
            }else if(hari == "sabtu")
            {
                cout << "|--------------------------------------------------------|"<<endl;
                cout << "|     |( o > o)|        Libur               |( o > o)|   |"<<endl;
                cout << "|     |( o > o)|        Kuliah              |( o > o)|   |"<<endl;
                cout << "|     |( o > o)|        Chill               |( o > o)|   |"<<endl;
                cout << "|--------------------------------------------------------|"<<endl;
            }else
            {
                cout << "Hari minggu libur lah GBLK" <<endl;
            }
            
            
            
            
    return 0;
    cin.get();
}
