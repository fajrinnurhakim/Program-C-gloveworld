#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
int pil,pil2;
char pilih;
string user,pass,unn,passwdd,konff,userr,passs;
int i,h,k,l;
const int maksimal_antrian = 50;//maksimal antrian queue untuk berita/informasi terbaru
bool keluar = false;
char ya_tidak;
string data_masuk, data_saran;


struct menuuadmin{ // deklarasi struct menu untuk admin
    string menu1;
    string menu2;
    string menu3;
    string menu4;
    string menu5;
    string menu6;
    string menu7;
    string menu8;
    string menu9;
};
menuuadmin menuu;

struct menuucustomer{ // deklarasi struct menu customer
    string menu1;
    string menu2;
    string menu3;
    string menu4;
};
menuucustomer menuuu;

string A;
string *pointerA; // dekalarsi pointer A
string B;
string *pointerB;
string C;
string *pointerC;
string D;
string *pointerD;
string E;
string *pointerE;
string F;
string *pointerF;
string G;
string *pointerG;
string H;
string *pointerH;
string I;
string *pointerI;


string X;
string *pointerX;
string Y;
string *pointerY;
string Z;
string *pointerZ;

struct antrian{ //deklarasi struct Antrian/queue
    int depan; // indeks depan
    int belakang; // indeks belakang
    string nama[maksimal_antrian]; // data nama
} Berita; // membuat variabel Berita bertipe data antrian

void nilai_awal(){//
    Berita.depan = -1; // variabel posisi depan (-1) = antrian masih kosong
    Berita.belakang = -1; // variabel posisi belakang (-) = antrian masih kosong
}

bool antrian_penuh(){ // lakukan pengecekan jika antrian penuh
    if(Berita.belakang == maksimal_antrian-1){ // menandakan kondisi sudah penuh
        return true;
    }else{
        return false;
    }
}


bool antrian_kosong(){ // lakukan pengecekan jika antrian
    if(Berita.depan == -1 && Berita.belakang == -1){ //menandakan antrian masih kosong
        return true;
    }else{
        return false;
    }
}
void TambahantrianBerita(string dataMasukkan){ //penambahan data queue berita
    if(antrian_kosong() == true){
        Berita.depan = 0;
        Berita.belakang = 0;
        Berita.nama[Berita.belakang] = dataMasukkan;
    }else if(antrian_penuh() == false){
        Berita.belakang++;
        Berita.nama[Berita.belakang] = dataMasukkan;
    }else{
    cout<<"Berita sudah penuh"<<endl;
    }
}


void CetakAntrianBerita(){
    if(antrian_kosong() == false){
        for(int x = Berita.depan; x <= Berita.belakang; x++){
        Berita.nama[x] = Berita.nama[x+1];passwdd
}
    Berita.belakang--;
    cout<<"Satu Berita telah lama telah dihapus"<<endl;
        }else{
        cout<<"Tidak ada berita yang harus di hapus"<<endl;
    }
}


void tampil_Berita(){
    if(antrian_kosong() == false){
        for(int z = Berita.depan; z <= Berita.belakang; z++){
        cout<<Berita.nama[z]<<" "<<endl;
}
cout<<endl;
    }else{
    cout<<"Tidak ada berita pada antrian"<<endl;
    }
}

char cetak;
int pil4, pil5, pil6, umur, ttl_tiket, jumlah_tiket, pil7;
int jumlahSimpul=5;
string *simpulDiketahui;
bool cekMatrik=false;
int indeksPosisi, simpulNow, simpulBack, simpulAsal, simpulTujuan, jarakNow, jarakLama, jarakBaru;
int dikunjungi=1;
int belumDikunjungi=0;
int *jarakDiketahui;
int *kunjungan,*track,*path;
string dataSimpul[7] = {"Bianglala", "Komedi Putar", "Roller Coaster", "Rumah Hantu", "Istana Badut", "Tornado", "Ontang-anting"};
int dataBusur[7][7] = {
{0,5,2,5,8,8,10},
{5,0,2,3,5,7,5},
{2,2,0,2,1,2,3},
{5,3,2,0,1,3,3},
{8,5,1,1,0,3,2},
{8,7,2,4,3,0,1},
{10,5,3,4,2,1,0}};

