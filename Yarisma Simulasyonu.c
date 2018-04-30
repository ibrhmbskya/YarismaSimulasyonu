#include<stdio.h>
#include<stdlib.h>

//Fonksiyon tanimlamalari.
/*
    devam():cikis icin emin olup olmadigini sormak icin.
    case olarak tanimlanan fonksiyonlar yarisma istatistiklerini yazdirmak icin.

*/


void devam();
void case21(int [],int [],int);
void case22(int [],int [],int);
void case23(int [][20],int [],int,int);
void sirala1(int [],int [],int [],int [],int);
void case24(int [][20],int);


int main()
{
    // degisken tanimlamalari.
    int girilenDeger,yarismaciSayisi=0,haftaSayisi=0,kocSayisi=0,toplamPuan[20],haftalikToplamPuan[20],frekansBirinci[20],yarismaciTutanHaftalikKocPuan[20][20];
    int yarismaciDizisi[20],haftalikKocPuani[20],kocPuani[20],haftalikSeyirciPuani[20],seyirciPuani[20],yarismaciNum[20],yarismaciTutanHaftalikTopPuan[20][20],haftalikKocPuaniTut[20];
    int i,n,k,a,e,f,g,l,m,j,b,yarismaciNumarasi=0,max=0,hSeyirciPuani[20];
    int kontrol1=0,kontrol2=0,kontrol3=0,kontrol4=0;


    // While dongusu yarismacinin menuden secim yapmasi icin duzenlendi,her islem sonunda ana menuye donsun diye sonsuz dongu yapildi.
    while(1){

        printf("ANA MENU\n");
        printf("1. Yeni Yarisma Duzenleme\n");
        printf("2. Son Duzenlenen Yarismanin Istatistiklerini Gorunteleme\n");
        printf("3. Cikis\n");
        scanf("%d",&girilenDeger);yarismaciTutanHaftalikTopPuan[yarismaciSayisi,haftaSayisi];

        //switch case yapisiyla secim yaptirildi.
        switch(girilenDeger){
            case 1:{

                // Yeni yarisma duzenleme secilirse asagidaki sekilde basliyor.
                printf("Lutfen 5 ile 20 arasinda yarismaci sayisini giriniz:");
                scanf("%d",&yarismaciSayisi);

                //yarismaci sayisinin hatali girilmesi durumunda calisan dongu.
                while(yarismaciSayisi<5 || yarismaciSayisi>20){
                    printf("\nHatali giris 5 ile 20 arasinda tekrar giriniz:");
                    scanf("%d",&yarismaciSayisi);
                }
                /*
                    diziler tanimlandi

                    yarismaciDizisi[]: Hic bir ise yaramiyo silmeye korktum.
                    haftalikKocPuani[]:Koc puanlarini haftalik olarak tutan dizi.
                    haftalikSeyirciPuani[]:Seyirci puanlarini haftalik olarak tutan dizi.
                    kocPuani[]:Toplam koc puanini tutan dizi.
                    seyirciPuani[]:Toplam seyirci puanini tutan dizi.
                    toplamPuan[]:Toplam puani tutan dizi.
                    haftalikToplamPuan[]:Toplam puani haftalik olarak tutan dizi.
                    yarismaciNum[]:Yarismaci numaralarini tutan dizi.
                    haftalikKocPuaniTut[]:Siralamada hataya yer vermemek icin haftalik koc puaninin tutuldugu dizi.
                    hSeyirciPuani[]:Siralamada hataya yer vermemek icin haftalik seyirci puaninin tutuldugu dizi.

                */

                yarismaciDizisi[yarismaciSayisi];
                kocSayisi=yarismaciSayisi;
                haftalikKocPuani[yarismaciSayisi];
                haftalikSeyirciPuani[yarismaciSayisi];
                kocPuani[yarismaciSayisi];
                seyirciPuani[yarismaciSayisi];
                toplamPuan[yarismaciSayisi];
                haftalikToplamPuan[yarismaciSayisi];
                yarismaciNum[yarismaciSayisi];
                haftalikKocPuaniTut[yarismaciSayisi];
                hSeyirciPuani[yarismaciSayisi];

                // Yarismaci numaralarini atamak icin kullanilan for dongusu.
                for(i=0;i<yarismaciSayisi;i++){
                    yarismaciNum[i]=i+1;
                }

                printf("\nLutfen hafta sayisini(minimum 3 hafta) giriniz:");
                scanf("%d",&haftaSayisi);


                // istatistiklerin 3 ve 4 unu bulmak icin kullanilan diziler.
                yarismaciTutanHaftalikTopPuan[haftaSayisi][yarismaciSayisi];
                frekansBirinci[yarismaciSayisi];
                yarismaciTutanHaftalikKocPuan[kocSayisi][yarismaciSayisi];


                // dizi elemanlarinin sifira atandigi dongu.
                for(j=0;j<yarismaciSayisi;j++){
                    for(i=0;i<haftaSayisi;i++){
                        yarismaciTutanHaftalikTopPuan[i][j]=0;
                    }
                    frekansBirinci[j]=0;
                }
                for(j=0;j<yarismaciSayisi;j++){
                    for(i=0;i<kocSayisi;i++){
                        yarismaciTutanHaftalikKocPuan[j][i]=0;
                    }
                }

                // hafta sayisinin hatali girilmesi durumunda calisan dongu.
                while(haftaSayisi<3){
                    printf("\nLutfen hafta sayisini(minimum 3 hafta) giriniz:");
                    scanf("%d",&haftaSayisi);
                }

                //dizi elemanlarinin sifira atandigi dongu.
                for(g=0;g<yarismaciSayisi;g++){
                    haftalikKocPuani[g]=0;
                    haftalikSeyirciPuani[g]=0;
                    haftalikToplamPuan[g]=0;
                    kocPuani[g]=0;
                    seyirciPuani[g]=0;
                    toplamPuan[g]=0;
                    haftalikKocPuaniTut[g]=0;
                    hSeyirciPuani[g]=0;
                }

                /*
                    Puanlamanin baslatildigi bolum.
                    ilk for dongusu hafta sayisina gore calisiyo.
                    ikinci for koc sayisi kadar puanlama aliyor.
                    ucuncu dongu ilk olarak 3 puandan baslamasini sagliyor.
                */
                for(i=0;i<haftaSayisi;i++){
                    for(n=0;n<kocSayisi;n++){
                        for(k=3;k>=1;k--){
                            printf("\nKoc %d icin %d puanin verildigi yarismaci:",n+1,k);
                            scanf("%d",&yarismaciNumarasi);

                            // Kendi yarismacisina puan verirse hata mesaji aliyor.
                            while((yarismaciNumarasi-1)==n){
                            printf("\nKendi yarismaciniza puan veremezsiniz Koc %d icin %d puanin verildigi yarismaci:",n+1,k);
                            scanf("%d",&yarismaciNumarasi);
                            }

                            /*
                                if secim yapilari ayni yarismaciya 2 defa puan verilmemesini saglamak icin.
                            */
                            if(k==3){
                                kontrol1=yarismaciNumarasi;
                            }
                            if(k==2){
                                while(kontrol1==yarismaciNumarasi){
                                    printf("Bu koc bu yarismaciya zaten oy verdi(kendi yarismacisi haricinde ve farkli bir yarismaci girin)!!!\n");
                                    scanf("%d",&yarismaciNumarasi);
                                }

                                while((yarismaciNumarasi-1)==n){
                                    printf("\nKendi yarismaciniza puan veremezsiniz Koc %d icin %d puanin verildigi yarismaci:",n+1,k);
                                    scanf("%d",&yarismaciNumarasi);
                                }
                                kontrol2=yarismaciNumarasi;
                            }
                            if(k==1){
                                while(kontrol1==yarismaciNumarasi||kontrol2==yarismaciNumarasi){
                                    printf("Bu koc bu yarismaciya zaten oy verdi(kendi yarismacisi haricinde ve farkli bir yarismaci girin)!!!\n");
                                    scanf("%d",&yarismaciNumarasi);
                                }
                                while((yarismaciNumarasi-1)==n){
                                    printf("\nKendi yarismaciniza puan veremezsiniz Koc %d icin %d puanin verildigi yarismaci:",n+1,k);
                                    scanf("%d",&yarismaciNumarasi);
                                }
                            }

                            //yarismaci numaralarinin disinda deger girilmemesi icin olusturldu.
                            while(yarismaciNumarasi<1||yarismaciNumarasi>yarismaciSayisi){
                                printf("Yarismaci numarasi bulunamadi tekrar girin!!!");
                                scanf("%d",&yarismaciNumarasi);
                            }

                            //Girilen puanlarin uygun yarismacilara atanmasi.
                            haftalikKocPuani[yarismaciNumarasi-1]+=k;
                            haftalikKocPuaniTut[yarismaciNumarasi-1]+=k;
                        }

                        //haftalik koc puani 3. istatistik icin eklenip daha sonra sýfýrlanýyor.
                        for(b=0;b<yarismaciSayisi;b++){
                            yarismaciTutanHaftalikKocPuan[n][b]+=haftalikKocPuaniTut[b];
                            haftalikKocPuaniTut[b]=0;

                        }

                    }

                    //seyirci puanlarin 3 puandan baslanarak uygun yarismacilara atanmasi.
                    for(f=3;f>=1;f--){
                            printf("\nSeyirci tarafindan %d puanin verildigi yarismaci:",f);
                            scanf("%d",&yarismaciNumarasi);


                            // if yapilari ayni yarismaciya 2 defa puan verilmesini engelliyor.
                            if(f==3){
                                kontrol3=yarismaciNumarasi;
                            }
                            if(f==2){
                                while(kontrol3==yarismaciNumarasi){
                                    printf("Seyirciler bu yarismaciya zaten oy verdi(farkli bir yarismaci girin)!!!\n");
                                    scanf("%d",&yarismaciNumarasi);
                                }
                                kontrol4=yarismaciNumarasi;
                            }
                            if(f==1){
                                while(kontrol3==yarismaciNumarasi||kontrol4==yarismaciNumarasi){
                                    printf("Seyirciler bu yarismaciya zaten oy verdi(farkli bir yarismaci girin)!!!\n");
                                    scanf("%d",&yarismaciNumarasi);
                                }
                            }

                            //yarismaci numarasi disinda numara girilmesi engellendi.
                            while(yarismaciNumarasi<1||yarismaciNumarasi>yarismaciSayisi){
                                printf("Yarismaci numarasi bulunamadi tekrar girin!!!");
                                scanf("%d",&yarismaciNumarasi);
                            }

                            //girilen puanin uygun yarismaciya atanmasi.
                            haftalikSeyirciPuani[yarismaciNumarasi-1]+=f;
                    }

                    //hesaplamalar dizilere for donguleri sayesinde yapiliyor.
                    for(a=0;a<yarismaciSayisi;a++){
                        kocPuani[a]+=haftalikKocPuani[a];
                        seyirciPuani[a]+=(haftalikSeyirciPuani[a]*(kocSayisi-1));
                        haftalikToplamPuan[a]+=haftalikKocPuani[a]+(haftalikSeyirciPuani[a]*(kocSayisi-1));
                        toplamPuan[a]+=haftalikToplamPuan[a];
                        hSeyirciPuani[a]=(haftalikSeyirciPuani[a]*(kocSayisi-1));

                        for(b=0;b<kocSayisi;b++){

                        yarismaciTutanHaftalikTopPuan[a][b]=haftalikToplamPuan[b];
                        }

                    }

                    // en yuksek puan hesaplaniyor.
                    for(j=0;j<yarismaciSayisi;j++){

                        if(max<haftalikToplamPuan[j])
                            max=haftalikToplamPuan[j];
                    }

                    //en yuksek puani alan yarismaciya birincilik sayisi olarak ekleniyor.
                    for(j=0;j<yarismaciSayisi;j++){
                        if(max==haftalikToplamPuan[j])
                            frekansBirinci[j]++;
                    }

                    //haftalik yazdirma islemleri yapiliyor.
                    printf("%d. Haftanin sonuclari:\n",i+1);
                    printf("%s%9s%18s%22s%22s\n","Sira","Yarismaci No","Koc Puani","Seyirci Puani","Toplam Puan");
                    for(e=0;e<yarismaciSayisi;e++){
                        printf("%d%7d%15d%23d%28d\n",e+1,yarismaciNum[e],haftalikKocPuani[e],hSeyirciPuani[e],haftalikToplamPuan[e]);
                    }

                    printf("%d. Hafta sonunda genel durum:\n",i+1);
                    printf("%s%10s%15s%21s%27s\n","Sira","Yarismaci No","Koc Puani","Seyirci Puani","Toplam Puan");
                    for(m=0;m<yarismaciSayisi;m++){
                        printf("%d%7d%15d%23d%28d\n",m+1,yarismaciNum[m],kocPuani[m],seyirciPuani[m],toplamPuan[m]);
                    }


                    //yazdirma islemlerinden sonra uygun diziler sifirlaniyor.
                    for(l=0;l<yarismaciSayisi;l++){
                    haftalikKocPuani[l]=0;
                    haftalikSeyirciPuani[l]=0;
                    haftalikToplamPuan[l]=0;
                    hSeyirciPuani[l]=0;
                    }

                }};break;


            // kullanici istatistikleri goruntulemek isterse case 2 calisir.
            case 2:{
                printf("1. Sadece koclarin puanlamasi dikkate alindigina genel durumun listelenmesi\n");
                printf("2. Sadece seyircilerin puanlamasi dikkate alindigina genel durumun listelenmesi \n");
                printf("3. Yarismacilarin her hafta aldiklari toplam puanlarin listelenmesi\n");
                printf("4. Yarismacilarin her koctan aldiklari toplam puanlarin listelenmesi\n");
                printf("5. Ana Menu\n");
                scanf("%d",&girilenDeger);
                switch(girilenDeger){
                    case 1:case21(yarismaciNum,kocPuani,yarismaciSayisi);break;
                    case 2:case22(yarismaciNum,seyirciPuani,yarismaciSayisi);break;
                    case 3:case23(yarismaciTutanHaftalikTopPuan,frekansBirinci,yarismaciSayisi,haftaSayisi);break;
                    case 4:case24(yarismaciTutanHaftalikKocPuan,yarismaciSayisi);break;
                    case 5:continue;break;
                }break;
            }

            case 3:devam();break;

        }
    }

    return 0;
}

