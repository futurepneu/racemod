#include "g_local.h"

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