void buatMatrik(){
    if(dataSimpul && dataBusur){
        cout<<endl;
        cout<<"\t \t \t \t"<<" == W A H A N A  MAPS =="<<endl<<endl;
        for(int baris = 0; baris < 8; baris++){
            cout<<dataSimpul[baris]<<" : ";
            cout<<endl<<endl;
            for(int kolom = 0; kolom < 8; kolom++){
                if(dataBusur[baris][kolom] != 0){
                    cout<<dataSimpul[kolom]<<" ("<<dataBusur[baris][kolom]<<") "<<" ";
                }
            }
            cout<<endl;
        }
    }

    cekMatrik=true;
}

void hitungJarakTerdekat(){
    if(cekMatrik){
        jarakDiketahui=new int[jumlahSimpul];
        kunjungan=new int[jumlahSimpul];
        track=new int[jumlahSimpul];
        path=new int[jumlahSimpul];
        simpulDiketahui=new string[jumlahSimpul];

        for(int i=0;i<jumlahSimpul;i++){
            jarakDiketahui[i]=999;
            kunjungan[i]=belumDikunjungi;
            track[i]=-1;
            path[i]=-1;
        }

        kunjungan[simpulAsal]=dikunjungi;
        jarakDiketahui[simpulAsal]=0;

        simpulBack=simpulAsal;
        simpulNow=simpulAsal;

        while(simpulNow!=simpulTujuan){
            jarakLama=999;
            jarakNow=jarakDiketahui[simpulNow];
            indeksPosisi=simpulBack;
            for(int i=0;i<jumlahSimpul;i++){
                if(kunjungan[i]==belumDikunjungi){
                    if(dataBusur[simpulNow][i]!=0){
                        jarakBaru=jarakNow+dataBusur[simpulNow][i];
                        if(jarakBaru<jarakDiketahui[i]){
                            jarakDiketahui[i]=jarakBaru;
                            track[i]=simpulNow;

                        }
                        if(jarakDiketahui[i]<jarakLama){
                            jarakLama=jarakDiketahui[i];
                            indeksPosisi=i;
                        }
                    }
                }
            }
            simpulBack=simpulNow;
            simpulNow=indeksPosisi;
            kunjungan[simpulNow]=dikunjungi;
        }

        simpulNow=simpulTujuan;
        int j=0;

        while(simpulNow!=-1){
            path[j]=simpulNow;
            simpulNow=track[simpulNow];
            j++;
        }

        cout<<endl<<"Jarak terdekat dari "<<simpulAsal<<" ke "<<simpulTujuan<<" adalah "<<jarakDiketahui[simpulTujuan]<<endl;
        cout<<"Jalur yang ditempuh adalah : ";
        for(int i=jumlahSimpul-1;i>=0;i--){
            if(path[i]==-1){
                simpulDiketahui[i]="";
            }else{
                simpulDiketahui[i]=dataSimpul[path[i]];
            }
            cout<<simpulDiketahui[i]<<" ";
        }

        delete jarakDiketahui;
        delete kunjungan;
    }
}

void tampilMatrik(){
    if(cekMatrik){
        cout<<" ";
        for(int i=0;i<jumlahSimpul;i++){
            cout<<dataSimpul[i]<<" ";
        }
        cout<<endl;
        for(int baris=0;baris<jumlahSimpul;baris++){
            cout<<dataSimpul[baris]<<" ";
            for(int kolom=0;kolom<jumlahSimpul;kolom++){
                cout<<dataBusur[baris][kolom]<<" ";;
            }
            cout<<endl;
        }
    }else{
        cout<<"Tidak ada matrik"<<endl;
    }
}


const int maksimal_tumpukan = 10;
int pil8;

struct tumpukan{
    int posisi;
    string data[maksimal_tumpukan];
};

tumpukan food;

void inisialisasi(){
    food.posisi = -1;
}

bool kosong(){
    if(food.posisi == -1){
        return true;
    }else{
        return false;
    }
}

bool penuh(){
    if(food.posisi == maksimal_tumpukan - 1){
        return true;
    }else{
        return false;
    }
}

void push_tumpukan(string data_masukkan){
    if(kosong() == true){
        food.posisi++;
        food.data[food.posisi] = data_masukkan;
        cout<<"Berhasil memasukkan : "<<data_masukkan<<endl;
    }else if(penuh() == false){
        food.posisi++;
        food.data[food.posisi] = data_masukkan;
        cout<<"Berhasil memasukkan : "<<data_masukkan<<endl;
    }else{
        cout<<"Tumpukan sudah penuh"<<endl;
    }
}

void pop_tumpukan(){
    if(kosong() == true){
        cout<<"Tumpukan kosong"<<endl;
    }else{
        food.posisi--;
        cout<<"Data berhasil dihapus"<<endl;
    }
}

