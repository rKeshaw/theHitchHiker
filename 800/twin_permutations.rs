use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n);
    let n : i32 = input_n.trim().parse().expect("hola");

    let mut string_arr = String::new();
    io::stdin().read_line(&mut string_arr).expect("voila");

    let mut arr = string_arr.split_whitespace();

    for i in 0..n {
      print!("{} ", n + 1 - arr.next().unwrap().parse::<i32>().unwrap());
    }
    t -= 1;
    println!();
  }
}