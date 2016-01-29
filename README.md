# racemod
Source modification of the "warsow_201_sdk". - Let's try to add as many racesow features as possible!

# Changelog:
29.01.2016:

g_func.cpp

 * defrag support: do not trigger if the door was killed
 * fix for "doorbuttons" trigger targets without opening
 * fix for wait key on buttons: use -1 to reset immediately
 * fix: all buttons without health should be touchable regardless of targetname

g_weapon.cpp
 * fix: make grenades explode on doors and buttons
 * fix: changed grenade angle to racesow default
 * fix: changed grenade bounce count to racesow default
