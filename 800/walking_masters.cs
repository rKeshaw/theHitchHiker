using System;
using System.Linq;

class Master {
  static void Main() {
    int t = int.Parse(Console.ReadLine());
    while (t-- > 0) {
      string[] line_str = Console.ReadLine().Split();
      long[] line = line_str.Select(x => long.Parse(x)).ToArray();

      long change_y = line[3] - line[1];
      long change_x = line[2] - line[0];

      if (change_y < 0) {
        Console.WriteLine(-1);
        continue;
      }
      if (change_x > change_y) Console.WriteLine(-1);
      else Console.WriteLine(2 * change_y - change_x);
    }
  }
}