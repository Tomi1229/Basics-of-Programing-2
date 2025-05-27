#include "grid.h"
#include <iostream>
#include <fstream>

Grid::Grid() {}

void Grid::addNode(const std::shared_ptr<Node> &node)
{
    nodes[node->getId()] = node;
}

void Grid::addLine(const std::shared_ptr<Line> &line)
{
    lines.push_back(line);
}

std::shared_ptr<Node> Grid::getNodeById(const std::string &id) const
{
    auto it = nodes.find(id);
    if (it != nodes.end())
    {
        return it->second;
    }
    return nullptr;
}

const std::unordered_map<std::string, std::shared_ptr<Node>> &Grid::getAllNodes() const
{
    return nodes;
}

const std::vector<std::shared_ptr<Line>> &Grid::getAllLines() const
{
    return lines;
}

int Grid::countIncomingLines(const std::string &nodeId) const
{
    int count = 0;
    for (const auto &line : lines)
    {
        if (line->getTo()->getId() == nodeId)
        {
            count++;
        }
    }
    return count;
}

int Grid::countOutgoingLines(const std::string &nodeId) const
{
    int count = 0;
    for (const auto &line : lines)
    {
        if (line->getFrom()->getId() == nodeId)
        {
            count++;
        }
    }
    return count;
}

void Grid::exportToDOT(const std::string &filename) const
{
    std::ofstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Could not open file for DOT export: " << filename << std::endl;
        return;
    }

    file << "digraph Grid {\n";

    // Nodeok
    for (const auto &[id, node] : nodes)
    {
        file << "  \"" << id << "\" [label=\"" << node->getType() << "\\n"
             << id << "\"];\n";
    }

    // Élek
    for (const auto &line : lines)
    {
        file << "  \"" << line->getFrom()->getId() << "\" -> \"" << line->getTo()->getId() << "\" "
             << "[label=\"" << line->getType() << "\\n"
             << line->getInfo() << "\"];\n";
    }

    file << "}\n";
    file.close();
}

void Grid::printSummary() const
{
    std::cout << "Hálózati összefoglaló:\n";
    std::cout << "Csomópontok száma: " << nodes.size() << "\n";
    std::cout << "Vezetékek száma: " << lines.size() << "\n";

    for (const auto &[id, node] : nodes)
    {
        std::cout << "- " << id << " (" << node->getType() << "): "
                  << countIncomingLines(id) << " bejövő, "
                  << countOutgoingLines(id) << " kimenő vezeték\n";
    }
}