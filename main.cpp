#include "game.hpp"


using std::string;
using std::cout, std::cin, std::endl;


void input(int &n, int &k, bool &inp) {
    do {
        cout << "Enter the number of players:\n>";
        cin >> n;
    } while (n <= 4);

    do {
        cout << "Enter the parameter 'k':\n>";
        cin >> k;
    } while (k > n && k < 3);

    string in;
    do {
        cout << "Do u wanna be a player[spectator] (y[n]):";
        cin >> in;
    } while (in != "y" && in != "n");

    inp = in == "y";
}


int main() {
    int n, k;
    bool inp;

    input(n, k, inp);

    Game game(n, k, inp);
    game.play();

    return 0;
}