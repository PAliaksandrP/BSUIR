#include"play_room.h"

Play_room::Play_room(bool poor, int capacity, Hotel hotel,vector<string> games):Room(poor,capacity,hotel) {
    //Room(poor, capacity, hotel);
    this->games_ = games;
}

string Play_room::play_game() {
    string name_game;
    cout << "input game name";
    cin >> name_game;
    for (int i = 0; i < games.size(); i++) {
        if (name_game == games[i]) {
            return name_game;
        }
    }
    return "game empty";
}
bool Play_room::add_game(string game) {
    // string name_game;
    // cout<<"input name game:"
    // cin>>
    games.push_back(game);
    return true;
}
bool Play_room::delete_game(string game) {
    for (int i = 0; i < games.size(); i++) {
        if (game == games[i]) {
            games.erase(games.begin()+i);
            return true;
        }
    }
    return false;
}