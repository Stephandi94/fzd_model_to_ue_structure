#pragma once
#include <string>

namespace model {
	namespace profile {
		struct Profile {
			std::string name;
			float test_float;
		
			struct parameters {
				float test_param;
			} parameters;
		
		};
	}
}




