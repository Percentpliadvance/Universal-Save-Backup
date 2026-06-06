#include <filesystem>
#include <vector>
#include <string>

class SaveScanner
{
public:
std::vector[std::string](std::string) Scan(const std::string& path)
{
std::vector[std::string](std::string) results;

```
    for (const auto& entry : std::filesystem::directory_iterator(path))
    {
        results.push_back(entry.path().string());
    }

    return results;
}
```

};
