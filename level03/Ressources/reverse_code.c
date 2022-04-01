/* jsdec pseudo code output */
/* /Users/abourbou/Desktop/Projects_42/projet_en_cours/snow-crash/level03/Ressources/level03 @ 0x80484a4 */
#include <stdint.h>
 
uint32_t dbg_main (void) {
    int32_t argc;
    char ** argv;
    char ** envp;
    int32_t var_4h;
    int32_t var_8h;
    gid_t gid;
    uid_t uid;
    /* int main(int argc,char ** argv,char ** envp); */
    eax = getegid ();
    eax = geteuid (eax);
    eax = gid;
    eax = gid;
    eax = gid;
    setresgid (eax, eax, gid, gid);
    eax = uid;
    eax = uid;
    eax = uid;
    setresuid (eax, uid, uid);
    system ("/usr/bin/env echo Exploit me");
    return eax;
}