;Simplify the following Boolean function F , together with the don’t-care conditions d , and  
;then express the simplified function in sum-of-minterms form:  
;(c) F(A, B, C, D) =  (5, 6, 7, 12, 14, 15)
;d(A, B, C, D) =  (3, 9, 11, 15)

.include "/home/vedula/m328Pdef.inc"
ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
out DDRD,r16		;declaring pins as output

ldi r16,0b00000001	;initializing A
ldi r17,0b00000001  ;initializing B
ldi r18,0b00000000	;initializing C
ldi r19,0b00000000  ;initializing D
ldi r20,0b00000001  

mov r21,r16
mov r22,r17
mov r23,r18
mov r24,r19

mov r0,r16
eor r0,r20   ;A'

mov r1,r17
eor r1,r20   ;B'

mov r2,r18
eor r2,r20   ;C'

mov r3,r19
eor r3,r20   ;D'

and r17,r18  ;BC

and r0,r22   ;A'B

and r0,r24   ;A'BD

and r21,r22  ;AB

and r21,r3   ;ABD'

or r17,r0   ;BC+A'BD

or r17,r21   ;BC+A'BD+ABD'
mov r16,r17

lsl r16
lsl r16

out PORTD,r16  ;writing output to pins 2,3,4,5

start:
rjmp start
