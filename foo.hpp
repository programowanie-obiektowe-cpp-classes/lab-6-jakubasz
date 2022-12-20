#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
std::vector< char > v(people.size());

	std::for_each(people.begin(), people.end(), [](Human &n) { n.birthday(); });
	std::transform(people.begin(), people.end(), v.begin(), [](const Human &n) { return n.isMonster() ? 'n' : 'y'; });
	std::reverse(v.begin(), v.end());
    return ret_v;
}
