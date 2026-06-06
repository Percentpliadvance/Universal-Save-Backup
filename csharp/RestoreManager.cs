using System.IO;

namespace UniversalSaveBackup
{
    public class RestoreManager
    {
        public bool Restore(string source, string destination)
        {
            return Directory.Exists(source);
        }
    }
}
