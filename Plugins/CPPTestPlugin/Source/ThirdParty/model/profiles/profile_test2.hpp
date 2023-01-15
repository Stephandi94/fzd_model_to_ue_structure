#pragma once

#include "profile.hpp"


namespace model {
	namespace profile {
		namespace test2 {
			inline Profile generate() {
				Profile Test2;

				Test2.name = "Test2";
				Test2.test_float = 69.f;
				Test2.parameters.test_param = 4.f;

				return Test2;
			}
		}
	}
}