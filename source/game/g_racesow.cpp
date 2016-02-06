#include "g_local.h"

cvar_t *rs_grenade_minKnockback;
cvar_t *rs_grenade_maxKnockback;
cvar_t *rs_grenade_splash;
cvar_t *rs_grenade_speed;
cvar_t *rs_grenade_timeout;
cvar_t *rs_grenade_gravity;
cvar_t *rs_grenade_friction;
cvar_t *rs_grenade_prestep;
cvar_t *rs_rocket_prestep;
cvar_t *rs_plasma_prestep;
cvar_t *rs_plasma_hack;

/**
 * RS_Init
 * Initializes the racesow specific variables
 */
void RS_Init( void )
{
	rs_grenade_minKnockback = trap_Cvar_Get( "rs_grenade_minKnockback", "1", CVAR_ARCHIVE );
	rs_grenade_maxKnockback = trap_Cvar_Get( "rs_grenade_maxKnockback", "120", CVAR_ARCHIVE );
	rs_grenade_splash = trap_Cvar_Get( "rs_grenade_splash", "170", CVAR_ARCHIVE );
	rs_grenade_speed = trap_Cvar_Get( "rs_grenade_speed", "800", CVAR_ARCHIVE );
	rs_grenade_timeout = trap_Cvar_Get( "rs_grenade_timeout", "1650", CVAR_ARCHIVE );
	rs_grenade_gravity = trap_Cvar_Get( "rs_grenade_gravity", "1.22", CVAR_ARCHIVE );
	rs_grenade_friction = trap_Cvar_Get( "rs_grenade_friction", "0.85", CVAR_ARCHIVE );
	rs_grenade_prestep = trap_Cvar_Get( "rs_grenade_prestep", "24", CVAR_ARCHIVE );
	rs_rocket_prestep = trap_Cvar_Get( "rs_rocket_prestep", "10", CVAR_ARCHIVE );
	rs_plasma_prestep = trap_Cvar_Get( "rs_plasma_prestep", "0", CVAR_ARCHIVE );
	rs_plasma_hack = trap_Cvar_Get( "rs_plasma_hack", "1", CVAR_ARCHIVE );
}

/**
 * RS_Shutdown
 * Racesow cleanup
 */
void RS_Shutdown( void )
{
}

/**
 * Racesow thinking, called every game frame
 */
void RS_Think( void )
{
}
