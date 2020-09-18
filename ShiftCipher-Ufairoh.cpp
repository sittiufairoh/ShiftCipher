/*
Nama	: Sitti Ufairoh Azzahra
NPM		: 140810180002
Deskripsi: membuat program shift Cipher
*/

#include <iostream> 
#include<math.h>
using namespace std; 
  
/***Shift Cipher***/
// fungsi Enkripsi Shift Cipher
string encrypt(string text, int s) 
{ 
    string result = ""; 
  
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // Enkripsi huruf besar
        if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
  
    // Enkripsi huruf kecil
    	else
        	result += char(int(text[i]+s-97)%26 +97); 
    } 
  
    // Return hasil dari string 
    return result; 
} 

// fungsi Dekripsi Shift Cipher
string decrypt(string text, int s) 
{ 
    string result = ""; 
  
    // traverse text 
    for (int j=0;j<text.length();j++) 
    { 
	//mendekripsi huruf besar 
        if (isupper(text[j])) 
            result += char(int(text[j]-s-65)%26 +65); 
  
    // mengdekripsi huruf kecil
    	else
        	result += char(int(text[j]-s-97)%26 +97); 
    } 
  
    // Return hasil dari string 
    return result; 
} 


//menu untuk shift cipher
void MenuShift(){
	string text;
	int s, menu1;
	cout << "\t==============================" << endl;
	cout << "\t=       SHIFT CIPHER         =" << endl;
	cout << "\t==============================" << endl;
	cout << "\t= 1. Enkripsi                =" << endl;
	cout << "\t= 2. Dekripsi                =" << endl;
	cout << "\t==============================" << endl;
	cout << "\tMasukkan pilihan anda : "; cin>>menu1;
				
	switch(menu1){
		case 1: 
			system("cls");
			cout << "Enkripsi Shift Cipher"<<endl;
			cout << "Masukkan Kalimat yang akan di enkripsi : "; cin>>text;
			cout << "Masukkan Key : " ; cin>>s;
			cout << "\nEnkripsi nya adalah : " << encrypt(text, s)<<endl; 
			system("pause");
		break;
		case 2:
			system("cls");
			cout << "Dekripsi Shift Cipher"<<endl;
			cout << "Masukkan Kalimat yang akan di deskripsi : "; cin>>text;
			cout << "Masukkan Key : " ; cin>>s;
			cout << "\nDekripsi nya adalah : " <<decrypt(text, s)<<endl; 
			system("pause");
		break;
		default :
			cout << "Maaf yang anda masukkan tidak ada!";
			break;
	}
}

//digunakan hanya untuk menu Shift Chiper
int main() 
{ 
    string text,key,k; 
    char text1[100];
    int s, menu;
	do{ 
		system ("cls");
		cout << "\t==============================" << endl;
		cout << "\t=           CIPHER           =" << endl;
		cout << "\t==============================" << endl;
		cout << "\t= 1. SHIFT                   =" << endl;
		cout << "\t= 2. EXIT                   =" << endl;
		cout << "\t==============================" << endl;
		cout << "\tMasukkan pilihan anda :  "; cin>>menu;
		switch(menu){
			case 1 :
				system("cls");
				MenuShift();
			break;
			case 2 :	
			break;
		}
	}while(menu!=4);
} 


