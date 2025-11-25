using System;
using System.Linq;

class Master {
  static void Main() {
    int t = int.Parse(Console.ReadLine());
    while (t-- > 0) {
      int n = int.Parse(Console.ReadLine());

      string[] line_str = Console.ReadLine().Split();
      int[] line = line_str.Select(x => int.Parse(x)).ToArray();

      int first_diff = 0;
      int second_diff = 0;
      int third_diff = 0;
      int fourth_diff = line[n-1] - line[0];

      for (int i = 1; i < n; i++) {
        if (line[i-1] - line[i] > first_diff) {
          first_diff = line[i-1] - line[i];
        }
        if (line[i] - line[0] > second_diff) {
          second_diff = line[i] - line[0];
        }
        if (line[n-1] - line[i-1] > third_diff) {
          third_diff = line[n-1] - line[i-1];
        }
      }

      Console.WriteLine(Math.Max(first_diff, Math.Max(second_diff, Math.Max(third_diff, fourth_diff))));
    }
  }
}