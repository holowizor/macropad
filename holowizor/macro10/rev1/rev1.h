#pragma once

#include "macro10.h"
#include "quantum.h"

#define LAYOUT( \
    KA1, KA2, KA3, KA4, \
    KB1, KB2, KB3, KB4, \
    KC1, KC2, KC3, KC4 \
) \
{ \
    { KA1, KA2, KA3, KA4 }, \
    { KB1, KB2, KB3, KB4 }, \
    { KB1, KB2, KB3, KC4 } \
}
