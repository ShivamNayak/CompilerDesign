		MAIN: 
			MVI B 1
			MVI C 2
		L7:
			MOV A C
			CMP B
			JC L8
			HLT
		L8:
			MOV A B
			ADD C
			MOV D A
			MOV E D
		L5:
			MOV A B
			CMP C
			JC L6
			JMP L7
		L6:
			MOV A B
			SUB C
			MOV H A
			MOV L H
			MOV A C
			CMP B
			JC L1
			JMP L2
		L1:
			MVI C 10
			JMP L5
		L2:
			MVI B 20
		L3:
			MOV A C
			CMP B
			JC L4
			HLT
		L4:
			MVI A 1
			ADD B
			MOV B A
			MOV B B
			JMP L3
