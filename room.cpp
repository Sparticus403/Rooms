#include "room.h"

room::room(){
    north_room = nullptr;
    south_room = nullptr;
    east_room = nullptr;
    west_room = nullptr;
    room_name = "empty name";
}
room::room(std::string room_name){
    north_room = nullptr;
    south_room = nullptr;
    east_room = nullptr;
    west_room = nullptr;
    this->room_name = room_name;
}
std::string room::get_room_name(){
    return room_name;
}
room* room::get_north_room(){
    return north_room;
}
room* room::get_south_room(){
    return south_room;
}
room* room::get_east_room(){
    return east_room;
}
room* room::get_west_room(){
    return west_room;
}

void room::set_north_room(room *n){
    this->north_room = n;
}
void room::set_south_room(room *s){
    this->south_room = s;
}
void room::set_east_room(room *e){
    this->east_room = e;
}
void room::set_west_room(room *w){
    this->west_room = w;
}
void room::set_room_name(std::string name){
    this->room_name = name;
}

void room::add_north_room(){
    this->north_room = new room;
    north_room->south_room = this;
}
void room::add_south_room(){
    this->south_room = new room;
    south_room->north_room = this;
}
void room::add_east_room(){
    this->east_room = new room;
    east_room->west_room = this;
}
void room::add_west_room(){
    this->west_room = new room;
    west_room->east_room = this;
}