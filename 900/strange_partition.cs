using System;
using System.Linq;

class Partition {
  static void Main() {
    int t = int.Parse(Console.ReadLine());
    while (t-- > 0) {
      string[] query_str = Console.ReadLine().Split();
      long[] query = query_str.Select(x => long.Parse(x)).ToArray();
      long n = query[0];
      long x = query[1];

      string[] line_str = Console.ReadLine().Split();
      long[] line = line_str.Select(x => long.Parse(x)).ToArray();

      long max_accumulated = 0;
      long sum_accumulated = 0;

      for (long i = 0; i < n; i++) {
        sum_accumulated += line[i];
        max_accumulated += (line[i] + x - 1) / x;
      }

      long min = (sum_accumulated + x - 1) / x;

      Console.WriteLine("{0} {1}", min, max_accumulated);
    }
  }
} 