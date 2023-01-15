#pragma once

#include "strategy.hpp"
#include <vector>
#include <memory>

namespace model {

	class Sequence : public Strategy {
	public:

		Sequence(const Profile& _profile);

		void apply() override;

	private:
		//std::vector<std::unique_ptr<Strategy>> strategies;
	};

}