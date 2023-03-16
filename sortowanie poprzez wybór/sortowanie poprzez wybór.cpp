// sortowanie poprzez wybór.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array_size;
    double value;
    int choice = 0;

    cout << "Podaj wielosc tablicy: ";
    cin >> array_size;
    vector <double> arr;
    vector <double> help_array;
    arr.reserve(array_size);
    help_array.reserve(array_size);
    for(int i=0;i<array_size;i++){
        value = 0;
        cout << "Podaj " << i+1 << " wartosc:";
        cin >> value;
        arr.push_back(value);
    }
    cout << "Twoja tablica:" << endl;
    cout << "[";
    for (int i = 0; i < array_size; i++) {
        cout << arr[i];
        if(i<array_size-1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
    // Sortowanie-----------------------------------------------
    cout << endl << "1. Sortuj malejaco" << endl << "2. Sortuj rosnaco(nie dziala)" << endl;
    cin >> choice;
    cout << endl;
    // Sortowanie malejaco
    double highest;
    int highest_index;
    for (int i = 0; i < array_size; i++) {
        highest = arr[0];
        highest_index = 0;
        for (int j = 0; j < array_size; j++) {
            if (highest < arr[j]) {
                highest = arr[j];
                highest_index = j;
            }
        }
        help_array[i] = arr[highest_index];
        arr.erase(arr.begin() + highest_index);
    }

    //----------------------------------------------------------



    // Koniec sortowania----------------------------------------
    cout << "Twoja tablica po posortowaniu:" << endl;
    cout << "[";
    for(int i = 0; i < array_size; i++) {
        cout << help_array[i];
        if (i < array_size - 1) {
            cout << ", ";
        }
    }
    cout << "]";

    arr.clear();
    help_array.clear();
    //{}
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
