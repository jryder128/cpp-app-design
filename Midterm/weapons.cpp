#include "weapons.h"

using namespace std;

string armory(int wep) {
    switch (wep) {
        case 1:  return "a giant battle AXE";
        case 2:  return "a KATANA";
        case 3:  return "a FORK";
        case 4:  return "a comically large HAMMER";
        case 5:  return "a rubber DUCKY";
        case 6:  return "a simple kitchen KNIFE";
        case 7:  return "a spiked MACE";
        case 8:  return "a SPEAR";
        case 9:  return "a ZWEIHANDER";
        case 10: return "a walrus's TOOTH";
        case 11: return "a piece of BOLOGNA";
        case 12: return "a pink LIGHT SABER";
        case 13: return "the HOLY GRAIL";
        case 14: return "a CHAINSAW";
        case 15: return "a live SQUID";
        case 16: return "a GLADIUS";
        case 17: return "a pair of polka-dotted UNDERWEAR ";
        case 18: return "a BRICK";
        case 19: return "a trash can LID";
        case 20: return "a pointy STICK";
        default: return "nothing";
    }
}

int damage(int wep) {
    switch (wep) {
        case 1:  return 10;
        case 2:  return 6;
        case 3:  return 2;
        case 4:  return 9;
        case 5:  return 1;
        case 6:  return 4;
        case 7:  return 5;
        case 8:  return 6;
        case 9:  return 7;
        case 10: return 3;
        case 11: return 1;
        case 12: return 11;
        case 13: return 5;
        case 14: return 12;
        case 15: return 4;
        case 16: return 3;
        case 17: return 2;
        case 18: return 6;
        case 19: return 2;
        case 20: return 7;
        default: return 0;
    }
}
