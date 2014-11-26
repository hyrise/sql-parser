#ifndef __HELPER_H__
#define __HELPER_H__


std::vector<std::string> readlines(std::string path) {
    std::ifstream infile(path);
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);

        // Skip comments
        if (line[0] != '#') {
            lines.push_back(line);
        }
    }
    return lines;
}


#endif