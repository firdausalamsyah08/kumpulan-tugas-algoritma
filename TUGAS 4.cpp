#include <iostream>

using namespace std;

int main()
{
    int hero,darah,damage,senjata,aksi,darahmonster,dmgmonster;
    string namahero,namasenjata,monster,hasilserang,hasilserangmonster;
    
    cout << "GAME MONSTER LORD" << endl;
    cout << "=================" << endl;
    cout << "=============" << endl;
    cout << "|Daftar Hero|" << endl;
    cout << "|===========|" << endl;
    cout << "|1.Udin     |" << endl;
    cout << "|2.Komeng   |" << endl;
    cout << "|3.Bewok    |" << endl;
    cout << "=============" << endl << endl;
    cout << "Masukan Pilihan Anda : ";
    cin  >> hero;
    
    if ( hero == 1){
        namahero = "Udin";
        darah = 100;
        damage = 10;
    }
    
    else if ( hero == 2){
        namahero = "Komeng";
        darah = 100;
        damage = 10;
    }
    
    else if ( hero == 3){
        namahero = "Bewok";
        darah = 100;
        damage = 10;
    }
    
    else {
        cout << "Pilihan tidak valid";
        return 1;
        
    }
    
    
    cout << "================" << endl;
    cout << "|Daftar senjata|" << endl;
    cout << "|1.pistol      |" << endl;
    cout << "|2.panah       |" << endl;
    cout << "|3.tombak      |" << endl;
    cout << "|===============" << endl << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> senjata;
    
    if ( senjata == 1) {
        namasenjata = "pistol";
        damage += 10;
    }
    else if ( senjata == 2 ){
        namasenjata = "panah";
        damage += 5;
    }
     else if ( senjata == 3 ){
        namasenjata = "tombak";
        damage += 10;
     }
     
     //Monster//
     monster = "Lord";
     dmgmonster = 20;
     darahmonster = 100;
    
    
    while (true){
    cout <<hasilserang << endl;    
    cout << hasilserangmonster << endl;
    cout << namahero << endl;
    cout << "Darah : " << darah << endl;
    cout << "Damage:"<< damage << endl;
    cout << "===========" <<endl;
    cout << "Darah Lord : " << darahmonster << endl;
    cout << "Damage Lord: " << dmgmonster << endl;
    cout << "==========" <<endl;
    cout << "|pilihan |" << endl;
    cout << "|1.serang|" << endl;
    cout << "|2.regen |" << endl;
    cout << "==========" << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> aksi;
    
    if (aksi == 1){
        darahmonster -= damage;
        darah -= dmgmonster;
        hasilserang = "Anda menyerang monster  "  ;
        hasilserangmonster = "Monster menyerang balik "  ;
    }
    
    else if (aksi == 2){
        darah += 40;
        hasilserang = "Anda mengisi darah sebanyak 40 " ;
        hasilserangmonster = " ";
    }
    
    else {
        hasilserang = "Pilihan anda tidak valid!"; 
        return 1;
    }
    
    
    
    if (darahmonster <= 0) {
        cout << "Anda berhasil mengalahkan monster lord" ;
        return 0;
    }

    else if (darah <= 0) {
        cout << "Anda kalah! Monster Lord berhasil mengalahkan anda!" ;
        return 0;
    }
        
    
//while
    }
//while
    return 0;
}
