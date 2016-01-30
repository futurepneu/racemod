# racemod
Source modification of the "warsow_201_sdk". - Trying to add as many racesow features as possible.

# Changelog:
## 30.01.2016:

gs_public.h
 * EDIT: fix: set back "DEFAULT_DASHSPEED" to racesow default value (450) according to ale

gs_pmove.c
 * fix: maximum specfly speed set to racesow default (10000)
 * fix: Added racesow specific specfly behavior (Acceleration...)

g_spawn.cpp, g_local.h, g_trigger.cpp
 * Added racesow support for target_push

g_weapon.cpp
 * Added racesow specific hack for plasma shooters which shoot on buttons with SURF_NOIMPACT

gs_qrespath.h
 * Sound for pickup megahealth changed to "sounds/items/health_25" (racesow default)
 * Sound for FALLDEATH changed to "*death" (racesow default)

g_awards.cpp
 * Disabling item timing awards like racesow did

cg_scoreboard.cpp
 * Changed String "challengers" to "spectating you" (racesow default)

g_pmodels.cpp
 * Don't show HeadIcon when raceGhosts is enabled (racesow default)

cg_lents.cpp
 * Make raceGhosts affect ProjectileFireTrail and ProjectileTrail (racesow default)



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
