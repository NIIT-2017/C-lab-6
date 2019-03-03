unsigned int count = 0;	// global counter (how many numbers there are in the value)

char* int2str(char *buf, unsigned int value)
{

	if (0 == value)		// end of recursion
	{
		buf[count] = '\0';	// put '\0' the the end of string
		count = 0;			// now we set counter to the beginning of the string to print numbers into 'buf'
		return buf;
	}
	else
	{
		count++;
		int2str(buf, value / 10);		// enter to the next level of the recursion
		buf[count] = value % 10+48;		// 48 means char '0' in ASCII
		count++;						// set count to the next char in 'buf' (for printing)
		return buf;
	}
}

/*
	█			█
█████████████████████	
██				   ██
██   ██       ██   ██
██				   ██
██	██		   ██  ██
██	  █████████	   ██
██				   ██
█████████████████████	
*/