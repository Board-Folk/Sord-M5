# M5Serial8251 v2

![Image of M5Serial8251 version 1 cartridge board in green](https://github.com/Board-Folk/Sord-M5/blob/main/images/M5Serial8251_v1_Small.png)
	
A simple serial interface combining various schematics using the 8251 chip and MAX232 drivers. Compatible with M5 Terminal ROM.

It seem thats this board doesn't half the baud rate as M5 Terminal expects, which is partially beneficial as 600 baud, the maximum data rate becomes 1200 baud on the wire.

### M5 Sample Operation

Press space twice to enter setup. Pressing Return changes entries. Space moves on. The following entries were used during testing:

Code Type: JIS 8<br>
Parity:	No<br>
Stop Bit: 1<br>
Baud Rate: 600<br>
Mode: Ignore<br>
Output: CRT<br>
Duplex: Half<br>
Terminal Xon/Xoff: No<br>
Host Xon/Xoff: No<br>
Auto Newline: No<br>
Hard Copy: No<br>
<br>
As noted above, 600 baud became 1200 baud on the wire.