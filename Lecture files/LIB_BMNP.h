#define SetBit(VAR , BitNo)\
		VAR |= (1 << BitNo)
		
#define ClearBit(VAR , BitNo)\
		VAR &= ~(1 << BitNo)
		
#define ToggleBit(VAR , BitNo)\
		VAR ^= (1 << BitNo)
		
#define GetBit(VAR , BitNo)\
		( VAR >> BitNo ) & 
		
		