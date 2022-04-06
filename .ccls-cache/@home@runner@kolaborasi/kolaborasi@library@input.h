using namespace std;

class Input{      

private:
ofstream tulis_data;
int jml_ayamGP,jml_ayamGR,jml_udangGR,jml_cumiGR,jml_ayamBK,jrk;

public:
void cetak(){
  cout<<"==============================="<<endl;
  cout<<"      Menu Makanan"<<endl;
  cout<<"==============================="<<endl;
  cout << " 1. Ayam Geprek  Rp. 21000"<<endl;
	cout << " 2. Ayam Goreng  Rp. 17000"<<endl;
	cout << " 3. Udang Goreng Rp. 19000"<<endl;
	cout << " 4. Cumi Goreng  Rp. 20000"<<endl;
	cout << " 5. Ayam Bakar   Rp. 25000"<<endl;
  cout<<"==============================="<<endl;
	cout << " Pesan Ayam Geprek = "; cin >> jml_ayamGP;
	cout << " Pesan Ayam Goreng = "; cin >> jml_ayamGR;
	cout << " Pesan Udang Goreng = "; cin >> jml_udangGR;
	cout << " Pesan Cumi Goreng = "; cin >> jml_cumiGR;
	cout << " Pesan Ayam Bakar = "; cin >> jml_ayamBK;
	cout << "Masukkan jarak rumah(KM) : "; cin >>jrk;
}
void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data<<jml_ayamGP<<endl;
  tulis_data<<jml_ayamGR<<endl;
  tulis_data<<jml_udangGR<<endl;
  tulis_data<<jml_cumiGR<<endl;
  tulis_data<<jml_ayamBK<<endl;
  tulis_data<<jrk;
  tulis_data.close();
}

};