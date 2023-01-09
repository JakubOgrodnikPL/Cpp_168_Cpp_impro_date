#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
   // Pobierz datê od u¿ytkownika
   cout << "Wprowadz date (YYYY-MM-DD): ";
   string data;
   getline(cin, data);

   // Utwórz wyra¿enie regularne do sprawdzenia poprawnoœci daty
   regex dateRegex("^[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[1-2][0-9]|3[0-1])$");

   // SprawdŸ, czy data jest poprawna
   if (regex_match(data, dateRegex)) {
      cout << "Data jest poprawna." << endl;
   } else {
      cout << "Data jest niepoprawna." << endl;
   }

   return 0;
}