void tampil_dataS(){
    if(kosong() == true){
        cout<<"Tidak ada data"<<endl;
    }else{
        for(int c = food.posisi; c >= 0; c--){
            cout<<food.data[c]<<endl;
        }
    }
}

void tampil_data_struk(){
    if(kosong() == true){
        cout<<"Tidak ada data"<<endl;
    }else{
        cout<<"\t \t"<<"== S T R U K  P E S A N A N =="<<endl<<endl;
        for(int c = food.posisi; c >= 0; c--){
            cout<<endl;
            cout<<food.data[c]<<endl;
        }
        cout<<"\t \t"<<"TERIMA KASIH TELAH MEMESAN!"<<endl<<endl;
    }
}

//saran

struct dlinkedlistSaran{
    dlinkedlistSaran* prev;
    string data;
    dlinkedlistSaran* next;
};

dlinkedlistSaran* head;
dlinkedlistSaran* tail;
dlinkedlistSaran* vertex;

void inisialisasi_saran(){
    head = NULL;
    tail = NULL;
}

bool dLinkSaranKosong(){
    if(head == NULL && tail == NULL){
        return true;
    }else{
        return false;
    }
}

void tambahDepanSaran(string dataUser){
    if(dLinkSaranKosong() == true){
        vertex = new dlinkedlistSaran;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        head = vertex;
        tail = vertex;
        cout<<"Saran telah di masukkan"<<endl;
    }else{
        vertex = new dlinkedlistSaran;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        vertex->next = head;
        head->prev = vertex;
        head = vertex;
    }
}

void tambahBelakangSaran(string dataUser){
    if(dLinkSaranKosong()== true){
        vertex = new dlinkedlistSaran;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        head = vertex;
        tail = vertex;
        cout<<"Saran telah di masukkan"<<endl;
    }else{
        vertex = new dlinkedlistSaran;
        vertex->data = dataUser;
        vertex->prev = NULL;
        vertex->next = NULL;
        tail->next = vertex;
        vertex->prev = tail;
        tail = vertex;
    }
}

void hapusDepanSaran(){
    if(dLinkSaranKosong() == true){
        cout<<"Tidak ada saran yang harus di proses hari ini, selamat menikmati hidup."<<endl;
    }else{
            cout<<"Saran akan di proses..."<<endl;
    }
}


void hapusBelakangSaran(){
    if(dLinkSaranKosong() == true){
        cout<<"Tidak ada saran yang harus di proses hari ini, selamat menikmati hidup."<<endl;
    }else{
            cout<<"Saran akan di proses..."<<endl;
    }
}

void tampilDataSaran(){
    if(dLinkSaranKosong() == true){
        cout<<"Tidak ada saran"<<endl;
    }else{
        dlinkedlistSaran* helper;
        helper = head;
        while(helper != NULL){
            cout<<helper->data<<" "<<endl;
            helper = helper->next;
        }
    }
}


