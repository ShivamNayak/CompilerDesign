		MAIN: 
			MVI B 1
			MVI C 2
		L5:
			MVI C
			CMP B
			JC L6
			HLT
		L6:
			MVI B
			ADD C
			MOV D A
			MOV E D
		L3:
			MVI B
			CMP C
			JC L4
			JMP L5
		L4:
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
			JMP L3
		L2:
			MVI B 20
			JMP L3
			JMP L5
