#we got a level13 executable => we pass it in Cutter
we see it use getuid and then if id is good he gives us the flag
=> we need to pass the getuid

#for this we create a getuid function and pass it on a lib.so
cd /tmp
vim getuid.c
gcc -fPIC -c getuid.c
gcc -shared -o lib.so getuid.o

#ensuite il faut que ça remplace le getuid de la fct de base
#pour cela on utilise la MACRO LD_PRELOAD qui permet de load une lib avant toute les autres
export LD_PRELOAD=/tmp/lib.so

#on fait un lien symbolic pour rester dans le meme environnement
ln -s ~/level13 level13
./level13
=>ça ne marche pas

#mais si on essaye dans gdb
>
(gdb) run
Starting program: /tmp/level13 
your token is 2A31L79asukciNyi8uppkEuSx
