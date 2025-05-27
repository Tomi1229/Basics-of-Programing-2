#include <vector>
#include <memory>
#include <string>
#include <unordered_map>
#include "node.h"
#include "lines.h"

class Grid
{
private:
    std::unordered_map<std::string, std::shared_ptr<Node>> nodes;
    std::vector<std::shared_ptr<Line>> lines;

public:
    Grid();

    void addNode(const std::shared_ptr<Node> &node);
    void addLine(const std::shared_ptr<Line> &line);

    std::shared_ptr<Node> getNodeById(const std::string &id) const;
    const std::unordered_map<std::string, std::shared_ptr<Node>> &getAllNodes() const;
    const std::vector<std::shared_ptr<Line>> &getAllLines() const;

    int countIncomingLines(const std::string &nodeId) const;
    int countOutgoingLines(const std::string &nodeId) const;

    void exportToDOT(const std::string &filename) const;

    void printSummary() const;
};