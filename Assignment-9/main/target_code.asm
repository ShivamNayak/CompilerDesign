		MAIN: 
			MVI B 1
			MVI C 2
		L7:
			MVI C
			CMP B
			JC L8
			HLT
		L8:
			MVI B
			ADD C
			MOV D A
			MOV E D
		L5:
			MVI B
			CMP C
			JC L6
			JMP L7
		L6:
			MVI B
			SUB C
			MOV H A
			MOV L H
			MVI C
			CMP B
			JC L1
			JMP L2
		L1:
			MVI C 10
			JMP L5
		L2
			MVI B 20
		L3:
			MVI C
			CMP B
			JC L4
			JMP L5
		L4:
			MVI B
			ADD 1
			MOV B A
			MOV B B
			JMP L3
			JMP L5
			JMP L7
