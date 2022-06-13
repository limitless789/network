Assignment 4 Writeup
=============

My name: chae dongwook

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 24 hours to do (including the time on studying, designing, and writing the code).

If you used any part of best-submission codes, specify all the best-submission numbers that you used (e.g., 1, 2): 3

- **Caution**: If you have no idea about above best-submission item, please refer the Assignment PDF for detailed description.

Your benchmark results (without reordering, with reordering): [0.00, 0.00] not well-running

Program Structure and Design of the TCPConnection:
if connect(), send syn with sender.fill_window
if receive syn segment, check ack flag to establish connection.
when write(), use sender.fill_window() to send segment
when receive, transmit the data to receiver and sender.ack_received() and if needed, send segments
when tick(), use sender.tick method to check anything more to be sent.
input_ended(), use sender.fill_window to send a segment with fin flag
everytime sending or interacting method, check connection ending with ending() method that check conditions written in chapter 5 of given assignment pdf.
rst flag is just established very same with the chapter 4:qna part of given pdf. 

Implementation Challenges:
cannot understand what is the problem of my code in debugging:error code is broken like: "error:akwefmkajnsljdfka"

Remaining Bugs:
sending not-wanted segments in unknown time
not closed well in both ways:active or passive
always timeout when check_lab4 goes uXX test like udp, ucs, etc.

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this assignment better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
