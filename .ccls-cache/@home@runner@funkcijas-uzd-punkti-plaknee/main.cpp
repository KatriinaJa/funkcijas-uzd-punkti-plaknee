#include <iostream>
using namespace std;

/*
Uzdevums
Programma ģenerē K (2<=K<=50) nejaušu punktu koordinātes plaknē un saglabā tās
masīvā. Programma nodrošina, ka punkti tiks ģenerēti koordinātu plaknei robežās
(no -50 līdz 50) gan pa X, gan Y asīm. K – ievada lietotājs, bet programma
pārbauda vai ievadītais skaitlis ir nepieciešamajā intervālā. Savienojot iegūtos
punktus veidojas lauzta līnija. Aprēķināt un izvadīt uz ekrāna un failā
rezult.txt: 1) punktu koordinātas piem. (4;-7),(-45;-22),(-9;0),(0;49), ... 2)
visu nogriežņu garumus, kas savieno šos punktus (nogriežņi veidojas savienojot
punktus tādā secībā kā tie tika ģenerēti, t.n. 1. punkts ar 2., 2. ar 3., 3.
ar 4. u.t.t. n-1. ar n.), 3) visgarākā un visīsākā nogriežņa garumu, 4) lauztās
līnijas kopējo garumu, 5) cik punkti atrodas uz X ass, cik - uz Y ass, cik
punktu ir katrā kvadrantā.
*/


void kpunkti(int k);



int main() {
 int k;

  while (k > 1 || k < 50);
  kpunkti(k); 

 
}

void kpunkti(int k) {
  cout << "Ievadi punktu skaitu K (2<=K<=50): " << endl;
  cin >> k;
  } 


/*

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}*/