int main(){
int pilihan;
hii:
system("cls");
system("color 7");
cout<<endl;
cout <<"\t \t"<< "SELAMAT DATANG DI APLIKASI GLOVE WORLD"<<endl<<endl;
cout << "1. LOGIN SEBAGAI ADMIN"<<endl;
cout << "2. LOGIN SEBAGAI CUSTOMER"<<endl;
cout << "3. Keluar aplikasi"<<endl<<endl;
cout << "Masukkan Pilihan Menu: ";
cin >> pilihan;
if (pilihan == 1){
    system("cls");
    string un = "admin";
    string passwd = "admin123";
    string login = "block";
    h=1;
    do{
            cout<<endl;
            cout << "\t \t"<<"LOGIN KE APLIKASI GLOVE WORLD";
            cout << endl<<endl;
            cout << "Masukkan username     : ";
            cin >> user;
            cout << endl;
            cout<< "Masukkan password anda: ";
            cin >> pass;
                if (user == un && pass == passwd){
                        cout<<endl;
                        cout << "LOADING...";
                        Sleep (2000);
                        cout << ".....";
                        system("cls");
                        cout << endl;
                        cout << "Anda login sebagai "<<user;
                        cout << endl;
                        cout << "lanjutkan masuk ke menu aplikasi GLOVE WORLD"<<endl;
                        cout << endl;
                        getch();
                        system("cls");
                        do{
                        menuu.menu1 =
                        "1. Masukkan Berita Terbaru";
                        menuu.menu2 =
                        "2. Hapus Berita Lama";
                        menuu.menu3 =
                        "3. Proses Saran Depan";
                        menuu.menu4 =
                        "4. Proses Saran Belakang";
                        menuu.menu5 =
                        "5. Tampilkan Data Saran dari pengunjung";
                        menuu.menu6 =
                        "6. Keluar";

                        A=menuu.menu1;
                        pointerA=&A;
                        B=menuu.menu2;
                        pointerB=&B;
                        C=menuu.menu3;
                        pointerC=&C;
                        D=menuu.menu4;
                        pointerD=&D;
                        E=menuu.menu5;
                        pointerE=&E;
                        F=menuu.menu6;
                        pointerF=&F;
                        cout<<endl;
                        system("color 2");
                        cout<<"\t \t"<<"===================================================="<< endl;
                        cout<<"\t \t "<<"             PROGRAM DUFAN BOONGAN               "<< endl;
                        cout<<"\t \t"<<"===================================================="<< endl;
                        cout<<"\t \t"<<"----------------------------------------------------"<< endl;
                        cout<<"\t \t "<<"                  ADMIN MENU                     "<< endl;
                        cout<<"\t \t"<<"----------------------------------------------------"<< endl<<endl;
                        cout<<*pointerA<<endl;
                        cout<<*pointerB<<endl;
                        cout<<*pointerC<<endl;
                        cout<<*pointerD<<endl;
                        cout<<*pointerE<<endl;
                        cout<<*pointerF<<endl<<endl;
                        cout<<"Silahkan masukkan pilihan Menu : ";
                        cin>>pil;
                        switch(pil){
                        case 1 :
                        cout<<"Silahkan masukkan berita : ";
                        cin.ignore();
                        getline(cin, data_masuk);
                        TambahantrianBerita(data_masuk);
                        cout<<"Keluar (y/t) ? "; cin>>ya_tidak;
                        cout<<endl;
                        if(ya_tidak == 'y' || ya_tidak == 'Y'){
                            cout<<" Terima Kasih "<<endl; goto hii;
                            system("cls");
                        }else{
                            system("cls");
                        }
                        break;
                        case 2 :
                        CetakAntrianBerita();
                        cout<<"Keluar (y/t) ? ";
                        cin>>ya_tidak;
                        cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl; goto hii;
                                system("cls");
                            }else{
                                system("cls");
                        }
                        break;
                        case 3 :
                        hapusDepanSaran();
                        cout<<endl;
                        cout<<"Keluar (y/t) ? ";
                        cin>>ya_tidak;
                        cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;system("cls");
                            }else{
                            system("cls");
                            }
                        break;
                        case 4 :
                        hapusBelakangSaran();
                        cout<<endl;
                        cout<<"Keluar (y/t) ? ";
                        cin>>ya_tidak;
                        cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;system("cls");
                            }else{
                            system("cls");
                            }
                        break;
                        case 5 :
                        tampilDataSaran();
                        cout<<endl;
                        cout<<"Keluar (y/t) ? ";
                        cin>>ya_tidak;
                        cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;system("cls");
                            }else{
                            system("cls");
                            }
                        break;
                        case 6 :
                        cout<<endl;
                        cout<<"Keluar (y/t) ? ";
                        cin>>ya_tidak;
                        cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;system("cls");
                            }else{
                            system("cls");
                            }
                        break;passwdd
                        default :
                            cout<<"Pilihan tidak tersedia..."<<endl;
                            cout<<"Keluar (y/t) ? ";
                            cin>>ya_tidak;
                            cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;system("cls");
                            }else{
                                system("cls");
                            }
                        }
                        }while(keluar == false);
                        h = 4;
                        login = "berhasil";
                }else{
                    cout << "\n===========================\n";
                    cout << "Username / Password Salah! ("<<h<<"x)\n";
                    cout << "=============================\n\n";
                    h = h +1;
                }
                }while (h <= 3);

                if(login != "berhasil"){
                    cout<<"Anda telah 3x salah login.\n";
                    cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";
                }
    }else if (pilihan == 2){
        system("cls");
        k=50;
        system("color 7");
        cout<<endl;
        cout << "\t \t"<<"== SELAMAT DATANG DI APLIKASI GLOVE WORLD ==";
        cout<<endl;
        cout << "\t \t"<<"      SILAHKAN LOGIN KE AKUN ANDA           ";
        cout << endl<<endl;
        cout << "Apakah Anda Belum Memiliki Akun? Silahkan Membuat akun baru (y/t) : ";
        cin>>pilih;
        cout<<endl;
        cout << "LOADING...";
        Sleep (2000);
        cout << ".....";
        if (pilih == 'y'){
            yo:
            system("cls");
            cout<<endl;
            cout << "\t \t"<<" MENU PENDAFTARAN AKUN DUFAN BOONGAN "<<endl<<endl;
            cout << "Masukkan username: ";
            cin >> unn;
            cout << "Masukkan password anda: ";
            cin >> passwdd;
            cout<<endl;
            cout << "Masukkan lagi password anda: ";
            cin >> konff;
            cout<<endl;
            cout << "LOADING...";
            Sleep (2000);
            cout << ".....";
            system("cls");
            if (konff == passwdd){
                cout<<endl;
                cout << "Selamat Anda berhasil registrasi akun di aplikasi gloveworld"<<endl;
                cout << "Silahkan Tekan enter untuk menuju Menu Login"<<endl;
                getch();
                goto ho;
            }else{
                cout<<endl;
                cout << "Password yang anda masukkan berbeda";
                cout << endl;
                cout << "Masukkan ulang username dan password anda"<<endl;
                getch();
                goto yo;
            }
        k++;
        }else{
            ho:
            int percobaann=3;
            hi:
            system("cls");
            cout<<endl;
            cout << "\t \t"<<"LOGIN KE APLIKASI GLOVE WORLD";
            cout << endl<<endl;
            cout << "Masukkan username     : ";
            cin >> userr;
            cout << "Masukkan password anda: ";
            cin >> passs;
            cout<<endl;
            for (l=1; l<=k; l++){
                if (userr == unn){
                    if (passs == passwdd){
                        cout << "LOADING...";
                        Sleep (2000);
                        cout << ".....";
                        system("cls");
                        cout << endl;
                        cout << "Anda login sebagai "<<userr<<endl;
                        cout << "lanjutkan masuk ke menu aplikasi glove world"<<endl;
                        getch();
                        do{
                        hu:
                        menuuu.menu1 =
                        "1. Wahana Area ";
                        menuuu.menu2 =
                        "2. Foodcourt Area ";
                        menuu.menu7 =
                        "3. Tampilkan Berita Terbaru";
                        menuu.menu8 =
                        "4. Tambah Saran Depan";
                        menuu.menu9 =
                        "5. Tambahkan Saran Belakang";
                        menuuu.menu3 =
                        "6. Keluar";

                        X=menuuu.menu1;
                        pointerX=&X;
                        Y=menuuu.menu2;
                        pointerY=&Y;
                        G=menuu.menu7;
                        pointerG=&G;
                        H=menuu.menu8;
                        pointerH=&H;
                        I=menuu.menu9;
                        pointerI=&I;
                        Z=menuuu.menu3;
                        pointerZ=&Z;
                        cout<<endl;
                        system("cls");
                        cout<<endl;
                        cout << "\t \t"<<"== USER MENU ==" << endl<<endl;
                        cout<<*pointerX<<endl;
                        cout<<*pointerY<<endl;
                        cout<<*pointerG<<endl;
                        cout<<*pointerH<<endl;
                        cout<<*pointerI<<endl;
                        cout<<*pointerZ<<endl<<endl;
                        cout<<"Silahkan Masukkan Pilihan : ";
                        cin>>pil4;
                        cout<<endl;
                        switch(pil4){
                        case 1 :
                            system("cls");
                            cout<<endl;
                            ha:
                            system("color 3");
                            cout<<endl;
                            cout<<"\t \t"<<"== W A H A N A  AREA =="<<endl<<endl;
                            cout<<"1. Pemesanan Tiket Wahana "<<endl;
                            cout<<"2. Pencarian Jarak Wahana Terdekat"<<endl;
                            cout<<"3. Keluar"<<endl<<endl;
                            cout<<"Silahkan masukkan pilihan wahana (1-3) : ";
                            cin>>pil5;
                            cout<<endl;
                            if (pil5 == 1){
                                system("cls");
                                cout<<endl;
                                cout<<" W A H A N A "<<endl<<endl;
                                cout<<"1. Bianglala"<<endl;
                                cout<<"2. Komedi Putar"<<endl;
                                cout<<"3. Rollercoaster"<<endl;
                                cout<<"4. Rumah Hantu"<<endl;
                                cout<<"5. Istana Boneka"<<endl;
                                cout<<"6. Tornado"<<endl;
                                cout<<"7. Ontang-Anting"<<endl;
                                cout<<"8. Keluar"<<endl<<endl;
                                cout<<"Silahkan masukkan pilihan : ";
                                cin>>pil6;
                                cout<<endl;
                                if (pil6 == 1){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" B I A N G L A L A (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 15){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" B I A N G L A L A "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;

                                        }
                                    }else{
                                            cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                    }
                                }else if(pil6 == 2){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" K O M E D I  P U T A R (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 12){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" K O M E D I  P U T A R "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if(pil6 == 3){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" R O L L E R C O A E S T E R (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 17){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" R O L L E R C O A S T E R "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if(pil6 == 4){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" RUMAH HANTU (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 15){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" RUMAH HANTU "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if(pil6 == 5){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" ISTANA BONEKA (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 15){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*15000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" ISTANA BONEKA "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if(pil6 == 6){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" TORNADO (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 15){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" TORNADO "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if(pil6 == 7){
                                    system("cls");
                                    cout<<endl;
                                    cout<<"\t \t"<<" ONTANG-ANTING (Rp. 20.000,-)"<<endl<<endl;
                                    cout<<"Masukkan umur : ";
                                    cin>>umur;
                                    if (umur >= 15){
                                        cout<<"Masukkan jumlah tiket yang dipesan : ";
                                        cin>>jumlah_tiket;
                                        ttl_tiket=jumlah_tiket*20000;
                                        cout<<"Total yang dibayar : "<<ttl_tiket<<endl;
                                        cout<<"Cetak tiket (y) : ";
                                        cin>>cetak;
                                        if (cetak == 'y'){
                                            cout<<endl;
                                            cout<<"\t \t"<<" ONTANG-ANTING "<<endl<<endl;
                                            cout<<"     Jumlah tiket yang dipesan ==> "<<jumlah_tiket<<endl;
                                            cout<<"     Total yang dibayar : "<<ttl_tiket<<endl<<endl;
                                            cout<<"Struk berhasil dicetak dan selamat menikmati liburan anda!"<<endl<<endl;
                                            getch();
                                            system("cls");
                                            goto ha;
                                        }
                                    }else{
                                        cout<<"Mohon maaf umur anda belum mencukupi standar untuk menaiki wahana ini :)"<<endl<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }
                                }else if (pil6 == 8){
                                    cout<<endl;
                                    cout<<"Yakin ingin keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }else{
                                        system("cls");
                                    }
                                }else{
                                    system("cls");
                                    cout<<endl;
                                    cout<<"Pilihan Tidak ada, ingin keluar menu (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto hu;
                                    }else{
                                        system("cls");
                                    }
                                }
                            }else if(pil5 == 2){
                                system("cls");
                                buatMatrik();
                                cout<<endl;
                                tampilMatrik();
                                cout<<"Silahkan masukkan simpul asal (0-"<<jumlahSimpul-1<<") : ";
                                cin>>simpulAsal;
                                cout<<"Silahkan masukkan simpul tujuan (0-"<<jumlahSimpul-1<<") : ";
                                cin>>simpulTujuan;
                                hitungJarakTerdekat();
                                   cout<<endl;
                                    cout<<"Yakin ingin keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        system("cls");
                                        goto ha;
                                    }else{
                                        system("cls");
                                        }
                            }else{
                                cout<<"Yakin ingin keluar (y/t) ? ";
                                cin>>ya_tidak;
                                cout<<endl;
                                if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                    getch();
                                    goto hu;
                                }else{
                                    system("cls");
                                }
                            }
                        break;
                        case 2 :
                            do{
                            system("cls");
                            system("color 8");
                            cout<<endl;
                            he:
                            cout<<"\t \t"<<"== F O O D C O U R T  AREA =="<<endl<<endl;
                            cout<<"1. Chatime "<<endl;
                            cout<<"2. McDonald "<<endl;
                            cout<<"3. Yoshinoya (Japanese Food)"<<endl;
                            cout<<"4. Keluar"<<endl<<endl;
                            cout<<"Silahkan Masukkan Pilihan Makanan (1-4) : ";
                            cin>>pil7;
                            cout<<endl;

                            if(pil7==1){
                                do{
                                system("cls");
                                cout<<endl;
                                cout<<"\t \t"<<"== C H A T I M E =="<<endl<<endl;
                                cout<<"=> Caramel Milk Tea (20k - CM)"<<endl;
                                cout<<"=> Honey Milk Tea (20k - HM)"<<endl;
                                cout<<"=> Matcha Milk Tea (20k - MM)"<<endl;
                                cout<<"=> Black Tea (22k - BT)"<<endl;
                                cout<<"=> Green Tea Latte (25k - GT)"<<endl<<endl;
                                cout<<"\t \t"<<"== O R D E R =="<<endl<<endl;
                                cout<<"1. Masukkan Pilihan Menu"<<endl;
                                cout<<"2. Hapus Pilihan"<<endl;
                                cout<<"3. Tampilan Konfirmasi"<<endl;
                                cout<<"4. Cetak Struk"<<endl;
                                cout<<"5. Keluar"<<endl<<endl;
                                cout<<"Silahkan Masukkan Pilihan (1-5) : ";
                                cin>>pil5;
                                cout<<endl;
                                if (pil5==1){
                                    cout<<"Silahkan masukkan pesanan (kode menu) : ";
                                    cin>>data_masuk;
                                    push_tumpukan(data_masuk);
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Jumpa kembali "<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==2){
                                    pop_tumpukan();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==3){
                                    tampil_dataS();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==4){
                                    tampil_data_struk();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==5){
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else{
                                    cout<<"Pilihan tidak tersedia..."<<endl;
                                    cout<<"Yakin ingin keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }
                                }while(keluar==false);
                            }else if(pil7==2){
                                do{
                                system("cls");
                                cout<<endl;
                                cout<<"\t \t"<<"== M C D O N A L D =="<<endl<<endl;
                                cout<<"=> Black Tea (BT - 22k)"<<endl;
                                cout<<"=> Paket Big Mac(PBM - 42k)"<<endl;
                                cout<<"=> MC Chicken (MCC - 38k)"<<endl;
                                cout<<"=> BlackPaper Chicken Rice (BCR - 37k)"<<endl;
                                cout<<"=> Fish Fillet Burger (FFB - 39k)"<<endl;
                                cout<<"=> MC Spicy Burger (MSB - 38K)"<<endl;
                                cout<<"=> Saussage Wrap (SW - 28k)"<<endl<<endl;
                                cout<<"\t \t"<<"== O R D E R =="<<endl<<endl;
                                cout<<"1. Masukkan Pilihan Menu"<<endl;
                                cout<<"2. Hapus Pilihan"<<endl;
                                cout<<"3. Tampilan Konfirmasi"<<endl;
                                cout<<"4. Cetak Struk"<<endl;
                                cout<<"5. Keluar"<<endl<<endl;
                                cout<<"Silahkan Masukkan Pilihan (1-5) : ";
                                cin>>pil8;
                                cout<<endl;
                                if (pil8==1){
                                    cout<<"Silahkan masukkan data : ";
                                    cin>>data_masuk;
                                    push_tumpukan(data_masuk);
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terimakasih "<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil8==2){
                                    pop_tumpukan();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil8==3){
                                    tampil_dataS();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil8==4){
                                    tampil_data_struk();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil8==5){
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else{
                                    cout<<"Pilihan tidak tersedia..."<<endl;
                                    cout<<"Yakin ingin keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }
                                }while(keluar==false);
                            }else if(pil7==3){
                                do{
                                system("cls");
                                cout<<endl;
                                cout<<"\t \t"<<"== Y O S H I N O Y A =="<<endl<<endl;
                                cout<<"=> Matcha Milk Tea (MMT - 20k)"<<endl;
                                cout<<"=> Black Tea (BT - 22k)"<<endl;
                                cout<<"=> Green Tea Latte (GTL - 25k)"<<endl;
                                cout<<"=> Chiken Crispy (CC - 30k)"<<endl;
                                cout<<"=> Chicken Karaage (CK - 35k)"<<endl<<endl;
                                cout<<"\t \t"<<"== O R D E R =="<<endl<<endl;
                                cout<<"1. Masukkan Pilihan Menu"<<endl;
                                cout<<"2. Hapus Pilihan"<<endl;
                                cout<<"3. Tampilan Konfirmasi"<<endl;
                                cout<<"4. Cetak Struk"<<endl;
                                cout<<"5. Keluar"<<endl<<endl;
                                cout<<"Silahkan Masukkan Pilihan (1-5) : ";
                                cin>>pil5;
                                cout<<endl;
                                if (pil5==1){
                                    cout<<"Silahkan masukkan data : ";
                                    cin>>data_masuk;
                                    push_tumpukan(data_masuk);
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Jumpa kembali "<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==2){
                                    pop_tumpukan();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==3){
                                    tampil_dataS();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==4){
                                    tampil_data_struk();
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else if(pil5==5){
                                    cout<<"Keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }else{
                                    cout<<"Pilihan tidak tersedia..."<<endl;
                                    cout<<"Yakin ingin keluar (y/t) ? ";
                                    cin>>ya_tidak;
                                    cout<<endl;
                                    if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                        cout<<" Terima kasih"<<endl;
                                        getch();
                                        goto he;
                                    }else{
                                        system("cls");
                                    }
                                }
                                }while(keluar==false);
                            }else if(pil7==4){
                                cout<<"Keluar (y/t) ? ";
                                cin>>ya_tidak;
                                cout<<endl;
                                if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                    cout<<" Terima kasih"<<endl;
                                    getch();
                                    goto hu;
                                }else{
                                    system("cls");
                                }
                            }else{
                                cout<<"Pilihan tidak tersedia..."<<endl;
                                cout<<"Keluar (y/t) ? ";
                                cin>>ya_tidak;
                                cout<<endl;
                                if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                    cout<<" Terima kasih"<<endl;
                                    getch();
                                    goto hu;
                                }else{
                                    system("cls");
                                }
                            }
                            }while(keluar==false);
                        break;
                        case 3 :
                            system("color 6");
                            cout<<endl;
                            cout<<"\t \t"<<"== INFORMASI TERKINI =="<<endl<<endl;
                            cout<<"Informasi Hari ini :"<<endl;
                            tampil_Berita();
                            cout<<"Keluar (y/t) ? "; cin>>ya_tidak;
                            cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;
                                system("cls");
                            }else{
                                getch();
                                goto hu;
                            }
                        break;
                        case 4 :
                            system("cls");
                            cout<<"\t \t"<<"== SARAN UNTUK GLOVEWORLD =="<<endl<<endl;
                            cout<<"Silahkan masukkan saran : ";
                            cin.ignore();
                            getline(cin, data_saran);
                            tambahDepanSaran(data_saran);
                            cout<<endl;
                            cout<<"Keluar (y/t) ? "; cin>>ya_tidak;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                goto hii;
                                system("cls");
                            }else{
                                getch();
                                goto hu;
                            }
                        break;
                        case 5 :
                            system("cls");
                            cout<<"\t \t"<<"== SARAN UNTUK GLOVEWORLD =="<<endl<<endl;
                            cout<<"Silahkan masukkan saran : ";
                            cin.ignore();
                            getline(cin, data_saran);
                            tambahBelakangSaran(data_saran);
                            cout<<endl;
                            cout<<"Keluar (y/t) ? "; cin>>ya_tidak;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                goto hii;
                                system("cls");
                            }else{
                                getch();
                                goto hu;
                            }
                        break;
                        case 6 :
                            cout<<"Keluar (y/t) ? ";
                            cin>>ya_tidak;
                            cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;
                            }else{
                                getch();
                                goto hu;
                            }
                        break;
                        default :
                            cout<<"Pilihan tidak tersedia..."<<endl;
                            cout<<"Keluar (y/t) ? ";
                            cin>>ya_tidak;
                            cout<<endl;
                            if(ya_tidak == 'y' || ya_tidak == 'Y'){
                                cout<<" Terima kasih"<<endl;
                                goto hii;
                            }else{
                                getch();
                                goto hu;
                            }
                        }while(keluar==false);

                    }while(keluar==false);
                }else{
                        if (percobaann==1){
                            system("cls");
                            cout << "ANDA TERLALU BANYAK MENCOBA MASUK"<<endl;
                            cout << "COBA BEBERAPA SAAT LAGI!!";
                            Sleep(5000);
                            goto hi;
                        }
                        percobaann=percobaann-1;
                        system("cls");
                        cout << "kata sandi salah, kesempatan anda sisa "<<percobaann<<" kali";
                        getch();
                        goto hi;
                    }
            }
    }
                system("cls");
                cout << "username yang anda masukkan salah";
                getch();
                goto ho;
}
}else if(pilihan==3){
 cout<<"Apakah anda ingin keluar?"<<endl;
        cout<<"Keluar (y/t) ? ";
        cin>>ya_tidak;
        cout<<endl;
        if(ya_tidak == 'y' || ya_tidak == 'Y'){
            system("cls");
            cout<<endl;
            cout<<"\t \t"<<"== ANDA TELAH KELUAR DARI APLIKASI =="<<endl<<endl;
            cout<<"\t \t \t"<<"==> Terima kasih <=="<<endl;
            keluar = true;
        }else{
            goto hii;
        }
}else {
        cout<<"Pilihan tidak tersedia..."<<endl;
        cout<<"Keluar (y/t) ? ";
        cin>>ya_tidak;
        cout<<endl;
        if(ya_tidak == 'y' || ya_tidak == 'Y'){
            cout<<" Terima kasih"<<endl;
            keluar = true;
        }else{
            goto hii;
        }
}
 return 0;
}
