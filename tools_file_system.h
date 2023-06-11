#ifndef CPPTOOLS_TOOLS_FILE_SYSTEM_H
#define CPPTOOLS_TOOLS_FILE_SYSTEM_H

#include <filesystem>

namespace tools{

    namespace filesystem{
        bool isPathValid(const std::string& path) {
            std::filesystem::path filePath(path);
            return filePath.has_filename();
        }
    }

}

#endif
