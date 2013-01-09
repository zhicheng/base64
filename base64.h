#ifndef __BASE64_H__
#define __BASE64_H__

enum {BASE64_OK = 0, BASE64_INVALID};

int
base64_encode(unsigned char *in, int inlen, char *out);

int
base64_decode(char *in, int inlen, unsigned char *out);


#endif /* __BASE64_H__ */

