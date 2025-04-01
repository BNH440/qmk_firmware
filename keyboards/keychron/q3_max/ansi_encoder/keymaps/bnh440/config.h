#pragma once

// set caps lock light to be the "lock"/"siri" key, top right, left 1
#undef CAPS_LOCK_INDEX
#define CAPS_LOCK_INDEX 14 // indices defined in /keyboards/keychron/q3_max/ansi_encoder/ansi_encoder.c

// add a nice caps lock method for typing programming constants (enabled in rules.mk)
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

