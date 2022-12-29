#include <iostream>
#include "room.h"

int main(){
    room currentRoom = room("First Room");
    // std::cout << myRoom.get_room_name() << std::endl;
    currentRoom.add_north_room();
    // std::cout << myRoom.get_north_room() << std::endl;
    // std::cout << myRoom.get_east_room() << std::endl;
    currentRoom = *currentRoom.get_north_room();

    std::cout << currentRoom.get_room_name() << std::endl;

    return 0;
}