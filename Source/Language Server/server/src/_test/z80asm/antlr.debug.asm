
     ADC  HL,BC
     ADC  HL,DE
     ADC  HL,HL
     ADC  HL,SP

     ADD  HL,BC
     ADD  HL,DE
     ADD  HL,HL
     ADD  HL,SP
     ADD  IX,BC
     ADD  IX,DE
     ADD  IX,IX
     ADD  IX,SP
     ADD  IY,BC
     ADD  IY,DE
     ADD  IY,IY
     ADD  IY,SP

     DEC  BC
     DEC  DE
     DEC  HL
     DEC  IX
     DEC  IY
     DEC  SP


     INC  BC
     INC  DE
     INC  HL
     INC  IX
     INC  IY
     INC  SP

     
     JP   addr16
;     JP   (HL)
;     JP   (IX)
;     JP   (IY)
     JP   HL
     JP   IX
     JP   IY
     JP   C,addr16
     JP   M,addr16
     JP   NC,addr16
     JP   NZ,addr16
     JP   P,addr16
     JP   PE,addr16
     JP   PO,addr16
     JP   Z,addr16

loop2:
     JR   C,loop2
     JR   NC,loop2
     JR   NZ,loop2
     JR   Z,loop2
     JR   loop2

