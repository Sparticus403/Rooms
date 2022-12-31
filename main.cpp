#include <iostream>
#include <vector>
#include "room.h"

int main(){
    room currentRoom = room("The Forest");
    currentRoom.set_room_desc("Thre are trees everywhere, and no one in sight.");
    // std::cout << myRoom.get_room_name() << std::endl;
    currentRoom.add_north_room();
    // std::cout << myRoom.get_north_room() << std::endl;
    // std::cout << myRoom.get_east_room() << std::endl;
    currentRoom = *currentRoom.get_north_room();

    std::cout << currentRoom.get_room_name() << std::endl;

    return 0;
}