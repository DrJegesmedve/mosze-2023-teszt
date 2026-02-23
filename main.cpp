#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Hiányzó aláhúzás (_) karakter
    std::cout << '1-100 ertekek duplazasa' // String adattípust dupla " jellel kell jelölni. Lemaradt a pontosvessző az utasítás végéről.
                                           // Kellene egy sortörés a végére.
    for (int i = 0;) // Hiányzik a for ciklusból a korlát és a növekmény beállítása
    {
        b[i] = i * 2; // Hibás logika 0-tól induló ciklus miatt. Helyesen: b[i] = (i + 1) * 2; Ha i < N_ELEMENTS a ciklusban.
    }
    for (int i = 0; i; i++) // Hibás korlát
    {
        std::cout << "Ertek:" // Nem szerepel kiírandó érték.
                              // Minden iterációban kiírja a az "Ertek:"-et. Jobb volna egyszer kiírni, majd vesszővel elválasztani a számokat.
                              // Hiányzó pontosvessző az utasítás végén.
    }    
    std::cout << "Atlag szamitasa: " << std::endl; // Ez a sor felesleges, mivel maga a számítás folyamata nem kerül megjelenítésre.
    int atlag; // Az átlag nem helyes integer adattípusként, float vagy inkább double kellene.
               // Félrevezető elnevezés: Nem az átlag maga, hanem csupán tömb elemeinek összege.
               // Inicializálni kell 0-val, hogy ne egy memóriaszeméthez adjuk houzá az értékeket.
    for (int i = 0; i < N_ELEMENTS, i++) // Vessző szerepel pontosvessző helyett a ciklusban.
    {
        atlag += b[i] // Hiányzó pontosvessző az utasítás végén.
    }
    atlag /= N_ELEMENTS; // Hibás logika
    std::cout << "Atlag: " << atlag << std::endl;
    // Mivel a program elején dinamikusan foglaltunk memóriát, ezt a program vége előtt fel kell szabadítani a memóraszivárgás elkerüléséhez!
    return 0;
}
