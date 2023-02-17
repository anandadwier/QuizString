#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 256

int cont;
void perkalian (){
    float n,a,total=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan angka pertama = ");
    scanf ("%f", &n);
    printf ("Masukkan angka kedua = ");
    scanf ("%f", &a);

    total=n*a;
    printf ("Hasil dari %.2f * %.2f adalah = %.2f", n, a, total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Perkalian?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_pingporo();
                }
                else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void pembagian (){
    float n,a,total=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan angka pertama = ");
    scanf ("%f", &n);
    printf ("Masukkan angka kedua = ");
    scanf ("%f", &a);

    total=n/a;
    printf ("Hasil dari %.2f / %.2f adalah = %.2f", n, a, total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Pembagian?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_pingporo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void penjumlahan (){
    float n,a,total=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan angka pertama = ");
    scanf ("%f", &n);
    printf ("Masukkan angka kedua = ");
    scanf ("%f", &a);

    total=n+a;
    printf ("Hasil dari %.2f + %.2f adalah = %.2f", n, a, total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Penjumlahan?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_pingporo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void pengurangan (){
    float n,a,total=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan angka pertama = ");
    scanf ("%f", &n);
    printf ("Masukkan angka kedua = ");
    scanf ("%f", &a);

    total=n-a;
    printf ("Hasil dari %.2f - %.2f adalah = %.2f", n, a, total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Pengurangan?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_pingporo();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void sinus (){
    double inputan,total=0, PI=3.14;
    ulang:
    system ("Color F8");
    printf ("Masukkan derajat Sinus = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = sin(inputan);
    printf ("Hasil Sinus adalah %.2lf", total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Sinua?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_SinCosTan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void cosinus(){
    double inputan,total=0, PI=3.14;
    ulang:
    system ("Color F8");
    printf ("Masukkan derajat Cosinus = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = cos(inputan);
    printf ("Hasil Cosinus adalah %.2lf", total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Cosinus?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_SinCosTan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void tangen(){
    double inputan,total=0, PI=3.14;
    ulang:
    system ("Color F8");
    printf ("Masukkan derajat Tangen = ");
    scanf ("%lf", &inputan);

    inputan = (inputan * PI)/180;
    total = tan(inputan);
    printf ("Hasil Tangen adalah %.2lf", total);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Tangen?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_SinCosTan();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void kel_persegi(){
    float a, b, hasil;
    ulang:
    system ("Color F8");
    printf("Masukan Panjang Persegi : ");
    scanf("%f", &a);
    printf("Masukan Lebar Persegi   : ");
    scanf("%f", &b);
    hasil = 2*(a+b);
    printf("Keliling Persegi Adalah = %.2f", hasil);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Keliling Persegi?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_bangundatar();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void kel_trapesium(){
    float atas, bawah, miring, hasil=0;
    ulang :
    system ("Color F8");
    printf ("Masukkan Sisi Atas Trapesium Sama Kaki : ");
    scanf ("%f", &atas);
    printf ("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf ("%f", &bawah);
    printf ("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf ("%f", &miring);

    hasil = bawah+miring+atas+miring;
    printf ("Keliling Trapesium Sama Kaki Adalah %.2f", hasil);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Keliling Trapesium?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_bangundatar();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void kel_LayangLayang(){
    float a,b,hasil;
    ulang:
    system ("Color F8");
    printf("Masukkan Panjang Sisi Atas : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Sisi Bawah   : ");
    scanf("%f", &b);
    hasil =2*(a+b);
    printf("Keliling Layang-Layang adalah = %.2f", hasil);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Keliling Layang-layang?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_bangundatar();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void kel_lingkaran(){
    float r,d,hasil1,hasil2, phi=3.14;
    ulang:
    system ("Color F8");
        printf("Masukkan Panjang Diameter  : ");
        scanf("%f", &d);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &r);
        hasil1=phi*d;
        hasil2=phi*2*r;
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", hasil2);
        printf("Keliling Lingkaran berdasar Diameter = %.2f", hasil1);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Keliling Lingkaran?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
               if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_bangundatar();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void luas_persegi (){
    float pjg, lbr, luas=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan Panjang Persegi : ");
    scanf ("%f", &pjg);
    printf ("Masukkan Lebar Persegi : ");
    scanf ("%f", &lbr);

    luas = pjg*lbr;
    printf ("Luas Persegi Adalah %.2f", luas);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Luas Persegi?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void luas_trapesium(){
    float a, b, tinggi, luas=0;
    ulang:
    system ("Color F8");
    printf("Masukkan sisi atas trapesium sama kaki : ");
    scanf("%f", &a);
    printf("masukkan sisi bawah trapesium sama kaki : ");
    scanf("%f", &b);
    printf("Masukkan tinggi trapesium sama kaki : ");
    scanf("%f", &tinggi);

    luas = 0.5*(a+b)*tinggi;
    printf ("Luas Trapesium Sama Kaki Adalah %.2f", luas);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Luas Trapesium?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
               if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void luas_layanglayang(){
    float pjg, lbr, luas=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan Diagonal Panjang : ");
    scanf ("%f", &pjg);
    printf ("Masukkan Diagonal Lebar : ");
    scanf ("%f", &lbr);

    luas = (pjg*lbr)/2;
    printf ("Luas Layang-Layang Adalah %.2f", luas);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Luas Layang-layang?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void luas_lingkaran(){
    float r, a, b, luas1=0, luas2=0;
    ulang:
    system ("Color F8");
    printf ("Masukkan Panjang Diameter : ");
    scanf ("%f", &a);
    printf ("Masukkan Panjang Jari-Jari : ");
    scanf ("%f", &r);

    b=a/2;
    luas1 = 3.14*b*b;
    luas2 = 3.14*r*r;
    printf ("Luas Lingkaran Berdasarkan Jari-Jari  : %.2f\n", luas2);
    printf ("Luas Lingkaran Berdasarkan Diameter  : %.2f", luas1);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Luas Lingkaran?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_luas();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void volume_kubus(){
    float s, v;
    ulang:
    system ("Color F8");
    printf ("Masukkan Panjang Sisi Kubus : ");
    scanf ("%f", &s);
    v = s*s*s;
    printf ("Volume Kubus adalah %.2f", v);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Volume Kubus?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
               if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_volume();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }

}

void volume_prisma(){
    float sisi, alassegitiga, tinggisegitiga, r, d, t, volume1=0, volume2=0, volume3=0, volume4=0, luasalas1, luasalas2, luasalas3, luasalas4;
    ulang:
    system ("Color F8");
    printf("Masukkan Sisi Persegi : ");
    scanf("%f", &sisi);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &alassegitiga);
    printf("Masukkan Tinggi Segitiga : ");
    scanf("%f", &tinggisegitiga);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &r);
    printf("Masukkan Diameter Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Tinggi Prisma : ");
    scanf("%f", &t);

    luasalas1 = sisi*sisi;
    volume1 = luasalas1*t;
    luasalas2 = 0.5*alassegitiga*tinggisegitiga;
    volume2 = luasalas2*t;
    luasalas3 = 0.25*22/7*(r*2)*(r*2)*t;
    volume3 = luasalas3;
    luasalas4 = 0.25 * 22 / 7 * d * d * t;
    volume4 = luasalas4;

    printf("Volume Prisma Persegi adalah = %.2f\n", volume1);
    printf("Volume Prisma Segitiga adalah = %.2f\n", volume2);
    printf("Volume Silinder Berdasarkan Jari-Jari adalah = %.2f\n", volume3);
    printf("Volume Silinder Berdasarkan Diameter adalah = %.2f", volume4);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Volume Prisma?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_volume();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void volume_limas(){
    float sisi,alas,tinggi,r,d,t,e,volume1=0,volume2=0,volume3=0,volume4=0, phi=3.14;
    ulang:
    system ("Color F8");
    printf ("Masukkan Sisi Persegi : ");
    scanf ("%f", &sisi);
    printf ("Masukkan Lebar Alas Segitiga : ");
    scanf ("%f", &alas);
    printf ("Masukkan Tinggi Segitiga : ");
    scanf ("%f", &tinggi);
    printf ("Masukkan Jari-Jari Lingkaran : ");
    scanf ("%f", &r);
    printf ("Masukkan Diameter Lingkaran :  ");
    scanf ("%f", &d);
    printf ("Masukkan Tinggi Limas : ");
    scanf ("%f", &t);

    e=d/2;
    volume1 = sisi*sisi*t/3;
    volume2 = alas*tinggi*t/6;
    volume3 = (phi*e*e)*t/3;
    volume4 = (phi*r*r)*t/3;

    printf("Volume Limas Persegi adalah = %.2f\n", volume1);
    printf("Volume Limas Segitiga adalah = %.2f\n", volume2);
    printf("Volume Limas Silinder Berdasarkan Jari-Jari adalah = %.2f\n", volume4);
    printf("Volume Limas Silinder Berdasarkan Diameter adalah = %.2f", volume3);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Volume Limas?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_volume();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void volume_bola(){
    float r, d, volume1=0, volume2=0, luasling1, luasling2, phi = 3.14;
    ulang:
    system ("Color F8");
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%2f", &r);
    printf("Masukkan Diameter Lingkaran : ");
    scanf("%2f", &d);

    volume1 = 1.33 * phi * r * r * r;
    volume2 = (4.0/3) * phi * (d/2) * (d/2) * (d/2);
    printf("Volume Bola Berdasarkan Jari-jari adalah = %.2f\n", volume1);
    printf("Volume Bola Berdasarkan Diameter adalah = %.2f", volume2);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Volume Bola?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
                if(cont =='n'|| cont=='N'){
                    system("cls");
                goto *menu_volume();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void akar(){
    float inputan;
    double tampung;
    ulang:
    system ("Color F8");
        printf ("Masukkan bilangan yang akan diakar = ");
        scanf (" %f", &inputan);
        // sqrt(squareroot)
        tampung = sqrt(inputan);
        printf ("Hasil akar dari %.2f adalah %.2f", inputan, tampung);

    printf ("\nPress any key to continue . . .");
    getch();

    ulang1 :
    printf ("\nIngin Mengulang Akar Kuadrat?(y/n)");
    getchar();
    cont = getchar();
            if (cont == 'y'|| cont == 'Y'){
                system("cls");
            goto ulang;
            }
               if(cont =='n'|| cont=='N'){
                    system("cls");
               goto *menu_utama();
                }
                 else {
                    system("cls");
                    printf ("\nPilihan Tidak Tersedia");
                    goto ulang1;
                }
}

void menu_pingporo (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Ping Poro Lan Sudo\n");
    printf ("===================\n");
    printf ("1. Perkalian\n");
    printf ("2. Pembagian\n");
    printf ("3. Penjumlahan\n");
    printf ("4. Pengurangan\n");
    printf ("5. Return Menu Utama\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : perkalian();break;
    case 2 : pembagian();break;
    case 3 : penjumlahan();break;
    case 4 : pengurangan();break;
    case 5 : menu_utama();break;
    default : printf ("Menu Tidak Tersedia");
    }
}

void menu_keliling (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Keliling Luas Volume\n");
    printf ("===================\n");
    printf ("1. Hitung Keliling Bangun Datar\n");
    printf ("2. Hitung Luas Bangun Datar\n");
    printf ("3. Hitung Volume Bangun Ruang\n");
    printf ("4. Return Menu Utama\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : menu_bangundatar();break;
    case 2 : menu_luas();break;
    case 3 : menu_volume();break;
    case 4 : menu_utama();break;
    default : printf ("Menu Tidak Tersedia");
    }
}

void menu_bangundatar (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Keliling Bangun Datar\n");
    printf ("===================\n");
    printf ("1. Keliling Persegi\n");
    printf ("2. Keliling Trapesium\n");
    printf ("3. Keliling Layang-Layang\n");
    printf ("4. Keliling Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : kel_persegi();break;
    case 2 : kel_trapesium();break;
    case 3 : kel_LayangLayang();break;
    case 4 : kel_lingkaran();break;
    case 5 : menu_keliling();break;
    default : printf ("Menu Tidak Tersedia");
    }
}

void menu_SinCosTan (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Sin Cos Tan\n");
    printf ("===================\n");
    printf ("1. Sinus\n");
    printf ("2. Cosinus\n");
    printf ("3. Tangen\n");
    printf ("4. Return Menu Utama\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : sinus();break;
    case 2 : cosinus();break;
    case 3 : tangen();break;
    case 4 : menu_utama();break;
    default : printf ("Menu Tidak Tersedia");
    }

}

void menu_luas (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Luas Bangunan Datar\n");
    printf ("===================\n");
    printf ("1. Luas Persegi\n");
    printf ("2. Luas Trapesium\n");
    printf ("3. Luas Layang-Layang\n");
    printf ("4. Luas Lingkaran\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : luas_persegi();break;
    case 2 : luas_trapesium();break;
    case 3 : luas_layanglayang();break;
    case 4 : luas_lingkaran();break;
    case 5 : menu_keliling();break;
    default : printf ("Menu Tidak Tersedia");
    }
}

void menu_volume (){
    int n;
    system ("Color F8");
    printf ("===================\n");
    printf ("Volume Bangun Raung\n");
    printf ("===================\n");
    printf ("1. Volume Kubus\n");
    printf ("2. Volume Prisma\n");
    printf ("3. Volume Limas\n");
    printf ("4. Volume Bola\n");
    printf ("5. Kembali Ke Menu Sebelumnya\n");
    printf ("===================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &n);
    system ("cls");
    switch (n){
    case 1 : volume_kubus();break;
    case 2 : volume_prisma();break;
    case 3 : volume_limas();break;
    case 4 : volume_bola();break;
    case 5 : menu_keliling();break;
    default : printf ("Menu Tidak Tersedia");
    }
}

void menu_utama (){
    int pilihan;
    system ("cls");
    system ("Color F8");
    printf ("========================\n");
    printf ("   TUGAS KALKULATOR    \n");
    printf ("========================\n");
    printf ("1. PingPoroLanSudo\n");
    printf ("2. SinCosTan\n");
    printf ("3. Hitung Keliling dan Luas\n");
    printf ("4. Hitung Akar Kuadrat\n");
    printf ("5. Exit\n");
    printf ("=========================\n");
    printf ("Pilih menu : ");
    scanf ("%d", &pilihan);
    system ("cls");

    switch (pilihan){
        case 1: menu_pingporo(); break;
        case 2: menu_SinCosTan(); break;
        case 3: menu_keliling(); break;
        case 4: akar(); break;
        case 5: printf ("Anda Telah Mencapai Yang Terakhir.... TERIMA KASIH:))");
        default : menu_utama ();
    }
}
void main (){
    char username[MAX];
    char password[MAX];
    int hasil;

    printf ("Masukkan Username = ");
    scanf ("%s", &username);
    printf ("Masukkan Password = ");
    scanf ("%s", &password);
    if (strcmp(username, password)==0 && strcmp (password, password)== 0){
         menu_utama();
    }
    else {
    printf ("Input Salah");
    system ("cls");
         main();
    }
}

