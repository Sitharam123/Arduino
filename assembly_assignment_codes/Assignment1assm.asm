;Simplify the following Boolean functions, using four-variable maps:  
;(b) F (A, B, C, D) =  (2, 3, 6, 7, 12, 13, 14)


.include "/home/vedula/m328Pdef.inc"
ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
out DDRD,r16		;declaring pins as output

ldi r16,0b00000001	;initializing A
ldi r17,0b00000001     ;initializing B
ldi r18,0b00000000	;initializing C
ldi r19,0b00000001     ;initializing D
ldi r20,0b00000001  

mov r0,r16
eor r0,r20   ;A'

mov r1,r17
eor r1,r20   ;B'

mov r2,r18
eor r2,r20   ;C'

mov r3,r19
eor r3,r20   ;D'

and r16,r17  ;AB
mov r4,r16

and r4,r2    ;ABC'

and r16,r3   ;ABD'

and r0,r18   ;A'C

or r4,r16    ;ABC'+ABD'

or r4,r0     ;F=ABC'+ABD'+A'C
mov r16,r4

lsl r16
lsl r16

out PORTD,r16  ;writing output to pins 2,3,4,5

start:
rjmp start

