#pragma once

#include "profile.hpp"

namespace model {
	namespace profile {
		namespace test1 {
			inline Profile generate() {
				Profile Test1;

				Test1.name = "Test1";
				Test1.test_float = 42.f;
				Test1.parameters.test_param = 3.f;

				return Test1;
			}
		}
	}
}