#ifndef _Config
#define _Config

#include <bits/stdc++.h>
using namespace std;

class Config {
	public:
		int seed,
			numVehicles,
			k;
		bool standardize,
			debug;
		double maxV,
			minV;
		map <string, string> inputArg;

		Config();
		Config(int argc, char** argv);

		static printArgList();

	private:
		int toInt(string c);
		double toDouble(string c);
		bool toBool(string c);
		void setDefault();
};
#endif
