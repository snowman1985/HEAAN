#include "SecKey.h"

#include "../utils/NumUtils.h"

SecKey::SecKey(Params& params) {
	vector<CZZ> svec;
	NumUtils::sampleGauss(svec, params.n, params.sigma);
	NumUtils::fftInvSpecial(s, svec, params.cksi);
}
