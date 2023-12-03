// File: adjacency_matrix.cpp
// Description: This file is part of libgraph project, distributed under the terms
// of the GNU General Public License version 3.0.
// Author: Abraham Gabrielyan

#pragma once

//Headers from this project
#include "adjacency_matrix.hpp"

//Headers from standard libraries
#include <unordered_map>
#include <cstdint>

namespace libgraph
{
	std::unordered_map<uint32_t, uint32_t> greedy_coloring(const libgraph::adjacency_matrix& graph);
}
