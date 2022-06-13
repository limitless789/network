Assignment 6 Writeup
=============

My name: ChaeDongwook

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 8 hours to do (including the time on studying, designing, and writing the code).

If you used any part of best-submission codes, specify all the best-submission numbers that you used (e.g., 1, 2): 4


- **Caution**: If you have no idea about above best-submission item, please refer the Assignment PDF for detailed description.

Program Structure and Design of the Router:
Consider both prefix length and route prefix, save a new data, valid_prefix with 32-prefix length shifted 0xFFFFFFFF.
32 shift cannot be happened, so case of length=0 is ejected by if state.
Save valid prefix, prefix length, address(next_hop), interface number in a struct.
Datagram arrived, for all struct(saved above) inside router class, check datagram's destination and valid prefix to find 'match'.
when get longest matched destination, send datagram with that interface number and next_hop.has_value or from_ipv4_numeric method.

Implementation Challenges:
even i didn't write any code, there were segfault error on Constructing network part , not failed error when i ran check_lab6.
I moved the whole file to window OS because I thought it happened because of my misunderstanding of using LINUX or git,
but I couldn't get to know what was the problem, just after coming back to virtual machine the problem solved, know working well.

Remaining Bugs:
no bugs, I think.

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this lab better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
