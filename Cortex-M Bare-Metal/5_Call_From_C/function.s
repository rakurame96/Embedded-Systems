				AREA		|.text|,CODE,ALIGN=2
				THUMB
				EXPORT		Number

Number
		MOV32		R0, #0x20000001
		STR		R0, [R0]		; RETURN VALUE OF A FUNCTION IS STORED IN REGISTER R0 IN ASSEMBLY, AUTOMATICALLY
		BX		LR
		
		ALIGN
		END