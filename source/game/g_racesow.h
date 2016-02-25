#define RS_MAPLIST_ITEMS 20

extern cvar_t *rs_grenade_prestep;
extern cvar_t *rs_rocket_prestep;
extern cvar_t *rs_plasma_prestep;

void RS_Init( void );
void RS_Shutdown( void );
void RS_Think( void );