#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void login(),menu(),gaji();

int main()
{
    login();
    system("cls");
    getch();

}

void menu()
{
    int pilih;
    cout << "-----Menu------" << endl;
    cout << "1. Cek Gaji" << endl ;
    cout << "2. Keluar" << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> pilih;

    if (pilih == 1)
    {
        system("cls");
        gaji();
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}
void login()
{
    int i;
char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }

       if (user == "ara" && pass == "ara")
        {
         system("cls");
         menu();
        }
       else
        {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
        }
   }
   while (i <= 3);

   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";
   getch();
}

void gaji()
{
    int a,b,c,d,e,f,g,h,i,golongan;
    char nama[20];
    cout<<"\n Nama Karyawan         : ";
    cin>>nama;
    cout<<"\n Golongan [1/2/3/4]    : ";cin>>golongan;
    cout<<"\n Jumlah Jam Kerja      : ";cin>>a;
    cout<<endl;

    if (a>48)
    {
        b=a-48;
        c=48;
    }
    else
    {
        b=0;
        c=a;
    }

    d=b*40000;

    if (golongan==1)
    {
        f=c*60000;
    }
    else
    if (golongan==2)
    {
        f=c*70000;
    }
    else
    if (golongan==3)
    {
        f=c*80000;
    }
    else
    if(golongan==4)
    {
        f=c*90000;
    }
    else
    {
        cout<<"Golongan Tidak ditemukan"<<endl;
        cout<<endl;
    }
    //upah karyawan
    e=f+d;

    cout<<"====================================";
    cout<<"\n Hasil Penghitungan Gaji Karyawan";
    cout<<"\n=====================================";
    cout<<endl;
    cout<<"Nama Karyawan        : "<<nama<<endl;
    cout<<"Upah Kerja           : Rp "<<f<<endl;
    cout<<"Lembur               : Rp "<<d<<endl;
    cout<<"Upah Keselurahan     : Rp "<<e<<endl;

    char yt;
    kembali :
    cout  << "Apakah Ingin Cek Lagi (Y/N) : ";
    cin >> yt;
    if (yt == 'Y' | yt=='y')
    {
        system("cls");
        gaji();
    }
    else if(yt == 'N' | yt=='n')
    {
        system("cls");
        menu();
    }
    else
    {
        cout << "Pilihan Yang Anda Masukan Salah" << endl;
        goto kembali;
    }
}
