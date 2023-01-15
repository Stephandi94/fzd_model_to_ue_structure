#include "sequence.hpp"
#include "../strategies/test_strategy.hpp"
#include <iostream>


model::Sequence::Sequence(const Profile& _profile) : Strategy(_profile)
{
	//strategies.emplace_back(new TestStrategy(_profile));
}

void model::Sequence::apply()
{	
	/*std::cout << "Sequence.apply() was called!";
	for (const auto& strategy : strategies) {
		strategy->apply();
	}*/
}