// kullanici cikmak istediginde emin olup olmadigini soran fonksiyon.
void devam(){

    char devammi;

    printf("Programdan cikmak istediginize emin misiniz?:");
    scanf("%s",&devammi);

    while(devammi!='E' && devammi!='e' && devammi!='H' && devammi!='h'){
        printf("Hatali giris tekrar giriniz:");
        scanf("%s",&devammi);
    }

    if(devammi=='E' || devammi=='e'){
        exit(0);
    }
}


//Sadece koclarin puanlamasi dikkate alindigina genel durumun listelenmesini saglayan fonksiyon.
//yarismaciNum,kocPuani,yarismaciSayisi ni aliyor.
void case21(int dizi[],int dizi1[],int s){

    //yerel degiskenler tanimlaniyor.
    int ara1=0,ara2=0,sayac1,sayac2,i,yarismaciNumTut[20]={0},kocPuaniTut[20]={0};

    //Fonksiyona ozel kullanilacak diziler tanimlaniyor.
    yarismaciNumTut[s];
    kocPuaniTut[s];

    for(i=0;i<s;i++){
        yarismaciNumTut[i]=0;
        kocPuaniTut[i]=0;
    }

    //asil diziler degismesin diye dizilerin atandigi tutma dizileri.
    for(i=0;i<s;i++){
        yarismaciNumTut[i]=dizi[i];
        kocPuaniTut[i]=dizi1[i];
    }

    //Siralama icin kabarcik siralama kullanildi.
    for(sayac1=0;sayac1<s;sayac1++){
        for(sayac2=sayac1+1;sayac2<s+1;sayac2++){
            if (kocPuaniTut[sayac1]<kocPuaniTut[sayac2]){
                ara1=kocPuaniTut[sayac1];
                kocPuaniTut[sayac1]=kocPuaniTut[sayac2];
                kocPuaniTut[sayac2]=ara1;
                ara2=yarismaciNumTut[sayac1];
                yarismaciNumTut[sayac1]=yarismaciNumTut[sayac2];
                yarismaciNumTut[sayac2]=ara2;
            }
        }
    }

    //Yazdirma islemleri yapiliyor.
    printf("Sadece koclarin puanlamasina gore genel durum:\n");
    printf("%s%14s%21s\n","Sira No","Yarismaci No","Puan");
    for(i=0;i<s;i++){
        printf("%5d%13d%20d\n",i+1,yarismaciNumTut[i],kocPuaniTut[i]);
    }
}


