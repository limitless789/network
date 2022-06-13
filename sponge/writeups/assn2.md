Assignment 2 Writeup
=============

My name: Chae Dongwook

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 12 hours to do (including the time on studying, designing, and writing the code).

If you used any part of best-submission codes, specify all the best-submission numbers that you used (e.g., 1, 2): 1

- **Caution**: If you have no idea about above best-submission item, please refer the Assignment PDF for detailed description.

Program Structure and Design of the TCPReceiver and wrap/unwrap routines:
 tcpreceiver takes TCPSegments and first see if there are flags for syn or fin, if syn, sets the online signal and ready to get data with the save of isn from seqno, , if fin, sets end flag.
Then gets data and pushes it to reassembler TCPReceiver contains. All detailed process is controlled by reassembler.
Everytime Receiver checks its window before it executes any tasks.
 For the wrapping/unwrapping task, just take the part under 2^32 by bit operation &0x11111111, easily wrap given numbers.
when unwrapping, save temp the sum of multiplier of 2 between 2^32 and 2^64 before it reaches checkpoint, so it fastly get the needed number n, nearest to checkpoint and which wrapped to given number.

Implementation Challenges:
i think this virtual machine's operation is quite slower than my computer's real performance, so it takes quite a lot time for dealing with check_lab2's case 4.

Remaining Bugs:
still my TCPReceiver seems to be not accepting special characters like ", when we look at check_lab2's case 10. 

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this assignment better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
