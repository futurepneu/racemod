# racemod
Source modification of the "warsow_201_sdk". - Trying to add as many racesow features as possible.

# Changelog:
## 30.01.2016:

gs_public.h
 * fix: set "DEFAULT_DASHSPEED" to racesow default value (475)

gs_pmove.c
 * fix: maximum specfly speed set to racesow default (10000)
 * fix: Added racesow specific specfly behavior (Acceleration...)

## 29.01.2016:

g_func.cpp
 * defrag support: do not trigger if the door was killed
 * fix: "doorbuttons" trigger targets without opening
 * fix: wait key on buttons: use -1 to reset immediately
 * fix: all buttons without health should be touchable regardless of targetname

g_weapon.cpp
 * fix: make grenades explode on doors and buttons
 * fix: changed grenade angle to racesow default value
 * fix: changed grenade bounce count to racesow default value