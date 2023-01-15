
#include "../include/strategy.hpp"

namespace model {
	class TestStrategy : public Strategy {
	public:
		using Strategy::Strategy;
		void apply() override;
	};
}