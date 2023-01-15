#pragma once

#include "../profiles/profile.hpp"

namespace model {

	using profile::Profile;

	class Strategy {
	public:
		Strategy(const Profile& _profile) : profile(_profile) {}

		virtual ~Strategy() = default;

		Strategy(const Strategy&) = delete;

		Strategy& operator=(const Strategy&) = delete;

		virtual void apply() = 0;

	protected:
		const Profile& profile;
	};

}