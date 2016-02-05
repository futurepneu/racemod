# racemod
Source modification of the "warsow_201_sdk". - Trying to add as many racesow features as possible.

# Changelog:
## 05.02.2016:

cg_main.cpp
 * Allow cg_thirdPerson 1

gs_public.h
 * fix: set "DEFAULT_DASHSPEED" to 451 as it was in racesow 1.5

g_clip.cpp
 * Added racesow fix for some NULL model error

g_local.h
 * Added racesow fix: fix maps with many models: allows for 50 non-inlane models to load

g_target.cpp
 * Added racesow fix for target_speaker (activator)

g_trigger.cpp
 * Added racesow fix for triggers (activator)

g_clip.cpp, cg_predict.cpp, cg_local.h, g_local.h, gs_misc.c, gs_pmove.c, gs_public.h
 * Added racesow flavored G_PMoveTouchTriggers


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

g_items.cpp
 * Added racesow specific hack to avoid trigger spamming on certain maps
 * Disabled item timers (racesow default)

cg_screen.cpp
 * Changed cg_crosshair and cg_crosshair_size to racesow default values
 * Changed cg_showPressedKeys to racesow default value
 * Changed cg_scoreboardWidthScale to racesow default value

cg_ents.cpp
 * Added another racesow fix concerning raceGhosts

cg_hud.cpp
 * Added racesow fix to round speed better


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
