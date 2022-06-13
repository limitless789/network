Assignment 3 Writeup
=============

My name: Chae Dongwook	

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 10 hours to do (including the time on studying, designing, and writing the code).

If you used any part of best-submission codes, specify all the best-submission numbers that you used (e.g., 1, 2): 1

- **Caution**: If you have no idea about above best-submission item, please refer the Assignment PDF for detailed description.

Program Structure and Design of the TCPSender:
make TCPSegment as it needs, with syn or fin flag.
check available space with receiver's window and ongoing bytes. if greater than given number, repetition occur.
when acknowledged, check the number is valid, if so, then save the number to check what segment has acknowledged and what should be re-sent.
it has TCPSegment queue inside, and when it send the segment, also save it in the queue. If the segment should be re-sent, pop from the queue.
always calculate 'flight' member, which implies how many bytes are now ongoing(not acknowledged).

Implementation Challenges:
So little information for what is the goal. For some test cases, it's hard to know what implementation the test requires for me.

Remaining Bugs:
For test 16, I changed flight(ongoing bytes) variable on my accord(not by algorithm) but could not meet the requirement of the test.

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this assignment better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