//Sadece seyircilerin puanlamasi dikkate alindigina genel durumun listelenmesini saglayan fonksiyon.
//yarismaciNum,seyirciPuan,yarismaciSayisi ni aliyor.
void case22(int dizi[],int dizi1[],int s){

    //yerel degiskenler.
    int ara1=0,ara2=0,sayac1,sayac2,i,yarismaciNumTut1[20],seyirciPuaniTut[20];

    //yerel diziler.
    yarismaciNumTut1[s];
    seyirciPuaniTut[s];

    for(i=0;i<s;i++){
        yarismaciNumTut1[i]=0;
        seyirciPuaniTut[i]=0;
    }

    //Asil diziler degismesin diye verileri tutmak icin kullanilan diziler.
    for(i=0;i<s;i++){
        yarismaciNumTut1[i]=dizi[i];
        seyirciPuaniTut[i]=dizi1[i];
    }

    //Siralama icin kabarcik siralama.
    for(sayac1=0;sayac1<s;sayac1++){
        for(sayac2=sayac1+1;sayac2<s+1;sayac2++){
            if (seyirciPuaniTut[sayac1]<seyirciPuaniTut[sayac2]){
                ara1=seyirciPuaniTut[sayac1];
                seyirciPuaniTut[sayac1]=seyirciPuaniTut[sayac2];
                seyirciPuaniTut[sayac2]=ara1;
                ara2=yarismaciNumTut1[sayac1];
                yarismaciNumTut1[sayac1]=yarismaciNumTut1[sayac2];
                yarismaciNumTut1[sayac2]=ara2;
            }
        }
    }

    //Uygun yazdirmalar.
    printf("Sadece seyircilerin puanlamasina gore genel durum:\n");
    printf("%s%14s%21s\n","Sira No","Yarismaci No","Puan");
    for(i=0;i<s;i++){
        printf("%5d%13d%20d\n",i+1,yarismaciNumTut1[i],seyirciPuaniTut[i]);
    }
}


