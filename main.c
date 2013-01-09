#include <stdio.h>
#include <string.h>

#include "base64.h"

int
main(void)
{
	unsigned char input[] = "pleasure.";
	char output[13];
	bzero(output, sizeof(output));

	base64_encode(input, sizeof(input) - 1, output);
	printf("%s: %s\n", input, output);

	bzero(input, sizeof(input));
	base64_decode(output, sizeof(output) - 1, input);
	printf("%s: %s\n", output, input);

	return 0;
}

