// sortowanie poprzez wybór.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int array_size;
    double value;
    int choice = 0;

    cout << "Podaj wielosc tablicy: ";
    cin >> array_size;
    double* arr = new double[array_size];
    double* help_array = new double[array_size];
    for(int i=0;i<array_size;i++){
        value = 0;
        cout << "Podaj " << i+1 << " wartosc:";
        cin >> value;
        arr[i] = value;
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
    if(choice==1){
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
            arr[highest_index] = 0;
        }
    }
    // Sortowanie rosnaco
    else if(choice==2){
        double lowest;
        int lowest_index;
        for (int i = 0; i < array_size; i++) {
            lowest = arr[0];
            lowest_index = 0;
            for (int j = 0; j < array_size; j++) {
                if (lowest > arr[j]) {
                    lowest = arr[j];
                    lowest_index = j;
                }
            }
            help_array[i] = arr[lowest_index];
            // pytanie jak usunac element z tablicy
        }
    }
    //----------------------------------------------------------
    else{
        cout << "Podano zla wartosc";
        return 0;
    }



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

    delete[] arr;
    delete[] help_array;
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
