#include <iostream>
#include <cmath>

using namespace std;

int main(){
	bool idx3 = true;
	
	while (idx3){
		bool idx1 = false , idx2 = true;
		string pilih;
		char luas,volum,loop1;
		double nluas,nvolum, phi = 3.14;


		cout <<"==============Tabel Penghitung Luas dan Vollume=============="<< endl;
		cout <<"Pilihan :"<< endl;
		cout <<"1. Kubus "<< endl;
		cout <<"2. Balok \n";
		cout <<"3. Limas_Segiempat \n";
		cout <<"4. Limas_Segitiga \n";
		cout <<"5. Prisma_Segitiga \n";
		cout <<"6. Tabung \n";
		cout <<"7. Kerucut \n";
		cout <<"8. Bola \n";
		cout <<"Masukkan Pilihan : "; cin >> pilih;
		cout <<"============================================================="<<endl;
		cout <<"Apakah Anda ingin mencari Volume (y/n) : "; cin >> volum;
		cout <<"Apakah Anda ingin mencari Luas   (y/n) : "; cin >> luas;
	
		for (int i=0 ; pilih[i]!= '\0';i++){
			if (pilih[i]<='Z' and pilih [i]>= 'A')
				pilih[i]=pilih[i]-'A'+'a';
		}
	
		cout <<"============================================================="<<endl;
		if (pilih == "kubus"){
			double sisi;
			cout <<"Masukkan Panjang Sisi (Meter) : "; cin >> sisi;	
			
			nvolum = pow (sisi,3);	
			nluas = pow (sisi,2) * 6;
			idx1 = !idx1;
		}		
	
	
		else if (pilih == "balok"){
			double pj,lb,tg;
			cout <<"Masukkan Panjang Balok (Meter) : "; cin >> pj;
			cout <<"Masukkan Lebar Balok   (Meter) : "; cin >> lb;
			cout <<"Masukkan Tinggi Balok  (Meter) : "; cin >> tg;
			
			nvolum = pj*lb*tg;	
			nluas = (pj*lb+lb*tg+tg*pj)*2 ;
			idx1 = !idx1;		
		}
			
		else if (pilih == "limas_segiempat"){
			double pj,lb,tg;
			cout <<"Masukkan Panjang Alas  (Meter) : "; cin >> pj;
			cout <<"Masukkan Lebar Alas    (Meter) : "; cin >> lb;
			cout <<"Masukkan Tinggi Limas  (Meter) : "; cin >> tg;
			
			nvolum = pj*lb*tg/3;
			nluas =  pow (pow(tg,2)+pow(pj/2,2),0.5) * lb + pow (pow(tg,2)+pow(lb/2,2),0.5) * pj + pj*lb ;
			idx1 = !idx1;
		}
		
	

	
		else if (pilih == "limas_segitiga"){
			double s1,s2,tg;
			cout <<"Masukkan Panjang Sisi 1  (Meter) : "; cin >> s1;
			cout <<"Masukkan Panjang Sisi 2  (Meter) : "; cin >> s2;
			cout <<"Masukkan Tinggi Limas    (Meter) : "; cin >> tg;

			nvolum = s1 * s2 * tg /6 ;
			nluas  = s1 * s2 / 2 + s1 * tg /2 + s2 * tg/2 + pow (pow(s1,2) + pow (s2,2),0.5) * pow (pow (pow (pow(s1,2) + pow (s2,2),0.5) / s1 / s2,2) + pow (tg,2),0.5)/2;
			idx1 = !idx1;
		}
		
		else if (pilih == "prisma_segitiga"){
			char ket;
			cout <<"Apakah Alas Berbentuk Segitiga Siku Siku (y/n) : "; cin >> ket;
			if (ket == 'y' or ket == 'Y'){
				double a,t,tg;
				cout <<"Masukkan Alas Segitiga  (Meter) : "; cin >> a;
				cout <<"Masukkan Tinggi Alas    (Meter) : "; cin >> t;
				cout <<"Masukkan Tinggi Prisma  (Meter) : "; cin >> tg;	
				
				nvolum = a*t*tg/2;
				nluas = a*t + tg * (a + t + pow (pow (a,2) + pow (t,2) ,0.5));
			}
			 
			else {
				double s1,s2,s3,s,tg;
				cout <<"Masukkan Panjang Sisi 1  (Meter) : "; cin >> s1;
				cout <<"Masukkan Panjang Sisi 2  (Meter) : "; cin >> s2;
				cout <<"Masukkan Panjang Sisi 3  (Meter) : "; cin >> s3;
				cout <<"Masukkan Tinggi Prisma   (Meter) : "; cin >> tg;

				s=(s1+s2+s3)/2;
				nvolum = pow(s * (s-s1) * (s-s2) * (s-s3),0.5) * tg ;
				nluas = pow(s * (s-s1) * (s-s2) * (s-s3),0.5)*2 + tg * (s1+s2+s3);
			}
				idx1 = !idx1;
		}
	
		else if (pilih == "tabung"){
			double r, tg;
			cout <<"Masukkan Jari Jari        (Meter) : "; cin >> r;
			cout <<"Masukkan Tinggi Tabung    (Meter) : "; cin >> tg;

			nvolum = phi * pow (r,2) * tg;
			nluas = 2 * phi * r * tg  + 2 * phi * pow(r,2); 
			idx1 = !idx1;
		}
	
	
		else if (pilih == "Kerucut"){
			double r,tg;
			cout <<"Masukkan Jari Jari Alas    (Meter) : "; cin >> r;
			cout <<"Masukkan Tinggi Kerucut    (Meter) : "; cin >> tg;

			nvolum =  phi * pow (r,2) * tg /3 ;
			nluas = phi * r * ( r + pow ( pow (r,2) + pow (tg,2) ,0.5)) ;
			idx1 = !idx1;
		}

		else if (pilih == "bola"){
			double r;
			cout <<"Masukkan Jari Jari (Meter) : "; cin >> r;	
		
			nvolum = phi * pow (r,3) * 4/3;	
			nluas = 4 * phi * pow (r,2);
			idx1 = !idx1;
		}	
		
		else {
			cout << "Input Salah";
		}
		
		cout <<"============================================================="<<endl;
		
		if (idx1){
		
			if (volum== 'y' or volum == 'Y') {
				cout << "Vollume " << pilih <<" adalah "<< nvolum << " meter kubik" <<endl; 
				idx2 = false;
			}
		
			if (luas == 'y' or luas == 'Y'){		
				cout << "Luas " << pilih <<" adalah " << nluas << " meter kuadrat" << endl;
				idx2 = false;
			}
		}
	
		if (idx2) {
			cout << "Tidak ada yang dihitung"<<endl;
		}
	
		cout <<"============================================================="<<endl;
		cout <<"Apakah anda ingin menghitung bangun ruang yang lain (y/n) : "; cin >> loop1;
	
		if (loop1 != 'Y' and loop1 !='y') idx3 = !idx3;
		system ("cls");
	}
	
	return 0;
}
