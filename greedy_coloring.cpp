// File: greedy_coloring.cpp
// Description: This file is part of libgraph project, distributed under the terms
// of the GNU General Public License version 3.0.
// Author: Abraham Gabrielyan

//Includes from this project
#include "greedy_coloring.hpp"

//includes from standard library
#include <unordered_set>

std::unordered_map<uint32_t, uint32_t> libgraph::greedy_coloring(const libgraph::adjacency_matrix& graph)
{
	if(graph.get_total_vertices() == 0)
	{
		throw std::logic_error("ERROR: Can't perform coloring on a graph with empty vertex set.");
	}
	uint32_t color = 0;
	uint32_t max_color = graph.get_total_vertices();
	std::unordered_map<uint32_t, uint32_t> coloring_map;	
	std::unordered_set<uint32_t> used_colors;
	auto matrix = graph.get_matrix();

	for(uint32_t vertex_id = 0; vertex_id < max_color; ++vertex_id)
	{
		for(uint32_t col = 0; col < max_color; ++col)
		{
			if(matrix[vertex_id][col] and coloring_map.contains(col))
			{
				used_colors.insert(coloring_map[col]);
			}
		}
		while(used_colors.count(color) > 0)
		{
			++color;
		}
		coloring_map.insert({vertex_id, color});
		color = 0;
		used_colors.clear();
	}
	return coloring_map;
}
