#include <iostream>
#include "room.h"

int main(){
    room myRoom = room("First Room");
    // std::cout << myRoom.get_room_name() << std::endl;
    myRoom.add_north_room();
    std::cout << myRoom.get_north_room() << std::endl;
    std::cout << myRoom.get_east_room() << std::endl;
    return 0;
}