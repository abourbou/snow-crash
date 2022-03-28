#we have 2 files : level08 and token
level08 read a file
token must contain the password

#try to reverse engineering it
gbd is not readable
=> use of snowman a free software for reverse engineering

the program looks like it :

if no arg 
	print "[file to read]\n"
	exit
if (strstr(arg, "token"))
	print "you may not access token"
	exit
else
	try to open and read file
	exit

=>maybe we need to use the file token without token in the name

#*for this we will create a symbolic link
ln -vs ~/token /tmp/definitely_not_tok
ls -l /tmp/definitely_not_tok
=> has been created!

~/level08 /tmp/definitely_not_tok
=> quif5eloekouj29ke0vouxean
su flag08
mdp : quif5eloekouj29ke0vouxean
getflag
