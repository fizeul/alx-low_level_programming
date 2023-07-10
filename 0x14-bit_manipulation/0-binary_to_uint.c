#include "main.h"


unsigned int binary_to_uint(const char *b){

    int s;
    int ui;

    ui = 0;

    if (b == NULL)
        return (0);

    for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}

	for (s = 0; b[s] != '\0'; s++)
	{
		ui <<= 1;
		if (b[s] == '1')
			ui += 1;
	}

    return (ui);

}
