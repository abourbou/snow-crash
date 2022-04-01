/* jsdec pseudo code output */
/* /Users/abourbou/Desktop/Projects_42/projet_en_cours/snow-crash/level13/Ressources/level13 @ 0x804858c */
#include <stdint.h>
 
int32_t main (void) {
    uid_t var_4h;
    int32_t var_8h;
    eax = getuid ();
    if (eax != 0x1092) {
        eax = getuid ();
        edx = "UID %d started us but we we expect %d\n";
        var_8h = 0x1092;
        var_4h = eax;
        printf (edx);
        exit (1);
    }
    eax = ft_des ("boe]!ai0FB@.:|L6l@A?>qJ}I");
    edx = "your token is %s\n";
    var_4h = eax;
    printf (edx);
    return eax;
}
