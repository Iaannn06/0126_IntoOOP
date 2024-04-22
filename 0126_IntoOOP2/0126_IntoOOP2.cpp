using namespace std;
#include <iostream>

class bangundatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << "Masukkan Panjangnya: ";
		cin >> panjang;
		cout << "Masukkan lebarnya: ";
		cin >> lebar;
	}
	float hitungluas() {
		return panjang * lebar;
	}

	void display() {
		cout << "Panjangnya= " << panjang << endl;
		cout << "Lebarnya= " << lebar << endl;
		cout << "Luasnya= " << hitungluas << endl;
	}
};

int main() {
	bangundatar pp;
}