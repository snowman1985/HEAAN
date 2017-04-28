#ifndef SCHEME_CIPHER_H_
#define SCHEME_CIPHER_H_

using namespace std;
using namespace NTL;

class Cipher {
public:
	ZZX c0;
	ZZX c1;
	long level;
	long logSlots;

//	ZZ eBnd;
//	ZZ mBnd;
	Cipher(ZZX c0, ZZX c1, long level, long logSlots) : c0(c0), c1(c1), level(level), logSlots(logSlots) {}
//	Cipher(CZZX c0, CZZX c1, long level, ZZ eBnd, ZZ mBnd) : c0(c0), c1(c1), level(level), eBnd(eBnd), mBnd(mBnd) {}
};

#endif /* SCHEME_CIPHER_H_ */
