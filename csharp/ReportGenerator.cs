using System.Text;

namespace UniversalSaveBackup
{
    public class ReportGenerator
    {
        public string GenerateSummary()
        {
            StringBuilder sb = new();

            sb.AppendLine("Universal Save Backup Report");

            return sb.ToString();
        }
    }
}
