#!/usr/bin/python

# Open a file
with open("lan0_0_rx", "rw+") as fo:
    print "Name of the file: ", fo.name
    temp = []
    i = 0
    for line in fo:
         line = line.strip('\n') 
         temp = line.split()
         if i > 0:
            pps = (int(temp[0]) - p_pkt) / 60
            pktlen = ((int(temp[1]) - p_bytes) / (int(temp[0]) - p_pkt))
         else:
            pps = 0
            pktlen = 0
         p_bytes = int(temp[1])
         p_pkt = int (temp[0])
         print "At t = " + str(i) + " pkt: " + temp[0] + " bytes = " + temp[1] + " pps = " + str(pps) + " pktlen = " + str(pktlen)
         i = i + 1
    fo.close();

