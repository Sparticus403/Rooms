#ifndef ROOM_H
#define ROOM_H

#include <string>

class room {
private:
    room* north_room;
    room* south_room;
    room* east_room;
    room* west_room;

    std::string room_name;

public:
    room();
    room(std::string room_name);

    // getters
    room* get_north_room();
    room* get_south_room();
    room* get_east_room();
    room* get_west_room();
    std::string get_room_name();

    // setters
    void set_north_room(room* n);
    void set_south_room(room* s);
    void set_east_room(room* e);
    void set_west_room(room* w);
    void set_room_name(std::string name);

    // additional methods
    void add_north_room();
    void add_south_room();
    void add_east_room();
    void add_west_room();
};

#endif