#include "flavor.h"

using namespace std;

string verbs(int verb) {
    switch (verb) {
        case 1:  return " whacked ";
        case 2:  return " bludgeoned ";
        case 3:  return " smashed ";
        case 4:  return " pelted ";
        case 5:  return " smacked ";
        case 6:  return " mauled ";
        case 7:  return " cleaved ";
        case 8:  return " smacked ";
        case 9:  return " clobbered ";
        case 10: return " stabbed ";
        case 11: return " impaled ";
        case 12: return " mangled ";
        default: return "";
    }
}

string anatomy(int part) {
    switch (part) {
        case 1:  return " CLAVICLE";
        case 2:  return " KIDNEY";
        case 3:  return " EYEBALL";
        case 4:  return " MEDULLA OBLONGATA";
        case 5:  return " PANCREAS";
        case 6:  return " LIVER";
        case 7:  return " LUNG";
        case 8:  return " LUMBAR SPINE";
        case 9:  return " FEMORAL ARTERY";
        case 10: return " TRACHEA";
        case 11: return " TRAPEZIUS";
        case 12: return " LARGE INTESTINE";
        case 13: return " AORTA";
        case 14: return " LEFT VENTRICLE";
        case 15: return " BUTT";
        case 16: return " STERNUM";
        default: return "";
    }
}