#include "Play_room.h"

Play_room::Play_room(bool poor, int capacity,  vector<string> games) :Room(poor, capacity) {
    //Room(poor, capacity, hotel);
    this->games_ = games;
}

Play_room::Play_room()
{
}

Play_room& Play_room::operator=(Play_room& other)
{
    this->capacity_ = other.capacity_;
    this->games_ = other.games_;
    this->poor_ = other.poor_;
    return *this;
}

bool Play_room::play_game(string game) {
   /* string name_game;
    cout << "input game name";
    cin >> name_game;*/
    for (int i = 0; i < games_.size(); i++) {
        if (game == games_[i]) {
            return true;
        }
    }
    return false;
}
vector<string> Play_room::get_games()
{
    return games_;
}
bool Play_room::add_game(string game) {
    // string name_game;
    // cout<<"input name game:"
    // cin>>
    games_.push_back(game);
    return true;
}
bool Play_room::delete_game(string game) {
    for (int i = 0; i < games_.size(); i++) {
        if (game == games_[i]) {
            games_.erase(games_.begin() + i);
            return true;
        }
    }
    return false;
}