void sirala1(int A2[],int B2[],int C2[],int D2[],int s)
{
    int ara1,ara2,ara3,ara4,sayac1,sayac2;


    for(sayac1=0;sayac1<s-1;sayac1++){
        for(sayac2=sayac1+1;sayac2<s;sayac2++){
            if (D2[sayac1]<D2[sayac2]) { ara1=B2[sayac1];
                                   B2[sayac1]=B2[sayac2];
								   B2[sayac2]=ara1;
								   ara2=A2[sayac1];
								   A2[sayac1]=A2[sayac2];
								   A2[sayac2]=ara2;
								   ara3=C2[sayac1];
								   C2[sayac1]=C2[sayac2];
								   C2[sayac2]=ara3;
								   ara4=D2[sayac1];
								   D2[sayac1]=D2[sayac2];
								   D2[sayac2]=ara4;
            }
        }
    }
    for(sayac1=0;sayac1<s;sayac1++)
    printf("%d%7d%15d%23d%28d\n",sayac1+1,A2[sayac1],B2[sayac1],C2[sayac1],D2[sayac1]);

}

//Yarismacilarin her hafta aldiklari toplam puanlari yazdiran fonksiyon.
//yarismaciTutanHaftalikTopPuan,frekansBirinci,yarismaciSayisi,haftaSayisi ni aliyor.
void case23(int dizi[][20],int dizi1[],int s,int p){
    int i,j,k;
    printf("Yarismacilarin her hafta aldiklari toplam puanlar;\n");
    printf("yarismaci no   ");
    for(i=0;i<s;i++){
        if(i==0){
            for(k=0;k<p;k++){
                printf("hafta%d   ",k+1);
            }
            printf("1.lik sayisi");
        }
        printf("\n%d  ",i+1);
        for(j=0;j<s;j++){

                printf("   %d   ",dizi[j][i]);

        }

        printf("   %d   \n",dizi1[i]);

    }
}

//Yarismacilarin her koctan aldiklari toplam puanlari yazdiran fonksiyon.
//yarismaciTutanHaftalikKocPuan,yarismaciSayisi ni aliyor.
void case24(int dizi[][20],int s){
    int i,j,k;
     printf("Yarismacilarin her koctan aldiklari toplam puanlar;\n");
    printf("yarismaci no   ");
    for(i=0;i<s;i++){
        if(i==0){
            for(k=0;k<s;k++){
                printf("koc%d   ",k+1);
            }
        }
        printf("\n%d  ",i+1);
        for(j=0;j<s;j++){
            printf("     %d     ",dizi[j][i]);
        }
    printf("\n");
    }

}
