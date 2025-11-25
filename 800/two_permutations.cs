using System;

class Master {
  static void Main() {
    int t = int.Parse(Console.ReadLine());
    while (t-- > 0) {
      string[] line_str = Console.ReadLine().Split();
      int[] line = line_str.Select(x => int.Parse(x)).ToArray();

      if (line[0] == line[1] && line[0] == line[2]) Console.WriteLine("yES");
      else {
        if (line[0] - (line[1] + line[2]) >= 2) Console.WriteLine("yES");
        else Console.WriteLine("nO");
      }
    }
  }
}