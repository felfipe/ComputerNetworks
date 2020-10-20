#include "headers/Client.hpp"
#include "headers/Globals.hpp"
#include "headers/Player.hpp"

vector<Player> playerList;

int selectChampion() {
    cout << "|----------------------------------|" << endl;
    cout << "|   | NAME   | TYPE                |" << endl;
    cout << "|---|--------|---------------------|" << endl;
    cout << "| 0 | Garen  | Tank                |" << endl;
    cout << "| 1 | Darius | Bruiser             |" << endl;
    cout << "| 2 | Lulu   | Support             |" << endl;
    cout << "| 3 | Ryze   | Control Mage        |" << endl;
    cout << "| 4 | Ashe   | Attack Damage Carry |" << endl;
    cout << "| 5 | Talon  | Assassin            |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "| Select your Champion: ";
    int champ;
    cin >> champ;
    cout << "|----------------------------------|" << endl;
    return champ;
}

int selectItem() {
    cout << "|---------------------------|-----------------|" << endl;
    cout << "|    | NAME                 | DESCRIPTION (?) |" << endl;
    cout << "|----|----------------------|-----------------|" << endl;
    cout << "|  0 | Infinity Edge        |                 |" << endl;
    cout << "|  1 | Rabbadons Death Cap  |                 |" << endl;
    cout << "|  2 | Thornmail            |                 |" << endl;
    cout << "|  3 | Spirity Visage       |                 |" << endl;
    cout << "|  4 | Warmogs Armor        |                 |" << endl;
    cout << "|  5 | Seraph Embrace       |                 |" << endl;
    cout << "|  6 | Boots Swiftness      |                 |" << endl;
    cout << "|  7 | Blade of Ruined King |                 |" << endl;
    cout << "|  8 | Black Cleaver        |                 |" << endl;
    cout << "|  9 | Liandry Torment      |                 |" << endl;
    cout << "| 10 | Banshee Veil         |                 |" << endl;
    cout << "| 11 | Runaans Hurricane    |                 |" << endl;
    cout << "| 12 | Trinity Force        |                 |" << endl;
    cout << "| 13 | Redemption           |                 |" << endl;
    cout << "|---------------------------|-----------------|" << endl;
    cout << "| Select your Item: ";
    int item;
    cin >> item;
    cout << "|---------------------------|-----------------|" << endl;
    return item;
    return 0;
}

void makePlay() {
    cout << "|-------------------------------------|" << endl;
    cout << "|    | ACTION       | DESCRIPTION (?) |" << endl;
    cout << "|----|--------------|-----------------|" << endl;
    cout << "|  0 | Spell Q      |                 |" << endl;
    cout << "|  1 | Spell W      |                 |" << endl;
    cout << "|  2 | Spell E      |                 |" << endl;
    cout << "|  3 | Spell R      |                 |" << endl;
    cout << "|  4 | Basic Attack |                 |" << endl;
    cout << "|  5 | Skip         |                 |" << endl;
    cout << "|-------------------|-----------------|" << endl;
    cout << "| Select your Action: ";
    cout << "|-------------------------------------|" << endl;

    int action;
    cin >> action;
}

int main() {
    cout << "O JOGO v1.0" << endl;

    char nickname[MAX_NICKNAME];
    int championId;
    vector<int> items;

    cout << "Enter your nickname: ";
    cin >> nickname;
    cout << endl;

    do {
        championId = selectChampion();
        cout << endl;
    } while (championId < 0 || championId > 5);

    while (items.size() < MAX_ITEMS) {
        int item;
        do {
            item = selectItem();
            cout << endl;
        } while (item < 0 || item > 14);
        items.push_back(item);
    }

    Client* client = new Client("127.0.0.1", 8888);
    int* arrItem = (int*)malloc(items.size() * sizeof(int));
    for (int i = 0; i < items.size(); i++) {
        arrItem[i] = items[i];
    }

    client->setUpClient(nickname, championId, arrItem);

    return 0;
}