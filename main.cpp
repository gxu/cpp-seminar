#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
  string title;
  string director;
  unsigned year;
  string language;
  unsigned duration;

  Movie();
  Movie(string title, string director, unsigned year, string language, unsigned duration) :
    title(title), director(director), year(year), language(language), duration(duration) {}
};

int main() {
  Movie m("The Girl With the Dragon Tattoo", "", 2009, "Swedish", 100);
  cout
      << "Unesi ime filma, redatelja, godinu, trajanje (min) i jezik "
      << "(npr. 'Nemilosrdni gadovi, Quentin Tarantino, 2009, 153, EN'):"
      << endl;
}
