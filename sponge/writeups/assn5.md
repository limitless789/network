Assignment 5 Writeup
=============

My name: Chae Dongwook

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 8 hours to do (including the time on studying, designing, and writing the code).

If you used any part of best-submission codes, specify all the best-submission numbers that you used (e.g., 1, 2): best code of 4

- **Caution**: If you have no idea about above best-submission item, please refer the Assignment PDF for detailed description.

Program Structure and Design of the NetworkInterface:
use 5 vector for inside database:ip-ethernet-time and requested ip-requested time set.
index plays a role of mapping: in_ip[3] is mapped to in_eth[3], like this.
when send_datagram, check in_ip and if there is the value we are finding, use in_eth to send datagram.
if there's no value in in_ip, send arp request with arp method and record the ip and time in request vectors.
when receiving, check what type of frame it is, and check the destination is right, parse result is not error.
If what we got is arp request, send reply with arp method, what we used just when send request arp, 
arp method  receive boolean request flag as a parameter to see what it should send is arp request or arp reply.
if what we got is arp reply, record the ip, ethernet address, receiving time in in_ip, in_eth, in_time vectors, 
And erase the ip in request_ip and request_time vectors.
When tick method is called, add the passed time to inside ms_tick variable and check if there is any ip that is mapped to in_time that
is received more than 30 seconds. 

Implementation Challenges:
still cannot understand using of ETHERNET_BROADCAST, even though i used it with const_cast with the help of console.

Remaining Bugs:
maybe no remaining bugs

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this assignment better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
