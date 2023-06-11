#ifndef CPPTOOLS_TOOLS_FILE_SYSTEM_H
#define CPPTOOLS_TOOLS_FILE_SYSTEM_H

#include <filesystem>
#include <algorithm>

namespace tools{

    namespace filesystem {
        bool isPathValid(const std::string &path) {
            std::filesystem::path filePath(path);
            return filePath.has_filename();
        }

        std::string formatPath(const std::string &path) {
            std::string formattedPath = path;

#ifdef _WIN32
            // Windows path formatting
            std::replace(formattedPath.begin(), formattedPath.end(), '/', '\\');
#else
            // Linux and Mac path formatting
            std::replace(formattedPath.begin(), formattedPath.end(), '\\', '/');
#endif

            return formattedPath;
        }
    }

}

#endif
