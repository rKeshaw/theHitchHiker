using System;
using System.Linq;

class AP {
  static void Main() {
    int t = int.Parse(Console.ReadLine());
    while (t-- > 0) {
      string[] line_str = Console.ReadLine().Split();
      long[] arr = line_str.Select(x => long.Parse(x)).ToArray();
      long a = arr[0], b = arr[1], c = arr[2];

      if (2 * b == a + c) {
        Console.WriteLine("yES");
        continue;
      }

      long check1 = 2 * b - c;
      if (check1 <= 0) {
      }
      else if (check1 % a == 0) {
        Console.WriteLine("yES");
        continue;
      }
      long check2 = a + c - 2 * b;
      if (check2 <= 0) {
      }
      if (check2 % (2 * b) == 0) {
        Console.WriteLine("yES");
        continue;
      }

      long check3 = 2 * b - a;
      if (check3 <= 0) {
        Console.WriteLine("nO");
      }
      else if (check3 % c == 0) {
        Console.WriteLine("yES");
      } else {
        Console.WriteLine("nO");
      }
    }
  }
}