#define RS_MAPLIST_ITEMS 20

extern cvar_t *rs_grenade_minKnockback;
extern cvar_t *rs_grenade_maxKnockback;
extern cvar_t *rs_grenade_splash;
extern cvar_t *rs_grenade_speed;
extern cvar_t *rs_grenade_timeout;
extern cvar_t *rs_grenade_gravity;
extern cvar_t *rs_grenade_friction;
extern cvar_t *rs_grenade_prestep;
extern cvar_t *rs_grenade_splashfrac;
extern cvar_t *rs_rocket_minKnockback;
extern cvar_t *rs_rocket_maxKnockback;
extern cvar_t *rs_rocket_splash;
extern cvar_t *rs_rocket_speed;
extern cvar_t *rs_rocket_prestep;
extern cvar_t *rs_rocket_antilag;
extern cvar_t *rs_plasma_minKnockback;
extern cvar_t *rs_plasma_maxKnockback;
extern cvar_t *rs_plasma_splash;
extern cvar_t *rs_plasma_speed;
extern cvar_t *rs_plasma_prestep;
extern cvar_t *rs_plasma_hack;
extern cvar_t *rs_plasma_splashfrac;
extern cvar_t *rs_gunblade_minKnockback;
extern cvar_t *rs_gunblade_maxKnockback;
extern cvar_t *rs_gunblade_splash;

void RS_Init( void );
void RS_Shutdown( void );
void RS_Think( void );
void RS_SplashFrac( const vec3_t origin, const vec3_t mins, const vec3_t maxs, const vec3_t point, float maxradius, vec3_t pushdir, float *kickFrac, float *dmgFrac, float splashFrac );