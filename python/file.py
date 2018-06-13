#!/usr/bin/python

# Open a file
with open("foo.txt", "rw+") as fo:
    print "Name of the file: ", fo.name
    for line in fo:
         print line
    fo.close();
