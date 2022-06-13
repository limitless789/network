Assignment 1 Writeup
=============

My name: Chae Dongwook

My POVIS ID: dongdc

My student ID (numeric): 20200622

This assignment took me about 10 hours to do (including the time on studying, designing, and writing the code).

Program Structure and Design of the StreamReassembler:
develop total string with blank if that series of bytes had not been written, and when written some part of the string in stream, erase from the front of the string.
with the given index, find exact position of given string and put it in there, if overlap, remove overlapped part.
if there's no blank from the start of this string to some part(even one character)write it into the _output stream.
when write into the string i made, always check capacity and available bytes so that flexibly control the focused part on the string.

Implementation Challenges:
dealing overlap was the most difficult.

Remaining Bugs:
number of RX bytes incorrect: terminal said, i even don't know what it means.

- Optional: I had unexpected difficulty with: [describe]

- Optional: I think you could make this assignment better by: [describe]

- Optional: I was surprised by: [describe]

- Optional: I'm not sure about: [describe]
