#!/usr/bin/env perl
# localhost:4646
use CGI qw{param};
print "Content-type: text/html\n\n";

sub t {
  $nn = $_[1];
  $xx = $_[0];
  print("x before : [$xx]\n");
  $xx =~ tr/a-z/A-Z/;
  $xx =~ s/\s.*//;
  print("x after : [$xx]\n");
  @output = `egrep "^$xx" /tmp/xd 2>&1`;
  print("output : [@output]\n");
  foreach $line (@output) {
      ($f, $s) = split(/:/, $line);
      if($s =~ $nn) {
          return 1;
      }
  }
  return 0;
}

sub n {
  if($_[0] == 1) {
      print("..");
  } else {
      print(".");
  }
}

n(t(param("x"), param("y")));
