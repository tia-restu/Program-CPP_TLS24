#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
 cout << " Program C++ Indeks Massa Tubuh Manusia " << endl;
 cout << "________________________________________" << endl;
 cout << endl;

 float B, T, Nilai;

 cout << " Klasifikasi Nasional IMT oleh P2PTM Kemenkes RI "<< endl;
 cout << "1. Nilai Berat Badan Kurang    <=  18,49           kg/m2 "<< endl;
 cout << "2. Nilai Berat Badan Normal     =  18,5 - 24,9     kg/m2 "<< endl;
 cout << "3. Nilai Berat Badan Berlebih   =  25 - 27         kg/m2 "<< endl;
 cout << "4. Nilai Obesitas               => 27              kg/m2 "<< endl;
 cout << endl;

 cout << "Berat Badan (kg): ";
 cin >> B;
 cout << "Tinggi Badan (meter):";
 cin >> T;
 cout << endl;

 Nilai = B / (T*T);

 cout <<"Nilai Berat Badan (kg) = "<< Nilai<< endl;
 cout <<"________________________________________"<<endl;
 cout << "Keterangan :";
 if (Nilai <= 18.49){
 printf ("BERAT BADAN KURANG");
 printf ("\n________________________________________\n");
 cout <<"Tips Menambah Berat Badan:"<< endl;
 cout <<" 1. Makanan berkalori tinggi"<< endl;
 cout <<" 2. Makanan dengan kandungan protein, karbohidrat dan lemak sehat"<< endl;
 cout <<" 3. Camilan yang mengandung protein dan karbohidrat"<< endl;
 cout <<" 4. Cukupi kebutuhan cairan dengan minum 6-8 gelas perhari"<< endl;
 cout <<" 5. Berolahraga 2-4 kali dalam seminggu"<< endl;
 }else if(Nilai < 25){
 printf ("BERAT BADAN NORMAL");
 printf ("\n________________________________________\n");
 cout << "           ANDA SEHAT         "<< endl;
 }else if(Nilai <= 27){
 printf ("BERAT BADAN BERLEBIH");
 printf ("\n________________________________________\n");
 cout <<"Tips Mengurangi Berat Badan Berlebih:"<< endl;
 cout <<" 1. Menjaga pola makan yang sehat, bergizi lengkap, dan seimbang"<< endl;
 cout <<" 2. Berolahraga secara teratur selama minimal 30 menit setiap hari"<< endl;
 cout <<" 3. Membatasi konsumsi makanan dan minuman tinggi kalori, gula, dan lemak"<< endl;
 cout <<" 4. Beristirahat dan tidur yang cukup"<< endl;
 cout <<" 5. Menghindari konsumsi minuman beralkohol"<< endl;
 cout <<" 6. Mengelola stres dengan baik"<< endl;
 }else if(Nilai >27){
 printf ("BERAT BADAN OBESITAS");
 printf ("\n________________________________________\n");
 cout <<"Tips Mengurangi Obesitas:"<< endl;
 cout <<" 1. Perubahan pola makan"<< endl;
 cout <<" 2. Menghitung kalori harian, wanita 2000 cal dan pria 2500 cal"<< endl;
 cout <<" 3. Diet rendah karbohidrat"<< endl;
 cout <<" 4. Pola makan nabati"<< endl;
 cout <<" 5. Puasa intermiten"<< endl;
 cout <<" 6. Perubahan gaya hidup"<< endl;
 cout <<" 7. Olahraga secara teratur"<< endl;
 cout <<" 8. Obat obesitas dengan resep dokter"<< endl;
 cout <<" 9. Prosedur operasi"<< endl;
 }
 cout << endl;
return 0;
}
