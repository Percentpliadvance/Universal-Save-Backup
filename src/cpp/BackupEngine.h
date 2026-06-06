#pragma once

#include <string>
#include <vector>

class BackupEngine
{
public:
bool CreateBackup(const std::string& sourcePath,
const std::string& destinationPath);

```
bool RestoreBackup(const std::string& backupPath,
                   const std::string& restorePath);

std::vector<std::string> GetAvailableBackups();
```

};
