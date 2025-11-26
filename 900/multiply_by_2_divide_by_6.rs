use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n).unwrap();
    let mut n : i64 = input_n.trim().parse().expect("hola");

    let mut moves = 0;
    while n != 1 {
      while n < 6 || n % 2 == 1{
        n *= 2;
        moves += 1;
      }

      if n % 6 != 0 {
        println!("{}", -1);
        break;
      } else {
        while n % 6 == 0 {
          n /= 6;
          moves += 1;
        }
      }
    }

    t -= 1;
    if n == 1 {
      println!("{}", moves);
    }
  }
}