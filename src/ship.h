#ifndef _SHIP_H
#define _SHIP_H

#include "./vector.h"

typedef struct Ship {
    // The position of the ship
    Vector position;
    // The velocity of the ship
    Vector velocity;
    // The angle the ship is pointing in radians
    float angle;
} Ship;

// Creates a new ship with the given position and velocity
Ship new_ship(Vector, Vector);

#endif