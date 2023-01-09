#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
   // Pobierz dat� od u�ytkownika
   cout << "Wprowadz date (YYYY-MM-DD): ";
   string data;
   getline(cin, data);

   // Utw�rz wyra�enie regularne do sprawdzenia poprawno�ci daty
   regex dateRegex("^[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1])$");

   // Sprawd�, czy data jest poprawna
   if (regex_match(data, dateRegex)) {
      cout << "Data jest poprawna." << endl;
   } else {
      cout << "Data jest niepoprawna." << endl;
   }

   return 0;
}
